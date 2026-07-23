/*
 * XREFs of MiCopyForkedFixupVad @ 0x14085D408
 * Callers:
 *     MiCloneImageVad @ 0x1402C8CBC (MiCloneImageVad.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall MiCopyForkedFixupVad(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memmove(
    (void *)(a1 + 136),
    (const void *)(a2 + 136),
    8
  * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a2 + 72) + 8LL) >> 6)
   + ((*(_DWORD *)(***(_QWORD ***)(a2 + 72) + 8LL) & 0x3F) != 0)
   + 3LL));
  result = a1 + 160;
  *(_QWORD *)(a1 + 152) = a1 + 160;
  return result;
}
