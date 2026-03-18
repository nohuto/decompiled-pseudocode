/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022F604
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C022DD44 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000C3A4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0225038 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, PERESOURCE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  struct DXGPROCESS *Current; // r15
  char *v11; // r14
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int Resident; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v36[8]; // [rsp+58h] [rbp-8h] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+90h] [rbp+30h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 8242LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  LODWORD(v9) = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v11 = (char *)Current + 184;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)Current + 50);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v14);
    }
    ExAcquirePushLockSharedEx(v11, 0LL);
  }
  v15 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)Current + 56) )
    goto LABEL_17;
  v16 = *((_QWORD *)Current + 26);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_17;
  v18 = v17 & 0x1F;
  if ( (_BYTE)v18 != 5 )
  {
    v19 = WdLogNewEntry5_WdError(v18, 2LL * (unsigned int)v15, v16);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_17:
    v20 = 0LL;
    goto LABEL_18;
  }
  v20 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v20);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v37 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v23 + 24) = 8248LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
                 *((unsigned int *)Current + 92),
                 *((unsigned int *)this + 84),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v37,
                 0LL,
                 0LL);
    v9 = Resident;
    if ( Resident < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v9;
      WdLogEvent5_WdError(v28);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v38 = 0LL;
    v35 = 0LL;
    v29 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v29 + 544) + 8LL) + 976LL))(
      *((_QWORD *)this + 81),
      0LL,
      &v38,
      &v35);
    v39 = 0LL;
    v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v29 + 544) + 8LL) + 768LL))(
            *(_QWORD *)(v29 + 552),
            v38,
            v37 + 3,
            1LL,
            3,
            &v39,
            v36);
    v9 = v30;
    if ( v30 >= 0 )
    {
      if ( v30 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v29 + 544) + 8LL) + 984LL))(
          *(_QWORD *)(v29 + 552),
          &v35,
          &v39,
          1LL);
        LODWORD(v9) = 0;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v31, v25, v32);
      *(_QWORD *)(v33 + 24) = v9;
      WdLogEvent5_WdWarning(v33);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v25);
  return (unsigned int)v9;
}
