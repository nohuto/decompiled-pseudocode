/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x14065CC50
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401805AC (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiAllocateFixupVad @ 0x14065C7F4 (MiAllocateFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x14065CD58 (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(_RTL_BITMAP *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rbp
  __int64 v8; // r11
  unsigned __int64 v9; // r11
  __int64 *v10; // r10
  __int64 v11; // rbx
  unsigned int v12; // edx
  int v13; // edx

  v2 = a2 + 16;
  v3 = a2[12];
  v5 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v5;
  RtlClearAllBits(a1);
  v6 = 0;
  v7 = 0LL;
  do
  {
    v8 = 8LL * *((unsigned int *)v2 + 11);
    if ( v2[1] < (unsigned __int64)(v8 + v2[1]) )
    {
      v9 = ((unsigned __int64)(v8 - 1) >> 3) + 1;
      while ( 1 )
      {
        v10 = *(__int64 **)(v3 + 32);
        v11 = *v10;
        if ( v6 < (unsigned __int64)v10[7] )
          break;
LABEL_9:
        if ( (v2[4] & 0xA) == 0xA )
          goto LABEL_14;
LABEL_10:
        ++v6;
        if ( !--v9 )
          goto LABEL_11;
      }
      v12 = v6;
      while ( !*(_QWORD *)(v11 + 8LL * v12) && !(unsigned int)MiDoesPageRequireRetpolineFixups(v10 + 9) )
      {
        v12 = v13 + 1;
        if ( v12 != v6 )
          goto LABEL_9;
      }
      _bittestandset((signed __int32 *)a1->Buffer, v6);
LABEL_14:
      ++v7;
      goto LABEL_10;
    }
LABEL_11:
    v2 = (_QWORD *)v2[2];
  }
  while ( v2 );
  return v7;
}
