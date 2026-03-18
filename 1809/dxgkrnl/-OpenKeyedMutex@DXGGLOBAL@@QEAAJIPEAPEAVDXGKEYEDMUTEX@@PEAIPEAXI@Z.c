/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02350DC
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C02371B0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C02374A0 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C00AD3A0 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  __int64 v16; // r8
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rax
  _BYTE v28[8]; // [rsp+30h] [rbp-18h] BYREF
  char v29; // [rsp+38h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 4241LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 4242LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v28);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  Global = DXGGLOBAL::GetGlobal(v11);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v17 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v18 = *(_QWORD *)(ObjectA + 24);
    while ( v18 )
    {
      v15 = v18 + 1;
      v19 = v18;
      v18 = _InterlockedCompareExchange64(v17 + 3, v18 + 1, v18);
      if ( v19 == v18 )
      {
        if ( v29 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
        v22 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v17, a4, a5, a6, 1);
        v26 = v22;
        if ( v22 < 0 )
        {
          v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
          *(_QWORD *)(v27 + 24) = v6;
          *(_QWORD *)(v27 + 32) = v26;
          WdLogEvent5_WdWarning(v27);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v17;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v17);
        return (unsigned int)v26;
      }
    }
  }
  v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v20 + 24) = v6;
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v20);
  if ( v29 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  return 3221225485LL;
}
