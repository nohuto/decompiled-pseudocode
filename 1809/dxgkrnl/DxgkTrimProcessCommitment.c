/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C022C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
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
  int v12; // esi
  __int64 v13; // rax
  void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r14d
  __int64 v19; // rax
  struct DXGPROCESS *Process; // rbx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v23; // rdx
  _QWORD v24[4]; // [rsp+28h] [rbp-B0h] BYREF
  void *v25[5]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v26[80]; // [rsp+70h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
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
    memmove(v25, v8, v5);
    v12 = (int)v25[2];
    if ( ((__int64)v25[2] & 0xFFFFFFFC) != 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = 819LL;
      WdLogEvent5_WdWarning(v13);
      return 3221225485LL;
    }
    else
    {
      v14 = v25[1];
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26, v25[1], 0x2000);
      v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v26, 1);
      if ( v18 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v26);
        memset(v24, 0, sizeof(v24));
        v24[0] = Process;
        LODWORD(v24[1]) = v12;
        v24[2] = v25[3];
        Global = DXGGLOBAL::GetGlobal(v21);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)v24,
          2);
        v23 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v23 = (_QWORD *)MmUserProbeAddress;
        *v23 = v24[3];
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26);
        return 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v19 + 24) = v14;
        WdLogEvent5_WdWarning(v19);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26);
        return (unsigned int)v18;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v6 + 24) = 797LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
