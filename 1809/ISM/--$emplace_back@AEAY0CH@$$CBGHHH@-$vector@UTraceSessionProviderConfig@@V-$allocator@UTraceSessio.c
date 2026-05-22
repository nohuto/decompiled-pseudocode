/*
 * XREFs of ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180061CC8
 * Callers:
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x180064130 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
        __int64 a1,
        const OLECHAR *a2,
        _DWORD *a3,
        int *a4,
        int *a5)
{
  __int64 v6; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  HRESULT v10; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
             a1,
             v6,
             a2,
             a3,
             a4,
             a5);
  v8 = *a5;
  v9 = *a4;
  *(_DWORD *)(v6 + 16) = *a3;
  *(_QWORD *)(v6 + 24) = v9;
  *(_QWORD *)(v6 + 32) = v8;
  v10 = CLSIDFromString(a2, (LPCLSID)v6);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12,
      (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)v10);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 40;
  return result;
}
