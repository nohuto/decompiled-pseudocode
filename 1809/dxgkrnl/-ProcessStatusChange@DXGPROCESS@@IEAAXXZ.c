/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C00F48B4
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C00F4890 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0010DF8 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00F4A20 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  char *v2; // rsi
  _QWORD *v3; // rdi
  __int64 Current; // rax
  struct DXGDEVICE *v5; // rbx
  __int64 v6; // r9
  _QWORD v7[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v9[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v11[56]; // [rsp+80h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp+17h] BYREF

  KeStackAttachProcess(*((PRKPROCESS *)this + 7), &ApcState);
  v2 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
  *((_QWORD *)this + 22) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 83, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 34);
  v8[0] = (char *)this + 272;
  while ( 1 )
  {
    v8[1] = v3;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v8);
    v5 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7, v5);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v9, (__int64)v5, 2, v6, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v9) >= 0 )
        DXGDEVICE::NotifyProcessStatusChange(v5);
      COREACCESS::~COREACCESS((COREACCESS *)v11);
      COREACCESS::~COREACCESS((COREACCESS *)v10);
      if ( v7[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7);
    }
    v3 = (_QWORD *)*v3;
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
