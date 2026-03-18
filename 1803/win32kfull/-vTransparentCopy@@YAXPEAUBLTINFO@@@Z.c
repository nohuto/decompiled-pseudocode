/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C02623E0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C0262380 (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  int v1; // r15d
  int v3; // edi
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r12d
  unsigned __int8 *started; // rax
  int v9; // r8d
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edx
  unsigned __int8 *v12; // rdx
  unsigned __int8 v13; // r10
  unsigned __int8 *v14; // r11
  int v15; // r13d
  bool v16; // zf
  int v17; // ecx
  int v18; // r15d
  unsigned __int8 *v19; // rsi
  unsigned __int8 *v20; // rdi
  int v21; // eax
  char v22; // r14
  ULONG v23; // edx
  unsigned int v24; // edx
  int v25; // ecx
  unsigned __int8 *v26; // rax
  ULONG v27; // eax
  int v28; // eax
  char v29; // al
  unsigned __int8 v30; // al
  char v31; // al
  unsigned __int8 v32; // al
  int v33; // eax
  char v34; // cl
  unsigned __int8 v35; // [rsp+20h] [rbp-40h]
  _WORD v36[2]; // [rsp+24h] [rbp-3Ch]
  int v37; // [rsp+28h] [rbp-38h]
  XLATEOBJ *pxlo; // [rsp+30h] [rbp-30h]
  int v39; // [rsp+38h] [rbp-28h]
  int v40; // [rsp+3Ch] [rbp-24h]
  unsigned __int8 *v41; // [rsp+40h] [rbp-20h]
  unsigned __int8 *v42; // [rsp+48h] [rbp-18h]
  _DWORD v43[2]; // [rsp+50h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = 0;
  pxlo = *(XLATEOBJ **)a1;
  v5 = *((_QWORD *)a1 + 9);
  v39 = v1;
  v35 = 0;
  v43[0] = -524255232;
  v6 = *(_QWORD *)(v5 + 128);
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
  v41 = started;
  v12 = StartPixel(v10, v11, v9);
  v42 = v12;
  while ( v3 )
  {
    v15 = *((_DWORD *)a1 + 12);
    v16 = *((_DWORD *)a1 + 35) == 1;
    v17 = v1;
    v18 = *((_DWORD *)a1 + 14);
    v19 = v14;
    v40 = v3 - 1;
    v20 = v12;
    v37 = v17;
    if ( v16 )
    {
      if ( (v15 & 7) != 0 )
      {
        v13 = *v14 << (v15 & 7);
        v35 = v13;
      }
      else
      {
        v19 = v14 - 1;
      }
      v17 = v37;
    }
    v21 = *((_DWORD *)a1 + 36);
    if ( v21 == 1 )
    {
      v22 = *((_BYTE *)v43 + (v18 & 7));
    }
    else
    {
      if ( v21 != 2 )
        goto LABEL_15;
      v22 = *((_BYTE *)v36 + (v18 & 1));
    }
    v4 = *v12 & v22;
LABEL_15:
    if ( v39 )
    {
      do
      {
        v37 = v17 - 1;
        switch ( *((_DWORD *)a1 + 35) )
        {
          case 1:
            if ( (v15 & 7) == 0 )
              v13 = *++v19;
            v23 = v13 >> 7;
            ++v15;
            v35 = 2 * v13;
            break;
          case 2:
            v24 = *v19;
            v25 = v15 & 1;
            if ( (v15 & 1) != 0 )
              v23 = v24 & 0xF;
            else
              v23 = v24 >> 4;
            v26 = v19 + 1;
            ++v15;
            if ( !v25 )
              v26 = v19;
            v19 = v26;
            break;
          case 3:
            v23 = *v19++;
            break;
          case 4:
            v23 = (unsigned __int16)(v7 & *(_WORD *)v19);
            v19 += 2;
            break;
          case 5:
            v23 = *v19 | (*(unsigned __int16 *)(v19 + 1) << 8);
            v19 += 3;
            break;
          case 6:
            v23 = v7 & *(_DWORD *)v19;
            v19 += 4;
            break;
          default:
            return;
        }
        switch ( *((_DWORD *)a1 + 36) )
        {
          case 1:
            if ( v23 == *((_DWORD *)a1 + 37) )
              v31 = (*v20 << (v18 & 7)) & 0x80;
            else
              v31 = (unsigned __int8)XLATEOBJ_iXlate(pxlo, v23) << 7;
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
            v28 = *((_DWORD *)a1 + 37);
            if ( (v18 & 1) != 0 )
            {
              if ( v23 == v28 )
                v29 = *v20 & 0xF;
              else
                v29 = XLATEOBJ_iXlate(pxlo, v23);
              v30 = v4 | v29;
              *v20 = v30;
              v4 = v30;
              ++v20;
            }
            else if ( v23 == v28 )
            {
              v4 = *v20 & 0xF0;
            }
            else
            {
              v4 = 16 * XLATEOBJ_iXlate(pxlo, v23);
            }
            ++v18;
            break;
          case 3:
            if ( v23 != *((_DWORD *)a1 + 37) )
              *v20 = XLATEOBJ_iXlate(pxlo, v23);
            ++v20;
            break;
          case 4:
            if ( v23 != *((_DWORD *)a1 + 37) )
              *(_WORD *)v20 = XLATEOBJ_iXlate(pxlo, v23);
            v20 += 2;
            break;
          case 5:
            if ( v23 != *((_DWORD *)a1 + 37) )
            {
              v27 = XLATEOBJ_iXlate(pxlo, v23);
              *v20 = v27;
              v20[2] = BYTE2(v27);
              v20[1] = BYTE1(v27);
            }
            v20 += 3;
            break;
          case 6:
            if ( v23 != *((_DWORD *)a1 + 37) )
              *(_DWORD *)v20 = XLATEOBJ_iXlate(pxlo, v23);
            v20 += 4;
            break;
          default:
            return;
        }
        v17 = v37;
        v13 = v35;
      }
      while ( v37 );
      v14 = v41;
      v12 = v42;
    }
    v33 = *((_DWORD *)a1 + 36);
    if ( v33 == 1 )
    {
      if ( (v18 & 7) == 0 )
        goto LABEL_77;
      v34 = *((_BYTE *)v43 + (v18 & 7));
      goto LABEL_76;
    }
    if ( v33 == 2 && (v18 & 1) != 0 )
    {
      v34 = *((_BYTE *)v36 + (v18 & 1));
LABEL_76:
      *v20 = v4 & v34 | *v20 & ~v34;
    }
LABEL_77:
    v3 = v40;
    v14 += *((int *)a1 + 10);
    v13 = v35;
    v12 += *((int *)a1 + 11);
    v1 = v39;
    v42 = v12;
    v41 = v14;
  }
}
