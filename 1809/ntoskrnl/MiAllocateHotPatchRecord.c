/*
 * XREFs of MiAllocateHotPatchRecord @ 0x14085525C
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAllocateHotPatchRecord(int a1, int a2, const void **a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3 + 48LL, 0x70486D4Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[6] = a1;
    PoolWithTag[7] = a2;
    *((_WORD *)PoolWithTag + 16) = *(_WORD *)a3;
    *((_WORD *)PoolWithTag + 17) = *(_WORD *)a3;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 12;
    memmove(PoolWithTag + 12, a3[1], *(unsigned __int16 *)a3);
  }
  return v7;
}
