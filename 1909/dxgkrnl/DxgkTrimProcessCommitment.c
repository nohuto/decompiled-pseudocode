/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C02613C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018DF4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013F560 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013F72C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D6AC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // rax
  const void *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rax
  void *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v25; // rdx
  struct DXGPROCESS *Process; // [rsp+28h] [rbp-B0h] BYREF
  int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+34h] [rbp-A4h]
  void *v29; // [rsp+38h] [rbp-A0h]
  __int64 v30; // [rsp+40h] [rbp-98h]
  void *v31[5]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v32[80]; // [rsp+70h] [rbp-68h] BYREF

  memset(v31, 0, sizeof(v31));
  v3 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  v5 = v4;
  if ( v4 >= 0x28 )
  {
    if ( v4 > 0x28 )
      v5 = 40LL;
    v8 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    memmove(v31, v8, v5);
    v12 = (int)v31[2];
    if ( ((__int64)v31[2] & 0xFFFFFFFC) != 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = 814LL;
      WdLogEvent5_WdWarning(v13);
      return 3221225485LL;
    }
    else
    {
      v14 = v31[1];
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v31[1], 0x2000);
      LOBYTE(v15) = 1;
      v19 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, v15);
      if ( v19 >= 0 )
      {
        v28 = 0;
        v30 = 0LL;
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32, v16);
        v27 = v12;
        v29 = v31[3];
        Global = DXGGLOBAL::GetGlobal(v23, v22);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64)DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)&Process,
          2);
        v25 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v25 = (_QWORD *)MmUserProbeAddress;
        *v25 = v30;
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, (__int64)v25);
        return 0LL;
      }
      else
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = v14;
        WdLogEvent5_WdWarning(v20);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v21);
        return (unsigned int)v19;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v6 + 24) = 792LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
