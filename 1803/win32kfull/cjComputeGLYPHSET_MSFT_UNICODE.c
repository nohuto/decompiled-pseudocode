/*
 * XREFs of cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C021B374
 * Callers:
 *     bLoadGlyphSet @ 0x1C0219808 (bLoadGlyphSet.c)
 * Callees:
 *     Fixup5cRun @ 0x1C0217BB4 (Fixup5cRun.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C02B2004 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_UNICODE(__int64 a1, int a2, unsigned int *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  unsigned __int16 *v7; // r11
  unsigned int v8; // ecx
  unsigned __int16 *v9; // r13
  int v10; // r15d
  unsigned __int16 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r15d
  __int16 v14; // si
  unsigned __int16 v15; // si
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int16 *v18; // rbx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // r9
  int v21; // r8d
  unsigned __int16 v22; // cx
  __int64 v23; // rax
  _WORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v26; // [rsp+34h] [rbp-34h]
  unsigned __int16 v27; // [rsp+36h] [rbp-32h]
  int v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+3Ch] [rbp-2Ch]
  __int64 v30; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 *v31; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int16 *v32; // [rsp+50h] [rbp-18h]
  __int64 v33; // [rsp+58h] [rbp-10h]
  unsigned __int16 v36; // [rsp+C0h] [rbp+58h] BYREF
  _DWORD *v37; // [rsp+C8h] [rbp+60h]

  v37 = a4;
  v4 = a4;
  v32 = 0LL;
  v7 = 0LL;
  v8 = *a4;
  v9 = 0LL;
  v10 = a4[3] + 4;
  v11 = 0;
  v12 = ((*a4 >> 2) & 1) + a4[1];
  v28 = (v8 >> 2) & 1;
  v13 = 4 * (v10 + 4 * v12);
  if ( a3 )
  {
    v14 = *(_WORD *)(a1 + 6);
    v29 = v8 & 3;
    v15 = __ROR2__(v14, 8) >> 1;
    v16 = a1 + 2 * ((unsigned int)v15 + 1 + 7LL);
    v33 = v16;
    if ( *(_WORD *)(v16 + 2LL * v15 - 2) == 0xFFFF && v15 > 1u )
      --v15;
    v31 = (unsigned __int16 *)(a3 + 4);
    v17 = (__int64)&a3[4 * v12 + 4];
    v18 = (unsigned __int16 *)(a3 + 4);
    v30 = v17;
    v19 = 0;
    v27 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        v20 = v11;
        v21 = *(unsigned __int16 *)(v16 + 2LL * v19);
        LOWORD(v21) = __ROR2__(v21, 8);
        v25[0] = v21;
        v22 = __ROR2__(*(_WORD *)(a1 + 2LL * v19 + 14), 8);
        v26 = v22;
        v36 = v22;
        if ( v29 == 3 )
        {
          if ( v20 < 0xB7u && (unsigned __int16)v21 > 0xB7u )
          {
            *(_DWORD *)v18 = 65719;
            *((_QWORD *)v18 + 1) = v17;
            v32 = v18;
            v18 += 8;
            v17 += 4LL;
            v31 = v18;
            v30 = v17;
          }
          if ( (unsigned __int16)v21 <= 0x2219u && v22 >= 0x2219u )
            v9 = v18;
        }
        v18[1] = v22 - v21 + 1;
        *v18 = v21;
        *((_QWORD *)v18 + 1) = v17;
        if ( (_WORD)v28 && (unsigned __int16)v21 <= 0x5Cu && v22 >= 0x5Cu )
        {
          if ( !(unsigned int)Fixup5cRun(a2, v25, &v36, (__int64)&v31, &v30) )
            return 0LL;
          v4 = v37;
          v18 = v31;
          v17 = v30;
          LOWORD(v28) = 0;
          --v37[3];
          if ( !v18[1] )
          {
            v11 = v36;
            goto LABEL_22;
          }
          v21 = v25[0];
          v26 = v36;
        }
        if ( (_WORD)v21 != 0xFFFF && (unsigned int)fs_WinNTGetGlyphIDs(a2, v18[1], v21, 0, 0LL, v17) )
          return 0LL;
        v23 = v18[1];
        v18 += 8;
        v4 = v37;
        v11 = v26;
        v31 = v18;
        v17 += 4 * v23;
        v30 = v17;
LABEL_22:
        v19 = v27 + 1;
        v27 = v19;
        if ( v19 >= v15 )
        {
          v7 = v32;
          break;
        }
        v16 = v33;
      }
    }
    if ( v29 == 3 && v7 )
    {
      if ( v9 )
        *(_DWORD *)(*((_QWORD *)v7 + 1) + 4LL * (183 - *v7)) = *(_DWORD *)(*((_QWORD *)v9 + 1) + 4LL * (8729 - *v9));
    }
    *a3 = v13;
    a3[1] = 4;
    a3[2] = v4[3];
    a3[3] = ((char *)v18 - (char *)(a3 + 4)) >> 4;
  }
  return v13;
}
