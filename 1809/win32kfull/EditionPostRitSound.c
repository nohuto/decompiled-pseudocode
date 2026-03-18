/*
 * XREFs of EditionPostRitSound @ 0x1C01EC960
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostRitSound(__int64 a1, DWORD a2, __int64 a3, LARGE_INTEGER a4)
{
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL),
           0xEu,
           0LL,
           a2,
           a3,
           a4,
           0LL);
}
