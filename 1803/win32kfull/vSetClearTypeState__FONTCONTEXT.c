/*
 * XREFs of vSetClearTypeState__FONTCONTEXT @ 0x1C0223864
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 * Callees:
 *     bValidRangeGASP @ 0x1C021A3F4 (bValidRangeGASP.c)
 *     bIsGaspFlagSet @ 0x1C02228C0 (bIsGaspFlagSet.c)
 *     fd_FindBlocStrike @ 0x1C0222FC0 (fd_FindBlocStrike.c)
 */

__int16 __fastcall vSetClearTypeState__FONTCONTEXT(__int64 *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  _WORD *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  int v21; // ecx
  int v22; // ecx
  unsigned __int16 v24; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 10) | 0x80000000;
  *((_DWORD *)a1 + 10) = v2;
  v3 = a1[1];
  v4 = v3;
  if ( (*(_DWORD *)(v3 + 300) & 0x100) != 0 && (*((_DWORD *)a1 + 29) & 3) != 0 )
  {
    v5 = *((_DWORD *)a1 + 20);
    v6 = *((_DWORD *)a1 + 24);
    if ( v5 == v6 || v5 == -v6 )
    {
      v7 = *((_DWORD *)a1 + 21);
      v8 = *((_DWORD *)a1 + 23);
      if ( v7 == v8 || (v4 = v3, v7 == -v8) )
      {
        v9 = a1[24];
        v4 = v3;
        if ( *(_DWORD *)(v9 + 152) )
        {
          if ( (unsigned int)fd_FindBlocStrike(
                               *(unsigned int *)(v9 + 152) + *(_QWORD *)(v3 + 64),
                               *((_WORD *)a1 + 62),
                               *(_DWORD *)(v9 + 156)) )
          {
            v10 = *a1;
            v11 = v2 & 0xEDFEFFFF | 0x2000000;
            *((_DWORD *)a1 + 10) = v11;
            *(_DWORD *)(v10 + 12) = v11;
            v4 = a1[1];
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(v4 + 300) & 2) != 0 || !_wcsicmp((const wchar_t *)(v4 + *(int *)(v4 + 360) + 352LL), L"Marlett") )
  {
    v12 = *a1;
    v13 = a1[5] & 0xEDFEFFFF | 0x2000000;
    *((_DWORD *)a1 + 10) = v13;
    *(_DWORD *)(v12 + 12) = v13;
  }
  v14 = a1[24];
  v15 = (_WORD *)(*(unsigned int *)(v14 + 112) + *(_QWORD *)(a1[1] + 64));
  LOWORD(v16) = __ROR2__(*v15, 8);
  if ( (_WORD)v16 )
  {
    if ( *(_DWORD *)(v14 + 112) )
    {
      v17 = *(_DWORD *)(v14 + 116);
      if ( v17 )
      {
        LODWORD(v16) = bValidRangeGASP((__int64)v15, v17, &v24);
        if ( (_DWORD)v16 )
        {
          v18 = *((_DWORD *)a1 + 10);
          if ( (v18 & 0x10000000) != 0 && (unsigned int)bIsGaspFlagSet((__int64)v15, v24, *((_DWORD *)a1 + 31), 8u) )
          {
            v19 = *a1;
            v20 = v18 | 0x20000000;
            *((_DWORD *)a1 + 10) = v20;
            *(_DWORD *)(v19 + 12) = v20;
          }
          LODWORD(v16) = bIsGaspFlagSet((__int64)v15, v24, *((_DWORD *)a1 + 31), 4u);
          if ( !(_DWORD)v16 )
          {
            *((_DWORD *)a1 + 10) |= 0x40000u;
            v21 = *((_DWORD *)a1 + 10);
LABEL_25:
            v16 = *a1;
            *(_DWORD *)(*a1 + 12) = v21;
          }
        }
      }
    }
  }
  else if ( *((int *)a1 + 31) > 20 )
  {
    v22 = *((_DWORD *)a1 + 10);
    if ( (v22 & 0x10000000) != 0 )
    {
      v21 = v22 | 0x20000000;
      *((_DWORD *)a1 + 10) = v21;
      goto LABEL_25;
    }
  }
  return v16;
}
