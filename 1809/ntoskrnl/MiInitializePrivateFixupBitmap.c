/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x1405A9B60
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176B6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiAllocateFixupVad @ 0x1405A9720 (MiAllocateFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(_RTL_BITMAP *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  _QWORD *v11; // rdx
  int v12; // r9d
  __int64 v13; // rcx

  v3 = a2[12];
  v5 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v5;
  RtlClearAllBits(a1);
  v6 = 0;
  v7 = 0LL;
  v8 = a2 + 16;
  do
  {
    v9 = 8LL * *((unsigned int *)v8 + 11);
    if ( v8[1] < (unsigned __int64)(v9 + v8[1]) )
    {
      v10 = ((unsigned __int64)(v9 - 1) >> 3) + 1;
      while ( 1 )
      {
        v11 = *(_QWORD **)(v3 + 32);
        if ( (unsigned __int64)v6 < v11[7] )
          break;
LABEL_9:
        if ( (v8[4] & 0xA) == 0xA )
          goto LABEL_14;
LABEL_10:
        ++v6;
        if ( !--v10 )
          goto LABEL_11;
      }
      v12 = 0;
      while ( !*(_QWORD *)(*v11 + 8LL * (v12 + v6)) )
      {
        v13 = v11[11];
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8LL * (v12 + v6) + 56) )
            break;
        }
        if ( ++v12 )
          goto LABEL_9;
      }
      _bittestandset((signed __int32 *)a1->Buffer, v6);
LABEL_14:
      ++v7;
      goto LABEL_10;
    }
LABEL_11:
    v8 = (_QWORD *)v8[2];
  }
  while ( v8 );
  return v7;
}
