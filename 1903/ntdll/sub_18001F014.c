/*
 * XREFs of sub_18001F014 @ 0x18001F014
 * Callers:
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     sub_180067D14 @ 0x180067D14 (sub_180067D14.c)
 * Callees:
 *     sub_18001A870 @ 0x18001A870 (sub_18001A870.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_18001F014(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r11
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h] BYREF

  v5 = a1;
  v6 = sub_18001C4DC(a1, 1, 2u, &v25, &v27);
  v7 = v27;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v27 = v7;
  if ( !v7 )
    return 3221225609LL;
  v25 = 0LL;
  v9 = sub_18001A870(v5, &v25);
  v26 = v9;
  if ( v9 == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v25;
  if ( v25 )
  {
    if ( (unsigned __int64)a2 >= v10 + v25 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    v14 = RtlImageNtHeader(v5);
    if ( !v14 )
      return 3221225609LL;
    if ( *(_WORD *)(v14 + 24) == 267 )
    {
      v15 = *(_DWORD *)(v14 + 136);
    }
    else if ( *(_WORD *)(v14 + 24) == 523 )
    {
      v15 = *(_DWORD *)(v14 + 152);
    }
    else
    {
      v15 = 0;
    }
    if ( !v15 )
      return 3221225609LL;
    v8 = v5 + v15 - v7;
    v16 = RtlImageRvaToSection(v14, v13, v15);
    if ( !v16 )
      return 3221225609LL;
    v19 = *a2;
    if ( *a2 > *(_DWORD *)(v16 + 8) )
    {
      LODWORD(v25) = *(_DWORD *)(v16 + 12);
      v21 = RtlImageRvaToSection(v18, v17, v19);
      v27 = v21;
      if ( !v21 )
        return 3221225609LL;
      v23 = RtlAddressInSectionTable(v22, v5, *(unsigned int *)(v21 + 12));
      v8 += v7 + *(unsigned int *)(v27 + 12) - (unsigned __int64)(unsigned int)v25 - v23;
    }
  }
  if ( a3 && ((v20 = v5 + *a2 - v8, *a3 = v20, v20 <= v10) || v11 && v20 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return v9;
  }
}
