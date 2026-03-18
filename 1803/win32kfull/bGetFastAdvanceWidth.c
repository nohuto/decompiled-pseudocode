/*
 * XREFs of bGetFastAdvanceWidth @ 0x1C021E3B4
 * Callers:
 *     vFillGLYPHDATA @ 0x1C0221048 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0221838 (vFillGLYPHDATA_ErrRecover.c)
 * Callees:
 *     IsFullWidthCharacter @ 0x1C0223B10 (IsFullWidthCharacter.c)
 */

__int64 __fastcall bGetFastAdvanceWidth(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v7; // r10
  int v8; // r15d
  __int64 v9; // rcx
  unsigned int *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int16 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r10

  v3 = 1;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = a2;
  v7 = a1;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 0x42000000) == 0x40000000 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(v9 + 400) & 0x10000000) == 0 || !(unsigned int)IsFullWidthCharacter(v9, a2) )
    {
      *a3 = -1;
      return 0LL;
    }
  }
  if ( !v4 )
  {
    v11 = *(unsigned int **)(v7 + 192);
    v12 = *(_QWORD *)(v7 + 8);
    v13 = *(_QWORD *)(v12 + 64);
    v14 = v11[24];
    v15 = v13 + v11[8];
    if ( (_DWORD)v14 && (unsigned __int64)*(unsigned int *)(v12 + 552) + 4 <= v11[25] )
      v16 = v13 + v14;
    else
      v16 = 0LL;
    v17 = (unsigned __int16)__ROR2__(*(_WORD *)(v11[6] + v13 + 34), 8);
    v18 = __ROR2__(*(_WORD *)(v15 + 4LL * (v17 - 1)), 8);
    if ( (*(_DWORD *)(v7 + 116) & 0x10) == 0
      || (*(_BYTE *)(v11[4] + v13 + 17) & 0x14) == 0
      || (*(_DWORD *)(v12 + 400) & 0x10000000) != 0
      && (unsigned int)IsFullWidthCharacter(*(_QWORD *)(v7 + 8), (unsigned int)v5) )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      if ( !v16 || (v19 = v5, *(_DWORD *)(v7 + 124) < (int)*(unsigned __int8 *)(v5 + v16 + 4)) )
      {
        *a3 = -1;
        return 0;
      }
    }
    else
    {
      v19 = v5;
    }
    if ( (unsigned int)v5 < v17 )
      v18 = __ROR2__(*(_WORD *)(v15 + 4 * v19), 8);
    v20 = *(_DWORD *)(v7 + 80);
    v21 = v20 * v18;
    if ( v20 <= 0 )
      v22 = -(((0x8000 - v21) >> 12) & 0xFFFFFFF0);
    else
      v22 = ((v21 + 0x8000) >> 12) & 0xFFFFFFF0;
    *a3 = v22;
    v23 = *(_QWORD *)(v7 + 8);
    if ( (*(_DWORD *)(v23 + 400) & 0x10000000) != 0
      && (unsigned int)IsFullWidthCharacter(v23, (unsigned int)v5)
      && !gbJpn98FixPitch
      && v24
      && v24 != 16 * *(_DWORD *)(v25 + 404) )
    {
      *a3 = 32 * *(_DWORD *)(v25 + 404);
    }
    return v3;
  }
  *a3 = 16 * *(unsigned __int8 *)(v5 + v4 + 2);
  return v3;
}
