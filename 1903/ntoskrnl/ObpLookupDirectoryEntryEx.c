/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x1406BF0C0
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     ObpLookupDirectoryEntry @ 0x14075A2C4 (ObpLookupDirectoryEntry.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140004084 (ObpLockDirectoryShared.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BF214 (ObpLookupDirectoryUsingHash.c)
 *     ObpGetShadowDirectory @ 0x14089D604 (ObpGetShadowDirectory.c)
 */

__int64 __fastcall ObpLookupDirectoryEntryEx(
        PVOID Object,
        unsigned __int16 *a2,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rdi
  char v7; // r12
  bool v9; // r14
  unsigned int v10; // r11d
  unsigned __int64 v12; // rbx
  unsigned int v13; // r10d
  int v14; // r10d
  unsigned int v15; // edx
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v20; // r10
  __int64 v21; // rax
  __int128 v22; // rt0
  void *ShadowDirectory; // rbx
  __int64 v24; // r9

  v6 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v7 = a4;
  v9 = (a3 & 0x40) != 0;
  v10 = *a2 >> 1;
  if ( v10 < 4 )
  {
    v13 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      a4 = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v20 = 4LL;
        do
        {
          v21 = (unsigned __int16)a4;
          if ( (unsigned __int16)a4 >= 0x61u )
          {
            if ( (unsigned __int16)a4 <= 0x7Au )
              v21 = (unsigned int)(unsigned __int16)a4 - 32;
            else
              v21 = NLS_UPCASE(a4);
          }
          *(_QWORD *)&v22 = a4;
          *((_QWORD *)&v22 + 1) = v21;
          a4 = v22 >> 16;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        a4 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v6 += 4;
      v10 -= 4;
      v12 = a4 + (v12 >> 1) + 3 * v12;
    }
    while ( v10 >= 4 );
    v13 = v12 + HIDWORD(v12);
  }
  while ( v10 )
  {
    v15 = *v6;
    v16 = (v13 >> 1) + 3 * v13;
    ++v6;
    --v10;
    if ( v15 < 0x61 )
      goto LABEL_12;
    if ( v15 > 0x7A )
    {
      a4 = NLS_UPCASE(v15);
      v13 = a4 + v14;
    }
    else
    {
      v16 -= 32;
LABEL_12:
      v13 = v15 + v16;
    }
  }
  LOBYTE(a4) = v9;
  *(_DWORD *)(a6 + 24) = v13;
  *(_WORD *)(a6 + 28) = v13 % 0x25;
  v18 = ObpLookupDirectoryUsingHash(Object, a2, a6, a4);
  if ( !v18 && v7 )
  {
    do
    {
      LOBYTE(v17) = a5;
      ShadowDirectory = (void *)ObpGetShadowDirectory(Object, v17);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(Object);
          ObpUnlockDirectory((__int64)Object, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          ObfDereferenceObject(Object);
        }
        LOBYTE(v24) = v9;
        v18 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v24);
      }
      Object = ShadowDirectory;
    }
    while ( !v18 && ShadowDirectory );
  }
  return v18;
}
