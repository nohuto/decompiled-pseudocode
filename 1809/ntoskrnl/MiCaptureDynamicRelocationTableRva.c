/*
 * XREFs of MiCaptureDynamicRelocationTableRva @ 0x14074CC3C
 * Callers:
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiApplyDynamicRelocations @ 0x1409D3650 (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiCaptureDynamicRelocationTableRva(
        char *BaseAddress,
        ULONGLONG Size,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        unsigned int a6,
        PIMAGE_NT_HEADERS NtHeader)
{
  NTSTATUS v7; // r10d
  unsigned __int16 v8; // bx
  int v9; // esi
  __int64 v10; // r11
  PIMAGE_NT_HEADERS v11; // r14
  char *v12; // rdi
  char *v13; // rdx
  unsigned int v15; // r11d

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = NtHeader;
  NtHeader->Signature = 0;
  if ( a4 == 523 )
  {
    if ( a6 >= 0xE6 )
    {
      v8 = *(_WORD *)(a5 + 228);
      v9 = *(_DWORD *)(a5 + 224);
    }
    if ( a6 >= 0xC8 )
      v10 = *(_QWORD *)(a5 + 192);
  }
  else
  {
    if ( a6 >= 0x8E )
    {
      v8 = *(_WORD *)(a5 + 140);
      v9 = *(_DWORD *)(a5 + 136);
    }
    if ( a6 >= 0x7C )
      v10 = *(unsigned int *)(a5 + 120);
  }
  if ( v8 )
  {
    v12 = &BaseAddress[(unsigned int)Size];
    v7 = RtlImageNtHeaderEx(0, BaseAddress, (unsigned int)Size, &NtHeader);
    if ( v7 >= 0 )
    {
      if ( v8 > NtHeader->FileHeader.NumberOfSections )
      {
        return (unsigned int)-1073741701;
      }
      else
      {
        v13 = (char *)NtHeader + 40 * v8 + NtHeader->FileHeader.SizeOfOptionalHeader - 16;
        if ( v12 <= v13 || v12 < v13 + 40 )
          return (unsigned int)-1073741701;
        else
          v11->Signature = v9 + *((_DWORD *)v13 + 3);
      }
    }
  }
  else if ( v10 )
  {
    if ( a3 )
      v15 = v10 - a3;
    else
      v15 = v10 - (_DWORD)BaseAddress;
    v11->Signature = v15;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
