/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C01019F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0101B14 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  volatile signed __int64 *v1; // rdi
  struct DXGADAPTER *v3; // rcx
  struct DXGADAPTER *v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v6[8]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v7; // [rsp+48h] [rbp-39h]
  struct DXGADAPTER *v8; // [rsp+50h] [rbp-31h]
  char v9; // [rsp+58h] [rbp-29h]
  int v10; // [rsp+5Ch] [rbp-25h]
  __int64 v11; // [rsp+60h] [rbp-21h]
  _BYTE v12[8]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v13; // [rsp+88h] [rbp+7h]
  struct DXGADAPTER *v14; // [rsp+90h] [rbp+Fh]
  char v15; // [rsp+98h] [rbp+17h]
  int v16; // [rsp+9Ch] [rbp+1Bh]
  __int64 v17; // [rsp+A0h] [rbp+1Fh]

  v11 = 0LL;
  v1 = (volatile signed __int64 *)((char *)this + 24);
  v8 = this;
  v9 = 0;
  v10 = -1;
  if ( this )
  {
    _InterlockedIncrement64(v1);
    v7 = -1LL;
  }
  v17 = 0LL;
  v14 = this;
  v15 = 0;
  v16 = -1;
  if ( this )
  {
    _InterlockedIncrement64(v1);
    v13 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v5, 0xFFFFFFFFLL, 0LL) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  if ( _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  _InterlockedExchange((volatile __int32 *)this + 970, 0);
  v3 = v14;
  if ( v14 )
  {
    if ( v15 )
    {
      COREACCESS::Release((COREACCESS *)v12);
      v3 = v14;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v3 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v3 + 2), v3);
  }
  v4 = v8;
  if ( v8 )
  {
    if ( v9 )
    {
      COREACCESS::Release((COREACCESS *)v6);
      v4 = v8;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v4 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v4 + 2), v4);
  }
}
