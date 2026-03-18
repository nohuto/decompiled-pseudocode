/*
 * XREFs of MiAllocateHotPatchRecord @ 0x14088CC50
 * Callers:
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x14088EA08 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatch @ 0x140A3C60C (MmRegisterHotPatch.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
