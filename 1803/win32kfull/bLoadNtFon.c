/*
 * XREFs of bLoadNtFon @ 0x1C0227530
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0224970 (BmfdLoadFontFileTE.c)
 * Callees:
 *     cParseFontResources @ 0x1C00BC6A4 (cParseFontResources.c)
 *     bBMFDIFIMETRICS @ 0x1C0225BDC (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C0226134 (bConvertFontRes.c)
 *     bVerifyFNTQuick @ 0x1C02263B8 (bVerifyFNTQuick.c)
 */

__int64 __fastcall bLoadNtFon(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r13
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // r14
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rsi
  ULONG v17; // eax
  unsigned int **v18; // rax
  unsigned int **v19; // rbx
  unsigned int *v20; // rsi
  int v21; // r8d
  __int64 v22; // r12
  unsigned int **v23; // rdi
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // [rsp+30h] [rbp-50h] BYREF
  __int128 v36; // [rsp+38h] [rbp-48h] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h]
  int v38; // [rsp+50h] [rbp-30h]
  PVOID pv; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-18h] BYREF
  __int64 v42; // [rsp+70h] [rbp-10h] BYREF
  __int64 v43; // [rsp+78h] [rbp-8h]
  int v46; // [rsp+D8h] [rbp+58h]

  v38 = 0;
  pv = 0LL;
  v46 = 0;
  v4 = a1;
  v5 = cParseFontResources(a1, &v42, &v41, &pv);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v8 = 0;
  v43 = v5;
  v9 = 0;
  if ( v5 <= 0 )
  {
LABEL_12:
    *a3 = 0LL;
    if ( 2 * (unsigned __int64)v8 <= 0xFFFFFFFF )
    {
      v13 = 2 * v8;
      v14 = 176LL * v9;
      if ( v14 <= 0xFFFFFFFF )
      {
        v15 = v14 + 40;
        if ( (unsigned int)(v14 + 40) >= 0x28 )
        {
          v16 = v15;
          v17 = v15 + v13;
          if ( (int)v16 + v13 >= (unsigned int)v16 )
          {
            v18 = (unsigned int **)EngAllocMem(1u, v17, 0x64666D42u);
            *a3 = v18;
            v19 = v18;
            if ( !v18 )
            {
              EngSetLastError(8u);
              return 0LL;
            }
            v20 = (unsigned int *)((char *)v18 + v16);
            *v18 = (unsigned int *)255;
            *((_DWORD *)v18 + 2) = 3;
            v21 = 0;
            *((_DWORD *)v18 + 7) = v9;
            v18[2] = (unsigned int *)v4;
            v18[4] = 0LL;
            v35 = 0;
            if ( (int)v6 <= 0 )
            {
LABEL_27:
              v38 = 1;
              *((_DWORD *)v19 + 7) = v9 + v46;
              *((_DWORD *)v19 + 6) = 0;
            }
            else
            {
              v22 = 0LL;
              v23 = v18 + 15;
              while ( 1 )
              {
                v37 = 0LL;
                *(_QWORD *)&v36 = *((_QWORD *)pv + v22);
                v24 = *(unsigned __int8 *)(v36 + 2) | ((*(unsigned __int8 *)(v36 + 3) | (*(unsigned __int16 *)(v36 + 4) << 8)) << 8);
                DWORD2(v36) = v36 - a2;
                v25 = v41;
                HIDWORD(v36) = v24;
                *((_OWORD *)v23 - 5) = v36;
                *(v23 - 8) = 0LL;
                *((_DWORD *)v23 - 12) = 0;
                *v23 = v20;
                if ( !(unsigned int)bConvertFontRes(v42, v25, &v36, (__int64)&v19[11 * v21 + 5]) )
                  break;
                v20 = (unsigned int *)((char *)v20 + **v23);
                v26 = *((unsigned __int8 *)*v23 + 44);
                LOWORD(v26) = v26 - 128;
                if ( (unsigned __int16)v26 <= 8u )
                {
                  v27 = 323;
                  if ( _bittest(&v27, v26) )
                  {
                    v37 = 0LL;
                    *(_QWORD *)&v36 = *((_QWORD *)pv + v22);
                    v28 = *(unsigned __int8 *)(v36 + 2) | ((*(unsigned __int8 *)(v36 + 3) | (*(unsigned __int16 *)(v36 + 4) << 8)) << 8);
                    DWORD2(v36) = v36 - a2;
                    v29 = v41;
                    HIDWORD(v36) = v28;
                    v30 = v36;
                    v31 = 11LL * (unsigned int)v6;
                    v32 = (__int64)&v19[v31 + 5];
                    v19[v31 + 15] = v20;
                    LODWORD(v19[v31 + 9]) = 1;
                    v33 = v42;
                    *(_OWORD *)v32 = v30;
                    *(_QWORD *)(v32 + 16) = 0LL;
                    if ( !(unsigned int)bConvertFontRes(v33, v29, &v36, v32) )
                      break;
                    ++v46;
                    v20 = (unsigned int *)((char *)v20 + **v23);
                    LODWORD(v6) = v6 + 1;
                  }
                }
                ++v22;
                v21 = v35 + 1;
                v23 += 11;
                ++v35;
                if ( v22 >= v43 )
                {
                  v9 = *((_DWORD *)v19 + 7);
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v10 = 0LL;
    while ( 1 )
    {
      v37 = 0LL;
      v40 = v8;
      *(_QWORD *)&v36 = *((_QWORD *)pv + v10);
      HIDWORD(v36) = *(unsigned __int8 *)(v36 + 2) | ((*(unsigned __int8 *)(v36 + 3) | (*(unsigned __int16 *)(v36 + 4) << 8)) << 8);
      if ( !bVerifyFNTQuick((__int64 *)&v36) || !(unsigned int)bBMFDIFIMETRICS(v42, v41, 0LL, &v36, &v35) )
        break;
      ++v9;
      v11 = v8 + v35;
      v12 = -1;
      if ( v8 + v35 >= v8 )
        v12 = v8 + v35;
      v8 = v12;
      if ( v11 < v40 )
        break;
      if ( ++v10 >= v6 )
      {
        v4 = a1;
        goto LABEL_12;
      }
    }
  }
  EngFreeMem(pv);
  v34 = v38;
  if ( !v38 )
  {
    if ( *a3 )
    {
      EngFreeMem(*a3);
      *a3 = 0LL;
    }
  }
  return v34;
}
