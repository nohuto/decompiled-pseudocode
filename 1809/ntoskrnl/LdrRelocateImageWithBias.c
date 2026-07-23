/*
 * XREFs of LdrRelocateImageWithBias @ 0x14072B948
 * Callers:
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     LdrRelocateImage @ 0x14072B934 (LdrRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x14072BA28 (LdrProcessRelocationBlockLongLong.c)
 */

ULONG __stdcall LdrRelocateImageWithBias(
        PVOID NewAddress,
        LONGLONG AdditionalBias,
        PCCH LoaderName,
        ULONG Success,
        ULONG Conflict,
        ULONG Invalid)
{
  ULONG v6; // ebx
  PIMAGE_NT_HEADERS v8; // rdi
  unsigned __int16 v9; // ax
  _DWORD *v10; // rax
  ULONG v11; // esi
  int v12; // r8d
  PCCH v14; // [rsp+70h] [rbp+18h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v14 = LoaderName;
  v6 = 0;
  Size = 0;
  if ( RtlImageNtHeaderEx(1u, NewAddress, 0LL, (PIMAGE_NT_HEADERS *)&v14) >= 0 )
  {
    v8 = (PIMAGE_NT_HEADERS)v14;
    v9 = *((_WORD *)v14 + 12);
    if ( v9 == 267 || v9 == 523 )
    {
      v10 = RtlImageDirectoryEntryToData(NewAddress, 1u, 5u, &Size);
      if ( !v10 )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      v11 = Size;
      if ( !Size )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      while ( 1 )
      {
        v12 = v10[1];
        v11 -= v12;
        v10 = LdrProcessRelocationBlockLongLong(
                v8->FileHeader.Machine,
                (int)NewAddress + *v10,
                (PUSHORT)((unsigned int)(v12 - 8) >> 1),
                (LONGLONG)(v10 + 2));
        if ( !v10 )
          break;
        if ( !v11 )
          return v6;
      }
    }
  }
  return -1073741701;
}
