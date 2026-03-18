/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1C013BF60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013C150 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(ULONG64 a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // rax
  const void *v8; // rdx
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // r8
  struct DXGPROCESS *Process; // rax
  void *v15; // rbx
  void **v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  void *v19[5]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v20[80]; // [rsp+50h] [rbp-68h] BYREF

  memset(v19, 0, 0x20uLL);
  v3 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  v5 = v4;
  if ( v4 >= 0x20 )
  {
    if ( v4 > 0x20 )
      v5 = 32LL;
    v8 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    memmove(v19, v8, v5);
    v9 = v19[1];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20, v19[1], 0x1000u);
    v12 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 0);
    if ( v12 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v11, v10, v13);
      *(_QWORD *)(v18 + 24) = v9;
      WdLogEvent5_WdWarning(v18);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
      return (unsigned int)v12;
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20, v10);
      v19[2] = *((void **)Process + 40);
      v15 = (void *)*((_QWORD *)Process + 41);
      v19[3] = v15;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
      v16 = (void **)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v16 = (void **)MmUserProbeAddress;
      *v16 = v19[2];
      v17 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = v15;
      return 0LL;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v6 + 24) = 603LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
}
