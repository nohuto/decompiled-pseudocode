/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C0275F70
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C0275F10 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  int v1; // r15d
  XLATEOBJ *v2; // r11
  __int64 v4; // rax
  char v5; // r14
  int v6; // edi
  __int64 v7; // rcx
  int v8; // r12d
  unsigned __int8 *started; // rax
  int v10; // r8d
  unsigned __int8 *v11; // rcx
  unsigned int v12; // edx
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // r10
  XLATEOBJ *v15; // r11
  int v16; // r13d
  bool v17; // zf
  int v18; // ecx
  int v19; // r15d
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // rdi
  unsigned __int8 v22; // r8
  int v23; // eax
  char v24; // r14
  ULONG v25; // edx
  unsigned int v26; // edx
  int v27; // ecx
  unsigned __int8 *v28; // rax
  ULONG v29; // eax
  char v30; // al
  unsigned __int8 v31; // al
  char v32; // al
  unsigned __int8 v33; // al
  int v34; // eax
  char v35; // cl
  unsigned __int8 v36; // [rsp+20h] [rbp-40h]
  _WORD v37[2]; // [rsp+24h] [rbp-3Ch]
  int v38; // [rsp+28h] [rbp-38h]
  int v39; // [rsp+2Ch] [rbp-34h]
  int v40; // [rsp+30h] [rbp-30h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-28h]
  unsigned __int8 *v42; // [rsp+40h] [rbp-20h]
  XLATEOBJ *v43; // [rsp+48h] [rbp-18h]
  _DWORD v44[2]; // [rsp+50h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATEOBJ **)a1;
  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v6 = *((_DWORD *)a1 + 8);
  v39 = v1;
  v43 = v2;
  v7 = *(_QWORD *)(v4 + 128);
  v36 = 0;
  v44[0] = -524255232;
  v44[1] = -16975632;
  v37[0] = -4096;
  if ( v7 )
    v8 = **(_DWORD **)(v7 + 112) | *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v7 + 112) + 8LL);
  else
    v8 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v10 = *((_DWORD *)a1 + 36);
  v11 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v12 = *((_DWORD *)a1 + 14);
  v41 = started;
  v13 = StartPixel(v11, v12, v10);
  v42 = v13;
  while ( v6 )
  {
    v16 = *((_DWORD *)a1 + 12);
    v17 = *((_DWORD *)a1 + 35) == 1;
    v18 = v1;
    v19 = *((_DWORD *)a1 + 14);
    v20 = v14;
    v40 = v6 - 1;
    v21 = v13;
    v38 = v18;
    if ( !v17 )
      goto LABEL_8;
    if ( (v16 & 7) == 0 )
    {
      v18 = v38;
      v20 = v14 - 1;
LABEL_8:
      v22 = v36;
      goto LABEL_9;
    }
    v22 = *v14 << (v16 & 7);
    v18 = v38;
    v36 = v22;
LABEL_9:
    v23 = *((_DWORD *)a1 + 36);
    if ( v23 == 1 )
    {
      v24 = *((_BYTE *)v44 + (v19 & 7));
    }
    else
    {
      if ( v23 != 2 )
        goto LABEL_15;
      v24 = *((_BYTE *)v37 + (v19 & 1));
    }
    v5 = *v13 & v24;
LABEL_15:
    if ( !v39 )
      goto LABEL_71;
    do
    {
      v38 = v18 - 1;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          v27 = v16 & 7;
          if ( (v16 & 7) == 0 )
            v22 = v20[1];
          v28 = v20 + 1;
          v25 = v22 >> 7;
          ++v16;
          v36 = 2 * v22;
          if ( v27 )
            v28 = v20;
          v20 = v28;
          break;
        case 2:
          v26 = *v20;
          if ( (v16 & 1) != 0 )
          {
            v25 = v26 & 0xF;
            ++v20;
          }
          else
          {
            v25 = v26 >> 4;
          }
          ++v16;
          break;
        case 3:
          v25 = *v20++;
          break;
        case 4:
          v25 = (unsigned __int16)(v8 & *(_WORD *)v20);
          v20 += 2;
          break;
        case 5:
          v25 = *v20 | (*(unsigned __int16 *)(v20 + 1) << 8);
          v20 += 3;
          break;
        case 6:
          v25 = v8 & *(_DWORD *)v20;
          v20 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v25 == *((_DWORD *)a1 + 37) )
            v32 = (*v21 << (v19 & 7)) & 0x80;
          else
            v32 = (unsigned __int8)XLATEOBJ_iXlate(v15, v25) << 7;
          v33 = v5 | v32;
          if ( (++v19 & 7) != 0 )
          {
            v5 = v33 >> 1;
          }
          else
          {
            *v21++ = v33;
            v5 = 0;
          }
          break;
        case 2:
          if ( (v19 & 1) != 0 )
          {
            if ( v25 == *((_DWORD *)a1 + 37) )
              v30 = *v21 & 0xF;
            else
              v30 = XLATEOBJ_iXlate(v15, v25);
            v31 = v5 | v30;
            *v21++ = v31;
LABEL_61:
            v5 = v31;
          }
          else
          {
            if ( v25 == *((_DWORD *)a1 + 37) )
            {
              v31 = *v21 & 0xF0;
              goto LABEL_61;
            }
            v5 = 16 * XLATEOBJ_iXlate(v15, v25);
          }
          ++v19;
          break;
        case 3:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *v21 = XLATEOBJ_iXlate(v15, v25);
          ++v21;
          break;
        case 4:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *(_WORD *)v21 = XLATEOBJ_iXlate(v15, v25);
          v21 += 2;
          break;
        case 5:
          if ( v25 != *((_DWORD *)a1 + 37) )
          {
            v29 = XLATEOBJ_iXlate(v15, v25);
            *v21 = v29;
            v21[2] = BYTE2(v29);
            v21[1] = BYTE1(v29);
          }
          v21 += 3;
          break;
        case 6:
          if ( v25 != *((_DWORD *)a1 + 37) )
            *(_DWORD *)v21 = XLATEOBJ_iXlate(v15, v25);
          v21 += 4;
          break;
        default:
          return;
      }
      v18 = v38;
      v15 = v43;
      v22 = v36;
    }
    while ( v38 );
    v14 = v41;
    v13 = v42;
LABEL_71:
    v34 = *((_DWORD *)a1 + 36);
    if ( v34 == 1 )
    {
      if ( (v19 & 7) != 0 )
      {
        v35 = *((_BYTE *)v44 + (v19 & 7));
        goto LABEL_77;
      }
    }
    else if ( v34 == 2 && (v19 & 1) != 0 )
    {
      v35 = *((_BYTE *)v37 + (v19 & 1));
LABEL_77:
      *v21 = v5 & v35 | *v21 & ~v35;
    }
    v6 = v40;
    v14 += *((int *)a1 + 10);
    v1 = v39;
    v13 += *((int *)a1 + 11);
    v42 = v13;
    v41 = v14;
  }
}
