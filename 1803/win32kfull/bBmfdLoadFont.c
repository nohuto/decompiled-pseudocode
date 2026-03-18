/*
 * XREFs of bBmfdLoadFont @ 0x1C0225D40
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0224970 (BmfdLoadFontFileTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     StringCchLengthA @ 0x1C0225B84 (StringCchLengthA.c)
 *     bBMFDIFIMETRICS @ 0x1C0225BDC (bBMFDIFIMETRICS.c)
 *     bConvertFontRes @ 0x1C0226134 (bConvertFontRes.c)
 *     bDescStr @ 0x1C0226234 (bDescStr.c)
 *     bVerifyFNTQuick @ 0x1C02263B8 (bVerifyFNTQuick.c)
 *     bGetFntResource @ 0x1C02285EC (bGetFntResource.c)
 *     bInitWinResData @ 0x1C0228700 (bInitWinResData.c)
 */

__int64 __fastcall bBmfdLoadFont(__int64 a1, __int64 a2, unsigned int a3, int a4, PVOID *a5)
{
  unsigned int v5; // r15d
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v12; // edi
  ULONG v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  char *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // r14
  unsigned int v22; // r15d
  char *v23; // r14
  unsigned int v24; // r13d
  int v25; // eax
  __int128 v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // xmm1_8
  __int64 v29; // rax
  _DWORD *v30; // r9
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // xmm1_8
  __int64 v35; // rcx
  _DWORD *v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh]
  unsigned int v41; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v42; // [rsp+3Ch] [rbp-C4h]
  unsigned int v43; // [rsp+40h] [rbp-C0h]
  __int128 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned int v47; // [rsp+68h] [rbp-98h]
  size_t pcchLength; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  _BYTE v51[24]; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  char psz[256]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0;
  v50 = a1;
  v7 = a3;
  v49 = a4;
  v8 = a2;
  *a5 = 0LL;
  v43 = a3;
  v46 = a2;
  v44 = 0uLL;
  v45 = 0LL;
  v39 = 0;
  if ( a4 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a2, a3, v51) )
      return 0LL;
    v10 = v52;
    v8 = v46;
  }
  else
  {
    v10 = 1;
    *(_QWORD *)&v44 = a2;
    v52 = 1;
    DWORD2(v44) = 0;
    HIDWORD(v44) = a3;
    v45 = 0LL;
  }
  v11 = 0;
  v40 = 0;
  v12 = 176 * v10 + 40;
  if ( a4 == 2 && (unsigned int)bDescStr(v8, v7, psz) )
  {
    StringCchLengthA(psz, 0x100uLL, &pcchLength);
    v40 = 176 * v10 + 40;
    v12 += 2 * pcchLength + 2;
    v11 = 2 * pcchLength + 2;
  }
  v13 = (v12 + 7) & 0xFFFFFFF8;
  v42 = v13;
  if ( v10 )
  {
    do
    {
      v14 = v39;
      v47 = v39;
      LODWORD(pcchLength) = v13;
      if ( a4 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v51, v5, &v44) )
          return 0LL;
        v10 = v52;
        v14 = v39;
      }
      v15 = -1;
      if ( (int)v14 + HIDWORD(v44) >= (unsigned int)v14 )
        v15 = v14 + HIDWORD(v44);
      v39 = v15;
      if ( (int)v14 + HIDWORD(v44) < v47 )
        return 0LL;
      if ( v15 > (unsigned int)v7 )
        return 0LL;
      if ( !(unsigned int)bVerifyFNTQuick(&v44, v14, 0xFFFFFFFFLL) )
        return 0LL;
      if ( !(unsigned int)bBMFDIFIMETRICS(v46, v7, 0LL, &v44, &v41) )
        return 0LL;
      v16 = 2LL * v41;
      if ( v16 > 0xFFFFFFFF )
        return 0LL;
      v17 = v16 + v13;
      v41 *= 2;
      v18 = -1;
      if ( v17 >= v13 )
        v18 = v17;
      v13 = v18;
      if ( v17 < (unsigned int)pcchLength || v18 - v42 > 2 * (int)v7 )
        return 0LL;
    }
    while ( ++v5 < v10 );
  }
  v19 = (char *)EngAllocMem(1u, v13, 0x64666D42u);
  *a5 = v19;
  v20 = v19;
  if ( !v19 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v21 = v42;
  v22 = 0;
  *((_DWORD *)v19 + 2) = a4;
  v23 = &v19[v21];
  *(_QWORD *)v19 = 255LL;
  v24 = 0;
  *((_QWORD *)v19 + 2) = v50;
  v25 = v40;
  v20[9] = v40;
  v20[7] = v10;
  v20[8] = v11;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v49 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v51, v24, &v44) )
          break;
        v10 = v52;
      }
      v26 = v44;
      v27 = v43;
      v28 = v45;
      v29 = 22LL * v22;
      v30 = &v20[v29 + 10];
      v50 = v29 * 4;
      v20[v29 + 18] = 0;
      v31 = v46;
      *(_OWORD *)v30 = v26;
      *(_QWORD *)&v20[v29 + 30] = v23;
      *((_QWORD *)v30 + 2) = v28;
      if ( !(unsigned int)bConvertFontRes(v31, v27, &v44) )
        break;
      ++v22;
      v23 += *(unsigned int *)v23;
      if ( *(_WORD *)((char *)v20 + v50 + 88) )
      {
        v32 = v44;
        v33 = v43;
        v34 = v45;
        v35 = 22LL * v22;
        v36 = &v20[v35 + 10];
        v20[v35 + 18] = 1;
        *(_QWORD *)&v20[v35 + 30] = v23;
        v37 = v46;
        *(_OWORD *)v36 = v32;
        *((_QWORD *)v36 + 2) = v34;
        if ( !(unsigned int)bConvertFontRes(v37, v33, &v44) )
          break;
        ++v22;
        v23 += *(unsigned int *)v23;
      }
      if ( ++v24 >= v10 )
      {
        v25 = v40;
        goto LABEL_37;
      }
    }
    EngFreeMem(*a5);
    *a5 = 0LL;
    return 0LL;
  }
LABEL_37:
  v20[7] = v22;
  if ( v11 )
  {
    v38 = v25;
    RtlMultiByteToUnicodeN((PWCH)((char *)v20 + v25), 2 * (v11 >> 1), 0LL, psz, v11 >> 1);
    *(_WORD *)((char *)v20 + 2 * ((unsigned __int64)v11 >> 1) + v38 - 2) = 0;
  }
  v20[6] = 0;
  return 1LL;
}
