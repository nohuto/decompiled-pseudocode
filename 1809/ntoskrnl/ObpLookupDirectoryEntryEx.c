/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x140625DE0
 * Callers:
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     ObpLookupDirectoryEntry @ 0x14072A3D8 (ObpLookupDirectoryEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140109FD8 (ObpLockDirectoryShared.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryUsingHash @ 0x140625F34 (ObpLookupDirectoryUsingHash.c)
 *     ObpGetShadowDirectory @ 0x140861DE0 (ObpGetShadowDirectory.c)
 */

__int64 __fastcall ObpLookupDirectoryEntryEx(
        void *a1,
        unsigned __int16 *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rsi
  unsigned __int64 v7; // rdi
  char v8; // r14
  bool v9; // r15
  unsigned int v10; // ebp
  void *v12; // r12
  __int64 v13; // rbx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // ebx
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // rt0
  __int64 ShadowDirectory; // rsi

  v6 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v7 = 0LL;
  v8 = a4;
  v9 = (a3 & 0x40) != 0;
  v10 = *a2 >> 1;
  v12 = a1;
  if ( v10 < 4 )
  {
    v14 = 0;
  }
  else
  {
    do
    {
      v13 = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v19 = 4LL;
        do
        {
          v20 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= 0x61u )
          {
            if ( (unsigned __int16)v13 <= 0x7Au )
              v20 = (unsigned int)(unsigned __int16)v13 - 32;
            else
              v20 = RtlUpcaseUnicodeChar(v13);
          }
          *(_QWORD *)&v21 = v13;
          *((_QWORD *)&v21 + 1) = v20;
          v13 = v21 >> 16;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        v13 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v6 += 4;
      v10 -= 4;
      v7 = v13 + (v7 >> 1) + 3 * v7;
    }
    while ( v10 >= 4 );
    v12 = a1;
    v8 = a4;
    v14 = v7 + HIDWORD(v7);
  }
  while ( v10 )
  {
    v15 = *v6++;
    --v10;
    v16 = (v14 >> 1) + 3 * v14;
    if ( v15 >= 0x61 )
    {
      if ( v15 > 0x7A )
      {
        v14 = RtlUpcaseUnicodeChar(v15) + v16;
        continue;
      }
      v16 -= 32;
    }
    v14 = v15 + v16;
  }
  *(_DWORD *)(a6 + 24) = v14;
  *(_WORD *)(a6 + 28) = v14 % 0x25;
  result = ObpLookupDirectoryUsingHash(v12, a2, a6, v9);
  v18 = result;
  if ( !result && v8 )
  {
    do
    {
      ShadowDirectory = ObpGetShadowDirectory(v12, a5);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(v12);
          ObpUnlockDirectory((__int64)v12, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          ObfDereferenceObject(v12);
        }
        v18 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v9);
      }
      v12 = (void *)ShadowDirectory;
    }
    while ( !v18 && ShadowDirectory );
    return v18;
  }
  return result;
}
