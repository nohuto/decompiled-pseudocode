/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C028BA50
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C028B9E8 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  XLATEOBJ *v1; // r11
  int v3; // r15d
  char v4; // r14
  int v5; // edi
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int8 *started; // rax
  int v9; // r8d
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edx
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // r10
  XLATEOBJ *v14; // r11
  int v15; // r13d
  bool v16; // zf
  int v17; // ecx
  int v18; // r15d
  unsigned __int8 *v19; // rsi
  unsigned __int8 *v20; // rdi
  unsigned __int8 v21; // r8
  int v22; // eax
  char v23; // r14
  ULONG v24; // edx
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int8 *v27; // rax
  ULONG v28; // eax
  char v29; // al
  unsigned __int8 v30; // al
  char v31; // al
  unsigned __int8 v32; // al
  int v33; // eax
  char v34; // cl
  unsigned __int8 v35; // [rsp+20h] [rbp-40h]
  _WORD v36[2]; // [rsp+24h] [rbp-3Ch]
  int v37; // [rsp+28h] [rbp-38h]
  int v38; // [rsp+2Ch] [rbp-34h]
  int v39; // [rsp+30h] [rbp-30h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-28h]
  unsigned __int8 *v41; // [rsp+40h] [rbp-20h]
  XLATEOBJ *v42; // [rsp+48h] [rbp-18h]
  _DWORD v43[2]; // [rsp+50h] [rbp-10h]

  v1 = *(XLATEOBJ **)a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 8);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  v38 = v3;
  v42 = v1;
  v35 = 0;
  v43[0] = -524255232;
  v43[1] = -16975632;
  v36[0] = -4096;
  if ( v6 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v9 = *((_DWORD *)a1 + 36);
  v10 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 14);
  v40 = started;
  v12 = StartPixel(v10, v11, v9);
  v41 = v12;
  while ( v5 )
  {
    v15 = *((_DWORD *)a1 + 12);
    v16 = *((_DWORD *)a1 + 35) == 1;
    v17 = v3;
    v18 = *((_DWORD *)a1 + 14);
    v19 = v13;
    v39 = v5 - 1;
    v20 = v12;
    v37 = v17;
    if ( !v16 )
      goto LABEL_8;
    if ( (v15 & 7) == 0 )
    {
      v17 = v37;
      v19 = v13 - 1;
LABEL_8:
      v21 = v35;
      goto LABEL_9;
    }
    v21 = *v13 << (v15 & 7);
    v17 = v37;
    v35 = v21;
LABEL_9:
    v22 = *((_DWORD *)a1 + 36);
    if ( v22 == 1 )
    {
      v23 = *((_BYTE *)v43 + (v18 & 7));
    }
    else
    {
      if ( v22 != 2 )
        goto LABEL_15;
      v23 = *((_BYTE *)v36 + (v18 & 1));
    }
    v4 = *v12 & v23;
LABEL_15:
    if ( !v38 )
      goto LABEL_71;
    do
    {
      v37 = v17 - 1;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          v26 = v15 & 7;
          if ( (v15 & 7) == 0 )
            v21 = v19[1];
          v27 = v19 + 1;
          v24 = v21 >> 7;
          ++v15;
          v35 = 2 * v21;
          if ( v26 )
            v27 = v19;
          v19 = v27;
          break;
        case 2:
          v25 = *v19;
          if ( (v15 & 1) != 0 )
          {
            v24 = v25 & 0xF;
            ++v19;
          }
          else
          {
            v24 = v25 >> 4;
          }
          ++v15;
          break;
        case 3:
          v24 = *v19++;
          break;
        case 4:
          v24 = (unsigned __int16)(v7 & *(_WORD *)v19);
          v19 += 2;
          break;
        case 5:
          v24 = *v19 | (*(unsigned __int16 *)(v19 + 1) << 8);
          v19 += 3;
          break;
        case 6:
          v24 = v7 & *(_DWORD *)v19;
          v19 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v24 == *((_DWORD *)a1 + 37) )
            v31 = (*v20 << (v18 & 7)) & 0x80;
          else
            v31 = (unsigned __int8)XLATEOBJ_iXlate(v14, v24) << 7;
          v32 = v4 | v31;
          if ( (++v18 & 7) != 0 )
          {
            v4 = v32 >> 1;
          }
          else
          {
            *v20++ = v32;
            v4 = 0;
          }
          break;
        case 2:
          if ( (v18 & 1) != 0 )
          {
            if ( v24 == *((_DWORD *)a1 + 37) )
              v29 = *v20 & 0xF;
            else
              v29 = XLATEOBJ_iXlate(v14, v24);
            v30 = v4 | v29;
            *v20++ = v30;
LABEL_61:
            v4 = v30;
          }
          else
          {
            if ( v24 == *((_DWORD *)a1 + 37) )
            {
              v30 = *v20 & 0xF0;
              goto LABEL_61;
            }
            v4 = 16 * XLATEOBJ_iXlate(v14, v24);
          }
          ++v18;
          break;
        case 3:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *v20 = XLATEOBJ_iXlate(v14, v24);
          ++v20;
          break;
        case 4:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *(_WORD *)v20 = XLATEOBJ_iXlate(v14, v24);
          v20 += 2;
          break;
        case 5:
          if ( v24 != *((_DWORD *)a1 + 37) )
          {
            v28 = XLATEOBJ_iXlate(v14, v24);
            *v20 = v28;
            v20[2] = BYTE2(v28);
            v20[1] = BYTE1(v28);
          }
          v20 += 3;
          break;
        case 6:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *(_DWORD *)v20 = XLATEOBJ_iXlate(v14, v24);
          v20 += 4;
          break;
        default:
          return;
      }
      v17 = v37;
      v14 = v42;
      v21 = v35;
    }
    while ( v37 );
    v13 = v40;
    v12 = v41;
LABEL_71:
    v33 = *((_DWORD *)a1 + 36);
    if ( v33 == 1 )
    {
      if ( (v18 & 7) != 0 )
      {
        v34 = *((_BYTE *)v43 + (v18 & 7));
        goto LABEL_77;
      }
    }
    else if ( v33 == 2 && (v18 & 1) != 0 )
    {
      v34 = *((_BYTE *)v36 + (v18 & 1));
LABEL_77:
      *v20 = v4 & v34 | *v20 & ~v34;
    }
    v5 = v39;
    v13 += *((int *)a1 + 10);
    v3 = v38;
    v12 += *((int *)a1 + 11);
    v41 = v12;
    v40 = v13;
  }
}
