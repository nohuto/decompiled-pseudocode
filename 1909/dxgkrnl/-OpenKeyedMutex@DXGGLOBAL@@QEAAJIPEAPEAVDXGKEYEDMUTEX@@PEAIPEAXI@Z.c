/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C026A384
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C026C110 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C026C400 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C3CC (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C026A054 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rcx
  __int64 v17; // r8
  volatile signed __int64 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rax
  _BYTE v29[8]; // [rsp+30h] [rbp-18h] BYREF
  char v30; // [rsp+38h] [rbp-10h]

  v6 = (unsigned int)a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 4229LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 4230LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  Global = DXGGLOBAL::GetGlobal(v12, v11);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v6, 9);
  v18 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v19 = *(_QWORD *)(ObjectA + 24);
    while ( v19 )
    {
      v16 = v19 + 1;
      v20 = v19;
      v19 = _InterlockedCompareExchange64(v18 + 3, v19 + 1, v19);
      if ( v20 == v19 )
      {
        if ( v30 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
        v23 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v18, a4, a5, a6, 1);
        v27 = v23;
        if ( v23 < 0 )
        {
          v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
          *(_QWORD *)(v28 + 24) = v6;
          *(_QWORD *)(v28 + 32) = v27;
          WdLogEvent5_WdWarning(v28);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v18;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v18, v24);
        return (unsigned int)v27;
      }
    }
  }
  v21 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  if ( v30 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  return 3221225485LL;
}
