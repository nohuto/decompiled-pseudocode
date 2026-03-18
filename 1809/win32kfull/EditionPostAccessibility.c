/*
 * XREFs of EditionPostAccessibility @ 0x1C01EC900
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostAccessibility(unsigned int a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 24LL) + 16LL);
  return PostEventMessageEx(
           (struct tagTHREADINFO *)v1,
           *(_QWORD *)(v1 + 432),
           0xDu,
           0LL,
           0,
           11LL,
           (LARGE_INTEGER)v3,
           0LL);
}
