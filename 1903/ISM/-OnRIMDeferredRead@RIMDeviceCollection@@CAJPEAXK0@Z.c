/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18009AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800207A4 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009A948 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  int InputReportFromRIM; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    v4 = 2147549183LL;
    v5 = 508LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v4 = 2147942487LL;
    v5 = 498LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v4);
    return 0LL;
  }
  *((_BYTE *)a1 + 2736) = 0;
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(a1, a2, a3, a4, v8);
  if ( InputReportFromRIM < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      503LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)InputReportFromRIM);
  return 0LL;
}
