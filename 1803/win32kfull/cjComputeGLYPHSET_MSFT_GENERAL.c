/*
 * XREFs of cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C021B110
 * Callers:
 *     bLoadGlyphSet @ 0x1C0219808 (bLoadGlyphSet.c)
 * Callees:
 *     CreateGlyphSetFromMITable @ 0x1C021794C (CreateGlyphSetFromMITable.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_GENERAL(__int64 a1, unsigned int a2, ULONG **a3, __int64 a4)
{
  unsigned __int16 v4; // bp
  char *v6; // r8
  __int64 v7; // rbx
  char *v8; // r14
  int v9; // edx
  __int64 v10; // r10
  char *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // r13
  unsigned __int16 v15; // r10
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  _DWORD *v18; // rdi
  int v19; // ecx
  signed __int64 v20; // r13
  unsigned __int16 v21; // r15
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // bx
  unsigned __int16 v24; // r10
  __int64 v25; // r11
  __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned int GlyphSetFromMITable; // ebx
  char *v30; // [rsp+20h] [rbp-68h]
  char *v31; // [rsp+28h] [rbp-60h]
  char *v32; // [rsp+30h] [rbp-58h]
  signed __int64 v33; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v6 = (char *)(a1 + 14);
  v7 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
  v8 = v6;
  v30 = (char *)(a1 + 14);
  v9 = 0;
  v10 = (unsigned int)(v7 + 1);
  v11 = (char *)(a1 + 14 + 2 * v10);
  v12 = v10 + v7;
  v13 = v10 + (unsigned int)(2 * v7);
  v34 = v7 - 1;
  v14 = v11;
  v15 = 0;
  v32 = &v6[2 * v12];
  v31 = &v6[2 * v13];
  if ( (int)v7 - 1 <= 0 )
    goto LABEL_22;
  do
  {
    v16 = __ROR2__(*(_WORD *)v11, 8);
    v17 = __ROR2__(*(_WORD *)v6, 8);
    if ( v17 >= v16 && v16 != 0xFFFF )
      v9 += v17 - v16 + 1;
    ++v15;
    v6 += 2;
    v11 += 2;
  }
  while ( v15 < (int)v7 - 1 );
  if ( (unsigned int)(v9 - 1) <= 0xFFFE && (v18 = EngAllocMem(0, 8 * v9, 0x64667454u)) != 0LL )
  {
    v19 = v7 - 1;
    v20 = v14 - v8;
    v21 = 0;
    v33 = v20;
    do
    {
      v22 = __ROR2__(*(_WORD *)&v8[v20], 8);
      v23 = __ROR2__(*(_WORD *)v8, 8);
      if ( v23 >= v22 && v22 != 0xFFFF )
      {
        v24 = v22;
        if ( v22 <= v23 )
        {
          do
          {
            v25 = v21;
            v18[2 * v21] = 0;
            if ( v22 <= 0xFFu )
              LOWORD(v18[2 * v21]) = v24;
            else
              LOWORD(v18[2 * v21]) = __ROL2__(v24, 8);
            v26 = *(_WORD *)&v31[2 * v4];
            if ( v26 )
              v27 = __ROR2__(*(_WORD *)&v32[2 * v4], 8)
                  + __ROR2__(
                      *(_WORD *)&v31[2 * v4
                                   + 2 * ((unsigned __int64)(unsigned __int16)__ROR2__(v26, 8) >> 1)
                                   + 2 * (v24 - v22)],
                      8);
            else
              v27 = v24 + __ROR2__(*(_WORD *)&v32[2 * v4], 8);
            v18[2 * v21++ + 1] = v27;
            v18[2 * v25 + 1] &= -(v27 < a2);
            ++v24;
          }
          while ( v24 <= v23 );
          v8 = v30;
          v20 = v33;
          v19 = v34;
        }
      }
      ++v4;
      v8 += 2;
      v30 = v8;
    }
    while ( v4 < v19 );
    GlyphSetFromMITable = CreateGlyphSetFromMITable(a4, (__int64)v18, v21, a3);
    EngFreeMem(v18);
    return GlyphSetFromMITable;
  }
  else
  {
LABEL_22:
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
}
