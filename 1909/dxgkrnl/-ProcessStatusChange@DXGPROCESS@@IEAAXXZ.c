/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C00EE314
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00EE2F0 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00EF298 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  char *v2; // rsi
  _QWORD *v3; // rdi
  __int64 Current; // rax
  struct DXGDEVICE *v5; // rbx
  struct DXGADAPTER *v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[64]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v12[64]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGDEVICE *v13; // [rsp+D0h] [rbp-38h]
  char v14; // [rsp+D8h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-20h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)this + 7), &ApcState);
  v2 = (char *)this + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
  *((_QWORD *)this + 21) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 77, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 31);
  v9[0] = (char *)this + 248;
  while ( 1 )
  {
    v9[1] = v3;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v9);
    v5 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v8, v5);
      COREACCESS::COREACCESS((COREACCESS *)v11, *(struct DXGADAPTER *const *)(*((_QWORD *)v5 + 2) + 16LL));
      v6 = (struct DXGADAPTER *)*((_QWORD *)v5 + 216);
      if ( !v6 )
        v6 = *(struct DXGADAPTER **)(*((_QWORD *)v5 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v12, v6);
      v13 = v5;
      v7 = *((_QWORD *)v5 + 216);
      if ( v7 == *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) || (v14 = 1, !v7) )
        v14 = 0;
      if ( (int)COREDEVICEACCESS::AcquireShared((__int64)v10, 0xFFFFFFFF, 0LL) >= 0 )
        DXGDEVICE::NotifyProcessStatusChange(v5);
      COREACCESS::~COREACCESS((COREACCESS *)v12);
      COREACCESS::~COREACCESS((COREACCESS *)v11);
      if ( v8[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v8);
    }
    v3 = (_QWORD *)*v3;
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
