/*
 * XREFs of ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AAB60
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r14
  XCLIPOBJ *v5; // rdi
  __int64 v6; // rax
  struct _PLGRUN *v8; // r12
  struct _PLGRUN *v9; // rbx
  unsigned __int64 v10; // r13
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  __int64 j; // r8
  int v15; // r11d
  int v16; // r10d
  char *v17; // rcx
  unsigned __int8 v18; // r9
  char v19; // dl
  LONG v20; // ebp
  int v21; // edx
  int v22; // eax
  __int64 v23; // rcx
  bool i; // zf
  int v25; // edi
  int v26; // edx
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  char *v29; // rbx
  unsigned __int8 v30; // r13
  char v31; // si
  char v32; // r14
  unsigned __int64 v33; // rcx
  char v34; // bp
  int v35; // [rsp+30h] [rbp-88h]
  int v36; // [rsp+34h] [rbp-84h]
  LONG v37; // [rsp+38h] [rbp-80h]
  unsigned __int64 v38; // [rsp+40h] [rbp-78h]
  struct _RECTL si128; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-60h]
  int v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  struct _PLGRUN *v43; // [rsp+70h] [rbp-48h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = (XCLIPOBJ *)a4;
    v6 = *((unsigned int *)a3 + 16);
    v8 = a2;
    v40 = v4;
    v9 = a1;
    v10 = v6 + v4 - 1;
    v38 = v10;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v9 < v8 )
      {
        v20 = *((_DWORD *)v9 + 1);
        v21 = *((_DWORD *)v9 + 2);
        v22 = -(*(_DWORD *)v9 != 0);
        v9 = (struct _PLGRUN *)((char *)v9 + 12);
        v41 = v22;
        v23 = *((_QWORD *)a3 + 10) + v20 * *((_DWORD *)a3 + 22);
        for ( i = v21 == 0; ; i = v21 == 0 )
        {
          v42 = v23;
          v35 = v21;
          v37 = v20;
          if ( i )
            break;
          v43 = (struct _PLGRUN *)((char *)v9 + 8);
          if ( (struct _PLGRUN *)((char *)v9 + 8) > v8 )
            break;
          if ( v20 < si128.top || v20 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v5, &si128, v20);
            v23 = v42;
            v21 = v35;
          }
          if ( v20 >= si128.top && v20 < si128.bottom )
          {
            v25 = *(_DWORD *)v9;
            v26 = *((_DWORD *)v9 + 1);
            v27 = v38;
            v28 = *(_DWORD *)v9 & 7;
            v36 = v26;
            v29 = (char *)(v23 + ((__int64)*(int *)v9 >> 3));
            v30 = *((_BYTE *)&glyphBits + v28);
            if ( v25 < 0 || v25 >= *((_DWORD *)a3 + 14) || (unsigned __int64)v29 < v4 || (unsigned __int64)v29 > v38 )
            {
              v32 = 0;
              v31 = 0;
            }
            else
            {
              v31 = *v29;
              v32 = 1;
            }
            if ( v26 >= 0 )
            {
              v33 = v40;
              v34 = v41;
              do
              {
                if ( (unsigned __int64)v29 < v33 || (unsigned __int64)v29 > v27 )
                  break;
                if ( v25 < si128.left || v25 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v25);
                  v26 = v36;
                  v27 = v38;
                  v33 = v40;
                }
                if ( v25 >= si128.left && v25 < si128.right )
                  v31 |= v30 & v34;
                --v26;
                ++v25;
                v30 >>= 1;
                v36 = v26;
                if ( !v30 )
                {
                  if ( v32 )
                    *v29 = v31;
                  ++v29;
                  v30 = *((_BYTE *)&glyphBits + (v25 & 7));
                  if ( v25 < 0
                    || v25 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v29 < v33
                    || (unsigned __int64)v29 > v27 )
                  {
                    v32 = 0;
                    v31 = 0;
                  }
                  else
                  {
                    v31 = *v29;
                    v32 = 1;
                  }
                }
              }
              while ( v26 >= 0 );
              v20 = v37;
              v8 = a2;
              v23 = v42;
            }
            i = v32 == 0;
            v4 = v40;
            if ( i || (unsigned __int64)v29 < v40 )
            {
              v21 = v35;
              v5 = (XCLIPOBJ *)a4;
            }
            else
            {
              v5 = (XCLIPOBJ *)a4;
              v21 = v35;
              if ( (unsigned __int64)v29 <= v27 )
                *v29 = v31;
            }
          }
          ++v20;
          v9 = v43;
          v23 += *((int *)a3 + 22);
          --v21;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v11 = *((_DWORD *)v9 + 2);
        v12 = -(*(_DWORD *)v9 != 0);
        v13 = *((_DWORD *)a3 + 22) * *((_DWORD *)v9 + 1);
        v9 = (struct _PLGRUN *)((char *)v9 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v13; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)v9 + 8) > v8 )
            break;
          v15 = *(_DWORD *)v9;
          v16 = *((_DWORD *)v9 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v9 >> 3));
          v18 = *((_BYTE *)&glyphBits + (*(_DWORD *)v9 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v10 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 < 0 )
          {
LABEL_20:
            if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v10 )
              *v17 = v19;
          }
          else
          {
            while ( (unsigned __int64)v17 >= v4 )
            {
              if ( (unsigned __int64)v17 <= v10 )
              {
                --v16;
                LOBYTE(v15) = v15 + 1;
                v19 |= v18 & v12;
                v18 >>= 1;
                if ( !v18 )
                {
                  *v17++ = v19;
                  if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v10 )
                    v19 = 0;
                  else
                    v19 = *v17;
                  v18 = *((_BYTE *)&glyphBits + (v15 & 7));
                }
                if ( v16 >= 0 )
                  continue;
              }
              goto LABEL_20;
            }
          }
          j += *((int *)a3 + 22);
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
        }
      }
      while ( v9 < v8 );
    }
  }
}
