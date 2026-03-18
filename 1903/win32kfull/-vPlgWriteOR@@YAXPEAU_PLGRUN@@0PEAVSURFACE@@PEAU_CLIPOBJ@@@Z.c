/*
 * XREFs of ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CFB60
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  XCLIPOBJ *v6; // rdi
  struct SURFACE *v7; // r15
  struct _PLGRUN *v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  int v12; // r14d
  __int64 j; // r9
  struct _PLGRUN *v14; // rbp
  int v15; // edi
  int v16; // r11d
  char *v17; // rdx
  unsigned __int8 v18; // r10
  char v19; // r8
  int v20; // ebx
  int v21; // eax
  LONG v22; // esi
  int v23; // edx
  __int64 v24; // rcx
  bool i; // zf
  int v26; // edi
  int v27; // r8d
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  char *v30; // rbx
  unsigned __int8 v31; // dl
  char v32; // bp
  char v33; // r14
  int v34; // esi
  int v35; // r9d
  unsigned __int8 v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+34h] [rbp-74h]
  unsigned __int64 v38; // [rsp+38h] [rbp-70h]
  int v39; // [rsp+40h] [rbp-68h]
  LONG v40; // [rsp+44h] [rbp-64h]
  struct _RECTL si128; // [rsp+48h] [rbp-60h] BYREF
  int v42; // [rsp+58h] [rbp-50h]
  int v43; // [rsp+5Ch] [rbp-4Ch]
  __int64 v44; // [rsp+60h] [rbp-48h]
  struct _PLGRUN *v45; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = (XCLIPOBJ *)a4;
    v7 = a3;
    v8 = a2;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v38 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v8 )
      {
        v21 = *(_DWORD *)a1;
        v22 = *((_DWORD *)a1 + 1);
        v23 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v42 = v21;
        v24 = *((_QWORD *)v7 + 10) + v22 * *((_DWORD *)v7 + 22);
        for ( i = v23 == 0; ; i = v23 == 0 )
        {
          v44 = v24;
          v37 = v23;
          v40 = v22;
          if ( i )
            break;
          v45 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          if ( v22 < si128.top || v22 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v6, &si128, v22);
            v24 = v44;
            v23 = v37;
          }
          if ( v22 >= si128.top && v22 < si128.bottom )
          {
            v26 = *(_DWORD *)a1;
            v27 = *((_DWORD *)a1 + 1);
            v28 = v38;
            v29 = *(_DWORD *)a1 & 7;
            v39 = v27;
            v30 = (char *)(v24 + ((__int64)*(int *)a1 >> 3));
            v31 = *((_BYTE *)&dword_1C02F1E08 + v29);
            v36 = v31;
            if ( v26 < 0 || v26 >= *((_DWORD *)v7 + 14) || (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v38 )
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
              v34 = v42;
              do
              {
                v43 = v27;
                v35 = v27;
                if ( (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v28 )
                  break;
                if ( v26 < si128.left || v26 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v26);
                  v31 = v36;
                  v27 = v39;
                  v35 = v43;
                  v28 = v38;
                }
                if ( v26 >= si128.left && v26 < si128.right )
                  v32 |= v34 != 0 ? v31 : 0;
                --v27;
                ++v26;
                v31 >>= 1;
                v36 = v31;
                v39 = v27;
                if ( !v31 )
                {
                  if ( v33 )
                    *v30 = v32;
                  ++v30;
                  v31 = *((_BYTE *)&dword_1C02F1E08 + (v26 & 7));
                  v36 = v31;
                  if ( v26 < 0
                    || v26 >= *((_DWORD *)v7 + 14)
                    || (unsigned __int64)v30 < v4
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
              while ( v35 > 0 );
              v22 = v40;
              v8 = a2;
              v24 = v44;
            }
            if ( v33 && (unsigned __int64)v30 >= v4 )
            {
              v6 = (XCLIPOBJ *)a4;
              v23 = v37;
              if ( (unsigned __int64)v30 <= v28 )
                *v30 = v32;
            }
            else
            {
              v23 = v37;
              v6 = (XCLIPOBJ *)a4;
            }
          }
          ++v22;
          a1 = v45;
          v24 += *((int *)v7 + 22);
          --v23;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v10 = *((_DWORD *)v7 + 22) * *((_DWORD *)a1 + 1);
        v11 = *((_DWORD *)a1 + 2);
        v12 = *(_DWORD *)a1;
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( j = *((_QWORD *)v7 + 10) + v10; v11; --v11 )
        {
          v14 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          v15 = *(_DWORD *)a1;
          v16 = *((_DWORD *)a1 + 1);
          v17 = (char *)(j + ((__int64)*(int *)a1 >> 3));
          v18 = *((_BYTE *)&dword_1C02F1E08 + (*(_DWORD *)a1 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 >= 0 )
          {
            do
            {
              v20 = v16;
              if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v38 )
                break;
              --v16;
              LOBYTE(v15) = v15 + 1;
              v19 |= v12 != 0 ? v18 : 0;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v38 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1C02F1E08 + (v15 & 7));
              }
            }
            while ( v20 > 0 );
            v7 = a3;
            v8 = a2;
            v9 = v38;
          }
          if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
            *v17 = v19;
          j += *((int *)v7 + 22);
          a1 = v14;
        }
      }
      while ( a1 < v8 );
    }
  }
}
