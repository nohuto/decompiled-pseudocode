/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x1409F8BF4
 * Callers:
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v4; // r8
  int v5; // r9d
  __int64 v6; // r11
  int v7; // r10d
  bool v8; // zf

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v1 << 25) >> 16 << 25 >> 16 >= (unsigned __int64)MiLowHalVa )
    return result;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  if ( MiPteInShadowRange(v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = v7 + 1;
      if ( HIBYTE(word_14043B26C) == (_BYTE)v7 )
      {
        v8 = ((unsigned __int8)v3 & (unsigned __int8)v5) == 0;
        goto LABEL_8;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v8 = (v3 & 1) == 0;
LABEL_8:
      if ( !v8 )
        v3 |= 0x8000000000000000uLL;
    }
  }
  *v4 = v3;
  if ( v5 )
    MiWritePteShadow((__int64)v4, v3);
  return MiLockAndInsertPageInFreeList(v6);
}
