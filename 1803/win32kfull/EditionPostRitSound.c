/*
 * XREFs of EditionPostRitSound @ 0x1C01C8620
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostRitSound(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
           0xEu,
           0LL,
           a2,
           a3,
           a4,
           0LL);
}
