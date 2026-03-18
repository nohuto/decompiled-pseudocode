/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0226194
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FDC5C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v7; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  unsigned int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  UINT Pitch; // eax
  __int64 v28; // rax
  _QWORD *v29; // rax
  struct _EX_RUNDOWN_REF *v31; // [rsp+30h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v32; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 10697LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  v11 = *((_DWORD *)this + 1);
  v12 = 0;
  if ( (v11 & 0x40) != 0 )
  {
    v13 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v11 & 0xFFFFFFBF;
    if ( v13 )
    {
      DXGDEVICE::DestroyStagingSurface(a2, 0, v13, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v14 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 208));
    v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *(_DWORD *)(v14 + 248) )
    {
      v16 = *(_QWORD *)(v14 + 232);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 5 )
        {
          v19 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
          goto LABEL_16;
        }
        v18 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60);
        *(_QWORD *)(v18 + 24) = 316LL;
        WdLogEvent5_WdError(v18);
      }
    }
    v19 = 0LL;
LABEL_16:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v19);
    ExReleasePushLockSharedEx(v14 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v31 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( *(_QWORD *)(*(_QWORD *)(v31[1].Count + 16) + 16LL) == v23 )
      {
        v32.Width = *((_DWORD *)this + 19);
        v32.Height = *((_DWORD *)this + 20);
        v32.Pitch = 0;
        v12 = DXGDEVICE::CreateStagingSurface2(a2, &v32, a4, (unsigned int *)this + 104, (unsigned int *)this + 105);
        if ( v12 >= 0 )
        {
          if ( !*((_DWORD *)this + 104) )
          {
            v26 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v26 + 24) = 10744LL;
            WdLogEvent5_WdAssertion(v26);
          }
          Pitch = v32.Pitch;
          if ( !v32.Pitch )
          {
            v28 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v28 + 24) = 10746LL;
            WdLogEvent5_WdAssertion(v28);
            Pitch = v32.Pitch;
          }
          *((_DWORD *)this + 106) = Pitch;
        }
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v12 = -1073741811;
        v24[3] = a2;
        v24[4] = v31;
        v24[5] = -1073741811LL;
        WdLogEvent5_WdError(v24);
      }
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v12 = -1073741811;
      v29[3] = -1073741811LL;
      v29[4] = this;
      v29[5] = v7;
      WdLogEvent5_WdWarning(v29);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
  }
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v12;
}
