/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CF7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  struct _PLGRUN *v5; // rbx
  XCLIPOBJ *v6; // rdi
  struct _PLGRUN *v8; // r12
  unsigned __int64 v9; // r14
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  __int64 j; // r8
  struct _PLGRUN *v14; // rsi
  int v15; // r11d
  int v16; // r10d
  char *v17; // rcx
  unsigned __int8 v18; // r9
  char v19; // dl
  int v20; // ebx
  unsigned __int8 v21; // al
  int v22; // eax
  LONG v23; // esi
  int v24; // ecx
  __int64 v25; // r8
  bool i; // zf
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // rax
  char *v30; // rbx
  unsigned __int8 v31; // cl
  char v32; // bp
  char v33; // r14
  unsigned __int64 v34; // rsi
  int v35; // r8d
  unsigned __int8 v36; // al
  unsigned __int8 v37; // [rsp+30h] [rbp-78h]
  int v38; // [rsp+34h] [rbp-74h]
  int v39; // [rsp+38h] [rbp-70h]
  LONG v40; // [rsp+3Ch] [rbp-6Ch]
  __int64 v41; // [rsp+40h] [rbp-68h]
  struct _RECTL si128; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  int v44; // [rsp+60h] [rbp-48h]
  int v45; // [rsp+64h] [rbp-44h]
  struct _PLGRUN *v46; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = a1;
    v6 = (XCLIPOBJ *)a4;
    v8 = a2;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v43 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v5 < v8 )
      {
        v22 = *(_DWORD *)v5;
        v23 = *((_DWORD *)v5 + 1);
        v24 = *((_DWORD *)v5 + 2);
        v5 = (struct _PLGRUN *)((char *)v5 + 12);
        v45 = v22;
        v25 = *((_QWORD *)a3 + 10) + v23 * *((_DWORD *)a3 + 22);
        for ( i = v24 == 0; ; i = v24 == 0 )
        {
          v41 = v25;
          v38 = v24;
          v40 = v23;
          if ( i )
            break;
          v46 = (struct _PLGRUN *)((char *)v5 + 8);
          if ( (struct _PLGRUN *)((char *)v5 + 8) > v8 )
            break;
          if ( v23 < si128.top || v23 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v6, &si128, v23);
            v25 = v41;
            v24 = v38;
          }
          if ( v23 >= si128.top && v23 < si128.bottom )
          {
            v27 = *(int *)v5;
            v28 = *((_DWORD *)v5 + 1);
            v29 = *(_DWORD *)v5 & 7;
            v39 = v28;
            v30 = (char *)(v25 + (v27 >> 3));
            v31 = *((_BYTE *)&dword_1C02F1E08 + v29);
            v37 = v31;
            if ( (int)v27 < 0
              || (int)v27 >= *((_DWORD *)a3 + 14)
              || (unsigned __int64)v30 < v4
              || (unsigned __int64)v30 > v9 )
            {
              v33 = 0;
              v32 = 0;
            }
            else
            {
              v32 = *v30;
              v33 = 1;
            }
            if ( v28 >= 0 )
            {
              v34 = v43;
              do
              {
                v44 = v28;
                v35 = v28;
                if ( (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v34 )
                  break;
                if ( (int)v27 < si128.left || (int)v27 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v27);
                  v28 = v39;
                  v35 = v44;
                  v31 = v37;
                }
                if ( (int)v27 >= si128.left && (int)v27 < si128.right )
                {
                  v36 = v31;
                  if ( v45 )
                    v36 = 0;
                  v32 &= ~v36;
                }
                --v28;
                LODWORD(v27) = v27 + 1;
                v31 >>= 1;
                v37 = v31;
                v39 = v28;
                if ( !v31 )
                {
                  if ( v33 )
                    *v30 = v32;
                  ++v30;
                  v31 = *((_BYTE *)&dword_1C02F1E08 + (v27 & 7));
                  v37 = v31;
                  if ( (int)v27 < 0
                    || (int)v27 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v30 < v4
                    || (unsigned __int64)v30 > v34 )
                  {
                    v33 = 0;
                    v32 = 0;
                  }
                  else
                  {
                    v32 = *v30;
                    v33 = 1;
                  }
                }
              }
              while ( v35 > 0 );
              v23 = v40;
              v8 = a2;
              v25 = v41;
            }
            i = v33 == 0;
            v9 = v43;
            if ( i || (unsigned __int64)v30 < v4 )
            {
              v24 = v38;
              v6 = (XCLIPOBJ *)a4;
            }
            else
            {
              v6 = (XCLIPOBJ *)a4;
              v24 = v38;
              if ( (unsigned __int64)v30 <= v43 )
                *v30 = v32;
            }
          }
          ++v23;
          v5 = v46;
          v25 += *((int *)a3 + 22);
          --v24;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v10 = *((_DWORD *)a3 + 22) * *((_DWORD *)v5 + 1);
        v11 = *((_DWORD *)v5 + 2);
        v12 = *(_DWORD *)v5;
        v5 = (struct _PLGRUN *)((char *)v5 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v10; v11; --v11 )
        {
          v14 = (struct _PLGRUN *)((char *)v5 + 8);
          if ( (struct _PLGRUN *)((char *)v5 + 8) > v8 )
            break;
          v15 = *(_DWORD *)v5;
          v16 = *((_DWORD *)v5 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v5 >> 3));
          v18 = *((_BYTE *)&dword_1C02F1E08 + (*(_DWORD *)v5 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 >= 0 )
          {
            do
            {
              v20 = v16;
              if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
                break;
              v21 = v18;
              if ( v12 )
                v21 = 0;
              --v16;
              LOBYTE(v15) = v15 + 1;
              v19 &= ~v21;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1C02F1E08 + (v15 & 7));
              }
            }
            while ( v20 > 0 );
            v8 = a2;
          }
          if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
            *v17 = v19;
          j += *((int *)a3 + 22);
          v5 = v14;
        }
      }
      while ( v5 < v8 );
    }
  }
}
