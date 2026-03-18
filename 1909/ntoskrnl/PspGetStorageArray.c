/*
 * XREFs of PspGetStorageArray @ 0x14077EECC
 * Callers:
 *     PspStorageInsertObject @ 0x14077EE24 (PspStorageInsertObject.c)
 *     PsMakeSiloContextPermanent @ 0x1408C44A0 (PsMakeSiloContextPermanent.c)
 *     PspStorageReplaceObject @ 0x1408CD2CC (PspStorageReplaceObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x140089540 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x1408CD05C (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int *Buffer; // rcx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    Buffer = PspStorageBitmap.Buffer;
    if ( a2 >= 0x20 )
      Buffer = PspStorageExpansionBitmap.Buffer;
    if ( !_bittest64((const signed __int64 *)Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
