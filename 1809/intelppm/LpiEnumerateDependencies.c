/*
 * XREFs of LpiEnumerateDependencies @ 0x1C00356AC
 * Callers:
 *     LpiEnumerateDependencies @ 0x1C00356AC (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0035A9C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0008338 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B9CC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C000BC84 (WPP_RECORDER_SF_Sd.c)
 *     LpiEnumerateDependencies @ 0x1C00356AC (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiEnumerateDependencies(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        _DWORD *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbx
  _DWORD *v12; // r14
  int v14; // ecx
  int v15; // r9d
  unsigned int v16; // esi
  __int64 v17; // r13
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 DevExtFromIndex; // rax
  int v22; // r9d
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r12
  unsigned int v32; // eax
  const wchar_t *v33; // rax
  unsigned __int16 v34; // r9
  const wchar_t *v35; // rax
  unsigned __int16 v36; // r9
  __int64 result; // rax
  __int64 v38; // [rsp+38h] [rbp-61h]
  unsigned int v39; // [rsp+68h] [rbp-31h] BYREF
  int v40; // [rsp+6Ch] [rbp-2Dh]
  int v41; // [rsp+70h] [rbp-29h]
  unsigned int v42; // [rsp+74h] [rbp-25h]
  unsigned int v43; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-1Dh] BYREF
  _DWORD *v45; // [rsp+80h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-11h]
  __int64 v47; // [rsp+90h] [rbp-9h]
  unsigned int v49; // [rsp+F0h] [rbp+57h]
  unsigned int v50; // [rsp+F8h] [rbp+5Fh]

  v50 = a3;
  v49 = a2;
  v11 = (__int64)a9;
  v12 = a1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v40 = 0;
  v17 = 0LL;
  v41 = 0;
  v18 = a3;
  v42 = 0;
  v19 = 5LL * a2;
  v45 = a9;
  v46 = v19;
  if ( v12[10 * a2 + 9] )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)&v12[2 * v19 + 10];
      v40 = v14 + 1;
      DevExtFromIndex = GetDevExtFromIndex(*(_DWORD *)(v20 + 4 * v17));
      v23 = DevExtFromIndex;
      v24 = *(_QWORD *)(DevExtFromIndex + 512);
      if ( !v24 )
      {
        v35 = *(const wchar_t **)(DevExtFromIndex + 64);
        v36 = 13;
        goto LABEL_40;
      }
      if ( a11 )
      {
        KeAddProcessorAffinityEx(a11, *(unsigned int *)(DevExtFromIndex + 56));
        v22 = v41;
        v18 = v50;
        v19 = v46;
      }
      v25 = 0LL;
      a3 = 0LL;
      v39 = 0;
      if ( !*(_DWORD *)(v24 + 16) )
        break;
      do
      {
        if ( *(_DWORD *)(v24 + 80 * a3 + 44) > v18 )
        {
          if ( a10 )
          {
            *(_BYTE *)(a10 + 4 * v25) = a3;
            *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
            *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
            *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
            LODWORD(v25) = v39;
          }
          v25 = (unsigned int)(v25 + 1);
          v39 = v25;
        }
        a3 = (unsigned int)(a3 + 1);
      }
      while ( (unsigned int)a3 < *(_DWORD *)(v24 + 16) );
      if ( !(_DWORD)v25 )
        break;
      if ( v11 )
      {
        v26 = *(_DWORD *)(v23 + 56);
        *(_QWORD *)(v11 + 8) = a10;
        a10 += 4 * v25;
        *(_DWORD *)v11 = v26;
        *(_DWORD *)(v11 + 4) = v25;
        v11 += 16LL;
        v45 = (_DWORD *)v11;
      }
      v14 = v40;
      if ( (unsigned int)v25 > v16 )
        v16 = v25;
      v15 = v25 + v22;
      v17 = (unsigned int)(v17 + 1);
      v42 = v16;
      v41 = v15;
      if ( (unsigned int)v17 >= v12[2 * v19 + 9] )
      {
        a2 = v49;
        goto LABEL_18;
      }
    }
    v33 = *(const wchar_t **)(v23 + 64);
    v34 = 14;
LABEL_38:
    LODWORD(v38) = v18;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      a3,
      v34,
      (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
      v33,
      v38);
    return 3221225473LL;
  }
LABEL_18:
  v27 = 0LL;
  if ( *v12 )
  {
    v28 = a11;
    while ( 1 )
    {
      if ( (_DWORD)v27 != a2 )
      {
        v29 = 5 * v27;
        v47 = 5 * v27;
        if ( v12[10 * v27 + 8] == a2 )
        {
          v30 = *(_QWORD *)&v12[10 * v27 + 6];
          if ( v30 )
          {
            v25 = 0LL;
            v31 = 0LL;
            v39 = 0;
            v40 = v14 + 1;
            if ( !*(_DWORD *)(v30 + 16) )
              goto LABEL_50;
            do
            {
              if ( *(_DWORD *)(v30 + 80 * v31 + 44) > v18 )
              {
                if ( a11 )
                {
                  KeOrAffinityEx(a11, 224LL * (unsigned int)(v31 + *(_DWORD *)(a4 + 4 * v27)) + a5 + 48, a11);
                  LODWORD(v25) = v39;
                  v18 = v50;
                }
                if ( a10 )
                {
                  *(_BYTE *)(a10 + 4LL * (unsigned int)v25) = v31 + *(_BYTE *)(a4 + 4 * v27);
                  *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
                  *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
                  *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
                  LODWORD(v25) = v39;
                }
                v25 = (unsigned int)(v25 + 1);
                v39 = v25;
              }
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < *(_DWORD *)(v30 + 16) );
            v11 = (__int64)v45;
            v16 = v42;
            v12 = a1;
            if ( !(_DWORD)v25 )
            {
              v29 = v47;
LABEL_50:
              v33 = *(const wchar_t **)&v12[2 * v29 + 4];
              v34 = 15;
              goto LABEL_38;
            }
            if ( v45 )
            {
              *v45 = -1;
              v32 = v39;
              *(_QWORD *)(v11 + 8) = a10;
              *(_DWORD *)(v11 + 4) = v32;
              v11 += 16LL;
              LODWORD(v25) = v39;
              v45 = (_DWORD *)v11;
              a10 += 4LL * v39;
            }
            v14 = v40;
            v28 = a11;
            if ( (unsigned int)v25 > v16 )
              v16 = v25;
            v15 = v25 + v41;
          }
          else
          {
            result = LpiEnumerateDependencies(
                       (_DWORD)v12,
                       v27,
                       v18,
                       a4,
                       a5,
                       (__int64)&v44,
                       (__int64)&v39,
                       (__int64)&v43,
                       v11,
                       a10,
                       v28);
            if ( (int)result < 0 )
              return result;
            if ( v43 > v16 )
              v16 = v43;
            v14 = v44 + v40;
            v11 += 16LL * v44;
            v40 += v44;
            v15 = v39 + v41;
            v45 = (_DWORD *)v11;
            a10 += 4LL * v39;
          }
          a2 = v49;
          v41 = v15;
          v42 = v16;
        }
      }
      v27 = (unsigned int)(v27 + 1);
      if ( (unsigned int)v27 >= *v12 )
        break;
      v18 = v50;
    }
    v19 = v46;
  }
  if ( !v14 )
  {
    v35 = *(const wchar_t **)&v12[2 * v19 + 4];
    v36 = 16;
LABEL_40:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v36,
      (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
      v35);
    return 3221225473LL;
  }
  *a6 = v14;
  *a7 = v15;
  *a8 = v16;
  return 0LL;
}
