/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C00FB68C
 * Callers:
 *     vSrcOpaqCopyS4D32 @ 0x1C00FB4B0 (vSrcOpaqCopyS4D32.c)
 *     vSrcOpaqCopyS4D16 @ 0x1C02451F0 (vSrcOpaqCopyS4D16.c)
 *     vSrcOpaqCopyS4D24 @ 0x1C02453D0 (vSrcOpaqCopyS4D24.c)
 * Callees:
 *     <none>
 */

int *__fastcall pvFillOpaqTable(int a1, int a2, int a3, struct SURFACE *a4)
{
  char v8; // r11
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r9d
  int v13; // r14d
  int v14; // r10d
  int v15; // edi
  int v16; // ebx
  int v17; // r8d
  char v18; // al
  int v19; // r13d
  int v20; // r15d
  int v21; // r8d
  char v22; // al
  int v23; // edi
  char v24; // cl
  int v25; // r8d
  int v26; // r14d
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  unsigned int v32; // edi
  bool v33; // zf
  char v34; // r12
  unsigned int *v35; // r8
  int *v36; // rdx
  _WORD *v37; // r8
  int v38; // [rsp+0h] [rbp-58h]
  char v39; // [rsp+4h] [rbp-54h]
  char v40; // [rsp+Ch] [rbp-4Ch]
  char v41; // [rsp+10h] [rbp-48h]
  int v42; // [rsp+14h] [rbp-44h]
  int v44; // [rsp+78h] [rbp+20h]

  if ( *(_QWORD *)a4 != qword_1C0327210 || a3 != dword_1C0327218 || a2 != dword_1C032721C )
  {
    qword_1C0327210 = *(_QWORD *)a4;
    v8 = 0;
    v9 = *((_QWORD *)a4 + 16);
    dword_1C032721C = a2;
    dword_1C0327218 = a3;
    if ( !v9 )
      v9 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1800LL);
    v10 = *(_DWORD *)(v9 + 24);
    if ( (v10 & 2) != 0 )
    {
      v36 = *(int **)(v9 + 112);
      v17 = v36[9] + v36[6] - 8;
      v15 = v36[10] + v36[7] - 8;
      v13 = v36[11] + v36[8] - 8;
      v12 = *v36;
      v14 = v36[1];
      v16 = v36[2];
    }
    else
    {
      v11 = 5;
      v12 = 31;
      if ( a1 != 2 )
      {
        v12 = 255;
        v11 = 8;
      }
      if ( (v10 & 4) != 0 )
      {
        v17 = v11 - 8;
        v14 = v12 << v11;
        v15 = v11 + v11 - 8;
        v13 = v11 + v15;
        v16 = v12 << v11 << v11;
      }
      else if ( (v10 & 8) != 0 )
      {
        v13 = v11 - 8;
        v14 = v12 << v11;
        v15 = v11 + v11 - 8;
        v16 = v12;
        v17 = v11 + v15;
        v12 = v12 << v11 << v11;
      }
      else
      {
        v12 = 0;
        v14 = 0;
        v16 = 0;
        v17 = 0;
        v15 = 0;
        v13 = 0;
      }
    }
    v18 = 0;
    v19 = -v17;
    if ( v17 >= 0 )
    {
      v18 = v17;
      LOBYTE(v19) = 0;
    }
    v40 = v18;
    v20 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v19) >> v18)];
    v21 = -v15;
    v44 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v12) << v19) >> v18)] - v20;
    v22 = 0;
    if ( v15 >= 0 )
    {
      v22 = v15;
      LOBYTE(v21) = 0;
    }
    v41 = v22;
    v39 = v21;
    v23 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v14) << v21) >> v22)];
    v24 = v21;
    v25 = -v13;
    v38 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v14) << v24) >> v22)] - v23;
    if ( v13 >= 0 )
    {
      LOBYTE(v25) = 0;
      v8 = v13;
    }
    v26 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v16) << v25) >> v8)];
    v27 = v44;
    v28 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v16) << v25) >> v8)] - v26;
    v29 = v38;
    v30 = v28 + 16 * v26;
    v31 = v44 + 16 * v20;
    v32 = v38 + 16 * v23;
    v42 = v28;
    v33 = a1 == 2;
    v34 = v25;
    if ( v33 )
    {
      LOWORD(dword_1C032ACE0) = a3;
      v37 = (_WORD *)&dword_1C032ACE0 + 1;
      do
      {
        v31 += v27;
        v32 += v29;
        v30 += v28;
        v29 = v38;
        *v37++ = v16 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v8) >> v34) | v12 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v31 >> 4) + 256] << v40) >> v19) | v14 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v32 >> 4) + 256] << v41) >> v39);
        v28 = v42;
        v27 = v44;
      }
      while ( v37 < word_1C032ACFE );
      *v37 = a2;
    }
    else
    {
      dword_1C032ACE0 = a3;
      v35 = (unsigned int *)&unk_1C032ACE4;
      do
      {
        v31 += v27;
        v32 += v29;
        v30 += v28;
        v29 = v38;
        *v35++ = v12 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v31 >> 4) + 256] << v40) >> v19) | v14 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v32 >> 4) + 256] << v41) >> v39) | v16 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v8) >> v34);
        v28 = v42;
        v27 = v44;
      }
      while ( v35 < &dword_1C032AD1C );
      *v35 = a2;
    }
  }
  return &dword_1C032ACE0;
}
