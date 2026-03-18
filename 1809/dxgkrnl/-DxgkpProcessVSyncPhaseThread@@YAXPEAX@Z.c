/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00EE100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00EF360 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v4; // [rsp+30h] [rbp-48h]
  DXGADAPTER *v5; // [rsp+38h] [rbp-40h]
  char v6; // [rsp+40h] [rbp-38h]
  _BYTE v7[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]
  DXGADAPTER *v9; // [rsp+58h] [rbp-20h]
  char v10; // [rsp+60h] [rbp-18h]

  v5 = this;
  v6 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v4 = -1LL;
  }
  v9 = this;
  v10 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v8 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v2) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  _InterlockedExchange((volatile __int32 *)this + 962, 0);
  COREACCESS::~COREACCESS((COREACCESS *)v7);
  COREACCESS::~COREACCESS((COREACCESS *)v3);
}
