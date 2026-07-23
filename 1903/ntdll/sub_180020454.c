/*
 * XREFs of sub_180020454 @ 0x180020454
 * Callers:
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 */

unsigned __int64 __fastcall sub_180020454(char *a1, unsigned int a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v5; // rbp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rdi
  char *v10; // rdx
  PIMAGE_SECTION_HEADER v11; // rax
  __int64 v12; // r11
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, a1, 0LL, &OutHeaders);
  v8 = sub_18001F450(a1);
  *a3 = 0;
  if ( v8
    && *v8 >= 0x70u
    && (v9 = *((_QWORD *)v8 + 11), v9 > (unsigned __int64)a1)
    && (v10 = &a1[v5 - 8], v9 < (unsigned __int64)v10) )
  {
    v11 = RtlImageRvaToSection(OutHeaders, v10, (int)v9 - (int)a1);
    if ( v11 && (v11->Characteristics & 0x80000000) == 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v12;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( v8 && *v8 >= 4u )
        *a4 = v8;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
