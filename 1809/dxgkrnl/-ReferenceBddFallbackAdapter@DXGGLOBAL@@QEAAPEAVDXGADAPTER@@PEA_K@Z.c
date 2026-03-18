/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0211218
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  signed __int64 v4; // rcx
  DXGADAPTER *v5; // r9
  DXGADAPTER *v6; // r8
  DXGADAPTER *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v5 = (DXGGLOBAL *)((char *)this + 448);
  v6 = (DXGADAPTER *)*((_QWORD *)this + 56);
  while ( v6 != v5 && v6 )
  {
    v7 = v6;
    if ( DXGADAPTER::IsBddFallbackDriver(v6) )
    {
      _m_prefetchw((char *)v7 + 24);
      v8 = *((_QWORD *)v7 + 3);
      while ( v8 )
      {
        v4 = v8 + 1;
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 3, v8 + 1, v8);
        if ( v9 == v8 )
        {
          *a2 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
  v10 = WdLogNewEntry5_WdAssertion(v4);
  *(_QWORD *)(v10 + 24) = 2449LL;
  WdLogEvent5_WdAssertion(v10);
  v7 = 0LL;
LABEL_11:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v7;
}
