/*
 * XREFs of LdrProcessRelocationBlockLongLong @ 0x1408D8098
 * Callers:
 *     LdrRelocateImageWithBias @ 0x1408D8154 (LdrRelocateImageWithBias.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x140313EF4 (LdrpArmProcessRelocation.c)
 *     LdrpGenericProcessRelocation @ 0x140313FC8 (LdrpGenericProcessRelocation.c)
 *     LdrpThumbProcessRelocation @ 0x14031406C (LdrpThumbProcessRelocation.c)
 */

// local variable allocation has failed, the output may be wrong!
PIMAGE_BASE_RELOCATION __stdcall LdrProcessRelocationBlockLongLong(
        ULONG_PTR Address,
        ULONG Count,
        PUSHORT TypeOffset,
        LONGLONG Delta)
{
  IMAGE_BASE_RELOCATION *v4; // rbx
  __int64 v5; // rsi
  __int16 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+28h]

  v4 = (IMAGE_BASE_RELOCATION *)Delta;
  v5 = *(_QWORD *)&Count;
  v6 = Address;
  v7 = Delta + 2LL * (unsigned int)TypeOffset;
  if ( Delta >= v7 )
    return v4;
  while ( 1 )
  {
    if ( ((1 << (LOWORD(v4->VirtualAddress) >> 12)) & 0x3A0) == 0 )
    {
      v8 = LdrpGenericProcessRelocation((unsigned __int16 *)v4, v5, v10);
      goto LABEL_9;
    }
    if ( v6 != 448 )
      break;
    v8 = LdrpArmProcessRelocation(v4, v5, v10);
LABEL_9:
    if ( !v8 )
      return 0LL;
    v4 = (IMAGE_BASE_RELOCATION *)((char *)v4 + 2 * v8);
    if ( (unsigned __int64)v4 >= v7 )
      return v4;
  }
  if ( v6 == 450 || v6 == 452 )
  {
    v8 = LdrpThumbProcessRelocation((unsigned __int16 *)v4, v5, v10);
    goto LABEL_9;
  }
  return 0LL;
}
