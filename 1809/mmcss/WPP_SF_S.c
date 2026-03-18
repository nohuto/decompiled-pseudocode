/*
 * XREFs of WPP_SF_S @ 0x1C000493C
 * Callers:
 *     CiTaskDump @ 0x1C000D8A0 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00036F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    while ( a4[++v5] != 0 )
      ;
    v7 = 2 * v5 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
           11LL,
           a4,
           v7,
           0LL);
}
