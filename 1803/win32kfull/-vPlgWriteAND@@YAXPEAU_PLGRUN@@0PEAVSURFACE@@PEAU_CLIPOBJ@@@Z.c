/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r14
  XCLIPOBJ *v5; // rdi
  __int64 v6; // rax
  struct _PLGRUN *v8; // r12
  struct _PLGRUN *v9; // rbx
  unsigned __int64 v10; // r13
  int v11; // esi
  int v12; // r10d
  int v13; // eax
  char v14; // r10
  __int64 j; // r8
  int v16; // edi
  int v17; // r11d
  char *v18; // rcx
  unsigned __int8 v19; // r9
  char v20; // dl
  LONG v21; // ebp
  int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  bool i; // zf
  int v26; // edi
  int v27; // edx
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rbx
  unsigned __int8 v31; // r13
  char v32; // si
  char v33; // r14
  unsigned __int64 v34; // rcx
  char v35; // bp
  int v36; // [rsp+30h] [rbp-88h]
  int v37; // [rsp+34h] [rbp-84h]
  LONG v38; // [rsp+38h] [rbp-80h]
  unsigned __int64 v39; // [rsp+40h] [rbp-78h]
  struct _RECTL si128; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]
  int v42; // [rsp+60h] [rbp-58h]
  __int64 v43; // [rsp+68h] [rbp-50h]
  struct _PLGRUN *v44; // [rsp+70h] [rbp-48h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = (XCLIPOBJ *)a4;
    v6 = *((unsigned int *)a3 + 16);
    v8 = a2;
    v41 = v4;
    v9 = a1;
    v10 = v6 + v4 - 1;
    v39 = v10;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v9 < v8 )
      {
        v21 = *((_DWORD *)v9 + 1);
        v22 = *((_DWORD *)v9 + 2);
        v23 = -(*(_DWORD *)v9 != 0);
        v9 = (struct _PLGRUN *)((char *)v9 + 12);
        v42 = ~v23;
        v24 = *((_QWORD *)a3 + 10) + v21 * *((_DWORD *)a3 + 22);
        for ( i = v22 == 0; ; i = v22 == 0 )
        {
          v43 = v24;
          v36 = v22;
          v38 = v21;
          if ( i )
            break;
          v44 = (struct _PLGRUN *)((char *)v9 + 8);
          if ( (struct _PLGRUN *)((char *)v9 + 8) > v8 )
            break;
          if ( v21 < si128.top || v21 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v5, &si128, v21);
            v24 = v43;
            v22 = v36;
          }
          if ( v21 >= si128.top && v21 < si128.bottom )
          {
            v26 = *(_DWORD *)v9;
            v27 = *((_DWORD *)v9 + 1);
            v28 = v39;
            v29 = *(_DWORD *)v9 & 7;
            v37 = v27;
            v30 = (char *)(v24 + ((__int64)*(int *)v9 >> 3));
            v31 = *((_BYTE *)&glyphBits + v29);
            if ( v26 < 0 || v26 >= *((_DWORD *)a3 + 14) || (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v39 )
            {
              v33 = 0;
              v32 = 0;
            }
            else
            {
              v32 = *v30;
              v33 = 1;
            }
            if ( v27 >= 0 )
            {
              v34 = v41;
              v35 = v42;
              do
              {
                if ( (unsigned __int64)v30 < v34 || (unsigned __int64)v30 > v28 )
                  break;
                if ( v26 < si128.left || v26 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v26);
                  v27 = v37;
                  v28 = v39;
                  v34 = v41;
                }
                if ( v26 >= si128.left && v26 < si128.right )
                  v32 &= ~(v31 & v35);
                --v27;
                ++v26;
                v31 >>= 1;
                v37 = v27;
                if ( !v31 )
                {
                  if ( v33 )
                    *v30 = v32;
                  ++v30;
                  v31 = *((_BYTE *)&glyphBits + (v26 & 7));
                  if ( v26 < 0
                    || v26 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v30 < v34
                    || (unsigned __int64)v30 > v28 )
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
              while ( v27 >= 0 );
              v21 = v38;
              v8 = a2;
              v24 = v43;
            }
            i = v33 == 0;
            v4 = v41;
            if ( i || (unsigned __int64)v30 < v41 )
            {
              v22 = v36;
              v5 = (XCLIPOBJ *)a4;
            }
            else
            {
              v5 = (XCLIPOBJ *)a4;
              v22 = v36;
              if ( (unsigned __int64)v30 <= v28 )
                *v30 = v32;
            }
          }
          ++v21;
          v9 = v44;
          v24 += *((int *)a3 + 22);
          --v22;
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
        v14 = ~(_BYTE)v12;
        for ( j = *((_QWORD *)a3 + 10) + v13; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)v9 + 8) > v8 )
            break;
          v16 = *(_DWORD *)v9;
          v17 = *((_DWORD *)v9 + 1);
          v18 = (char *)(j + ((__int64)*(int *)v9 >> 3));
          v19 = *((_BYTE *)&glyphBits + (*(_DWORD *)v9 & 7));
          if ( (unsigned __int64)v18 < v4 || (unsigned __int64)v18 > v10 )
            v20 = 0;
          else
            v20 = *v18;
          if ( v17 < 0 )
          {
LABEL_20:
            if ( (unsigned __int64)v18 >= v4 && (unsigned __int64)v18 <= v10 )
              *v18 = v20;
          }
          else
          {
            while ( (unsigned __int64)v18 >= v4 )
            {
              if ( (unsigned __int64)v18 <= v10 )
              {
                --v17;
                LOBYTE(v16) = v16 + 1;
                v20 &= ~(v19 & v14);
                v19 >>= 1;
                if ( !v19 )
                {
                  *v18++ = v20;
                  if ( (unsigned __int64)v18 < v4 || (unsigned __int64)v18 > v10 )
                    v20 = 0;
                  else
                    v20 = *v18;
                  v19 = *((_BYTE *)&glyphBits + (v16 & 7));
                }
                if ( v17 >= 0 )
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
