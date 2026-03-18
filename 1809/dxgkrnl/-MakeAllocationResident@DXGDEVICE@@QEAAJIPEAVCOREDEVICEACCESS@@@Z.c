/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FEF28
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01F5024 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, PERESOURCE **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  struct DXGPROCESS *Current; // r14
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int Resident; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-8h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+90h] [rbp+30h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 8160LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  LODWORD(v8) = 0;
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)Current + 62) )
    goto LABEL_11;
  v11 = *((_QWORD *)Current + 29);
  v12 = v10;
  v13 = *(_DWORD *)(v11 + 16LL * v10 + 8);
  if ( ((a2 >> 25) & 0x60) != (v13 & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
    goto LABEL_11;
  v14 = 2 * v12;
  v15 = v13 & 0x1F;
  if ( (_BYTE)v15 != 5 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = 316LL;
    WdLogEvent5_WdError(v16);
LABEL_11:
    v17 = 0LL;
    goto LABEL_12;
  }
  v17 = *(struct _EX_RUNDOWN_REF **)(v11 + 8 * v14);
LABEL_12:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v17);
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v32 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 8166LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4152LL),
                 *((_DWORD *)Current + 98),
                 *((_DWORD *)this + 84),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v32,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = v8;
      WdLogEvent5_WdError(v22);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v33 = 0LL;
    v30 = 0LL;
    v23 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v23 + 544) + 8LL) + 976LL))(
      *((_QWORD *)this + 81),
      0LL,
      &v33,
      &v30);
    v34 = 0LL;
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v23 + 544) + 8LL) + 768LL))(
            *(_QWORD *)(v23 + 552),
            v33,
            v32 + 3,
            1LL,
            3,
            &v34,
            v31);
    v8 = v24;
    if ( v24 >= 0 )
    {
      if ( v24 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v23 + 544) + 8LL) + 984LL))(
          *(_QWORD *)(v23 + 552),
          &v30,
          &v34,
          1LL);
        LODWORD(v8) = 0;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v8;
      WdLogEvent5_WdWarning(v28);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
  return (unsigned int)v8;
}
