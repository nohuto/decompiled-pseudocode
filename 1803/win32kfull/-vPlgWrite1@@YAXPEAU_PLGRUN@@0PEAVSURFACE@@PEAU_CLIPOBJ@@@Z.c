/*
 * XREFs of ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A99A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWrite1(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  XCLIPOBJ *v6; // rdi
  struct _PLGRUN *v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // esi
  int v11; // r14d
  int v12; // eax
  __int64 j; // r9
  int v14; // edi
  int v15; // r11d
  char *v16; // rdx
  unsigned __int8 v17; // r10
  char v18; // r8
  LONG v19; // ebp
  int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  bool i; // zf
  int v24; // edi
  int v25; // r8d
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  char *v28; // rbx
  unsigned __int8 v29; // dl
  char v30; // si
  char v31; // r14
  char v32; // bp
  unsigned __int8 v33; // [rsp+30h] [rbp-78h]
  int v34; // [rsp+34h] [rbp-74h]
  int v35[2]; // [rsp+38h] [rbp-70h]
  int v36; // [rsp+40h] [rbp-68h]
  LONG v37; // [rsp+44h] [rbp-64h]
  struct _RECTL si128; // [rsp+48h] [rbp-60h] BYREF
  int v39; // [rsp+58h] [rbp-50h]
  __int64 v40; // [rsp+60h] [rbp-48h]
  struct _PLGRUN *v41; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = (XCLIPOBJ *)a4;
    v8 = a2;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    *(_QWORD *)v35 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v8 )
      {
        v19 = *((_DWORD *)a1 + 1);
        v20 = *((_DWORD *)a1 + 2);
        v21 = -(*(_DWORD *)a1 != 0);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v39 = v21;
        v22 = *((_QWORD *)a3 + 10) + v19 * *((_DWORD *)a3 + 22);
        for ( i = v20 == 0; ; i = v20 == 0 )
        {
          v40 = v22;
          v34 = v20;
          v37 = v19;
          if ( i )
            break;
          v41 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          if ( v19 < si128.top || v19 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v6, &si128, v19);
            v22 = v40;
            v20 = v34;
          }
          if ( v19 >= si128.top && v19 < si128.bottom )
          {
            v24 = *(_DWORD *)a1;
            v25 = *((_DWORD *)a1 + 1);
            v26 = *(_QWORD *)v35;
            v27 = *(_DWORD *)a1 & 7;
            v36 = v25;
            v28 = (char *)(v22 + ((__int64)*(int *)a1 >> 3));
            v29 = *((_BYTE *)&glyphBits + v27);
            v33 = v29;
            if ( v24 < 0
              || v24 >= *((_DWORD *)a3 + 14)
              || (unsigned __int64)v28 < v4
              || (unsigned __int64)v28 > *(_QWORD *)v35 )
            {
              v31 = 0;
              v30 = 0;
            }
            else
            {
              v30 = *v28;
              v31 = 1;
            }
            if ( v25 )
            {
              v32 = v39;
              do
              {
                if ( (unsigned __int64)v28 < v4 || (unsigned __int64)v28 > v26 )
                  break;
                if ( v24 < si128.left || v24 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v24);
                  v29 = v33;
                  v25 = v36;
                  v26 = *(_QWORD *)v35;
                }
                if ( v24 >= si128.left && v24 < si128.right )
                  v30 = v29 & v32 | ~v29 & v30;
                --v25;
                ++v24;
                v29 >>= 1;
                v33 = v29;
                v36 = v25;
                if ( !v29 )
                {
                  if ( v31 )
                    *v28 = v30;
                  ++v28;
                  v29 = *((_BYTE *)&glyphBits + (v24 & 7));
                  v33 = v29;
                  if ( v24 < 0
                    || v24 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v28 < v4
                    || (unsigned __int64)v28 > v26 )
                  {
                    v31 = 0;
                    v30 = 0;
                  }
                  else
                  {
                    v30 = *v28;
                    v31 = 1;
                  }
                }
              }
              while ( v25 );
              v19 = v37;
              v8 = a2;
              v22 = v40;
            }
            if ( v31 && (unsigned __int64)v28 >= v4 )
            {
              v6 = (XCLIPOBJ *)a4;
              v20 = v34;
              if ( (unsigned __int64)v28 <= v26 )
                *v28 = v30;
            }
            else
            {
              v20 = v34;
              v6 = (XCLIPOBJ *)a4;
            }
          }
          ++v19;
          a1 = v41;
          v22 += *((int *)a3 + 22);
          --v20;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v10 = *((_DWORD *)a1 + 2);
        v11 = -(*(_DWORD *)a1 != 0);
        v12 = *((_DWORD *)a3 + 22) * *((_DWORD *)a1 + 1);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v12; v10; --v10 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          v14 = *(_DWORD *)a1;
          v15 = *((_DWORD *)a1 + 1);
          v16 = (char *)(j + ((__int64)*(int *)a1 >> 3));
          v17 = *((_BYTE *)&glyphBits + (*(_DWORD *)a1 & 7));
          if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v9 )
            v18 = 0;
          else
            v18 = *v16;
          if ( v15 )
          {
            do
            {
              if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > *(_QWORD *)v35 )
                break;
              --v15;
              v18 = v17 & v11 | ~v17 & v18;
              LOBYTE(v14) = v14 + 1;
              v17 >>= 1;
              if ( !v17 )
              {
                *v16++ = v18;
                if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > *(_QWORD *)v35 )
                  v18 = 0;
                else
                  v18 = *v16;
                v17 = *((_BYTE *)&glyphBits + (v14 & 7));
              }
            }
            while ( v15 );
            v8 = a2;
            v9 = *(_QWORD *)v35;
          }
          if ( (unsigned __int64)v16 >= v4 && (unsigned __int64)v16 <= v9 )
            *v16 = v18;
          j += *((int *)a3 + 22);
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
        }
      }
      while ( a1 < v8 );
    }
  }
}
