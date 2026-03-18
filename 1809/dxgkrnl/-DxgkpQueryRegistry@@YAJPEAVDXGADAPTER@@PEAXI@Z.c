/*
 * XREFs of ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01D3268
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00207A0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C002EC00 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0034C7C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0134E60 (DpiGetPnpRegistryKeyName.c)
 *     DpiGetDriverStorePath @ 0x1C0262DC0 (DpiGetDriverStorePath.c)
 */

__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  _DWORD *v15; // r14
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  wchar_t *Buffer; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 *v25; // rax
  __int64 v26; // rdx
  unsigned __int16 *v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int PnpRegistryKeyName; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int16 v41; // cx
  unsigned __int16 *v42; // r8
  unsigned int v43; // esi
  __int64 v44; // rdx
  unsigned __int16 *v45; // rbx
  unsigned int v46; // eax
  unsigned __int16 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // r9
  unsigned __int16 *v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  struct _UNICODE_STRING v60; // [rsp+30h] [rbp-D0h] BYREF
  int (*v61)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v63; // [rsp+50h] [rbp-B0h]
  char *v64; // [rsp+58h] [rbp-A8h]
  unsigned int v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  int v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h]
  _BYTE v70[40]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v71[264]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v72[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = (unsigned int)a3;
  LODWORD(v6) = -1073741811;
  if ( (unsigned int)a3 < 0x228 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a1, a3);
    v7[3] = v3;
    v7[4] = -1073741811LL;
    v7[5] = 2258LL;
    WdLogEvent5_WdWarning(v7);
    return (unsigned int)v6;
  }
  v8 = a2[1];
  if ( (unsigned int)v8 >= 4 )
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a1, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = 2266LL;
    WdLogEvent5_WdWarning(v9);
LABEL_57:
    a2[135] = 2;
    return (unsigned int)v6;
  }
  if ( *((int *)a1 + 540) < 0x2000 )
    v10 = 1;
  else
    v10 = *((_DWORD *)a1 + 64);
  v11 = a2[133];
  if ( (unsigned int)v11 >= v10 )
  {
    v12 = WdLogNewEntry5_WdWarning(v11, a1, v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = 2273LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_57;
  }
  v13 = *a2;
  v14 = 352 * v11;
  v15 = a2 + 134;
  a2[134] = v3 - 544;
  v16 = *(_QWORD *)(v14 + *((_QWORD *)a1 + 302) + 8);
  if ( v13 > 1 )
  {
    if ( v13 - 2 > 1 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, a1, v8);
      *(_QWORD *)(v17 + 24) = -1073741811LL;
      *(_QWORD *)(v17 + 32) = 2403LL;
      WdLogEvent5_WdWarning(v17);
      goto LABEL_57;
    }
    if ( a2[132] || (v8 & 1) != 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v14, a1, v8);
      *(_QWORD *)(v24 + 24) = -1073741811LL;
      *(_QWORD *)(v24 + 32) = 2376LL;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_57;
    }
    if ( v13 == 2 )
    {
      LODWORD(v6) = DpiGetDriverStorePath(v16, a2 + 136, a2 + 134);
    }
    else
    {
      LODWORD(v6) = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 64) + 40LL) + 32LL), &v60);
      if ( (int)v6 < 0 )
      {
LABEL_20:
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v23 + 24) = (int)v6;
        *(_QWORD *)(v23 + 32) = 2397LL;
        goto LABEL_54;
      }
      v21 = RtlStringCbCopyUnicodeString((char *)a2 + 544, (unsigned int)*v15, &v60);
      Buffer = v60.Buffer;
      LODWORD(v6) = v21;
      *v15 = v60.Length;
      ExFreePoolWithTag(Buffer, 0);
    }
    if ( (int)v6 >= 0 )
      goto LABEL_55;
    goto LABEL_20;
  }
  v25 = (__int128 *)(a2 + 2);
  v26 = 4LL;
  v27 = v71;
  do
  {
    v27 += 64;
    v28 = *v25;
    v29 = v25[1];
    v25 += 8;
    *((_OWORD *)v27 - 8) = v28;
    v30 = *(v25 - 6);
    *((_OWORD *)v27 - 7) = v29;
    v31 = *(v25 - 5);
    *((_OWORD *)v27 - 6) = v30;
    v32 = *(v25 - 4);
    *((_OWORD *)v27 - 5) = v31;
    v33 = *(v25 - 3);
    *((_OWORD *)v27 - 4) = v32;
    v34 = *(v25 - 2);
    *((_OWORD *)v27 - 3) = v33;
    v35 = *(v25 - 1);
    *((_OWORD *)v27 - 2) = v34;
    *((_OWORD *)v27 - 1) = v35;
    --v26;
  }
  while ( v26 );
  *(_QWORD *)v27 = *(_QWORD *)v25;
  v71[259] = 0;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v16, (unsigned int)(v13 != 1) + 2, (__int64 *)&v60);
  v6 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName >= 0 )
  {
    v40 = *(_QWORD *)&v60.Length;
    v41 = v71[0];
    v42 = v71;
    v43 = 0;
    LODWORD(v44) = 0;
    v45 = *(unsigned __int16 **)(*(_QWORD *)&v60.Length + 8LL);
    if ( v71[0] )
    {
      do
      {
        v46 = v44;
        if ( v41 != 92 )
          v46 = v43;
        v44 = (unsigned int)(v44 + 1);
        v43 = v46;
        v41 = v71[v44];
      }
      while ( v41 );
      if ( v46 )
      {
        if ( 2 * (unsigned __int64)v46 >= 0x208 )
          _report_rangecheckfailure();
        v71[v46] = 0;
        LODWORD(v6) = RtlStringCbCopyW(v72, 0x208uLL, *(size_t **)(v40 + 8));
        if ( (int)v6 < 0 )
          goto LABEL_58;
        v48 = 260LL;
        v47 = v72;
        v50 = 260LL;
        do
        {
          if ( !*v47 )
            break;
          ++v47;
          --v50;
        }
        while ( v50 );
        LODWORD(v6) = -1073741811;
        if ( v50 )
        {
          LODWORD(v6) = 0;
          v49 = 260 - v50;
        }
        else
        {
          v49 = 0LL;
        }
        if ( v50 )
        {
          v47 = &v72[v49];
          v48 = 260 - v49;
          if ( 260 != v49 )
          {
            v51 = 2147483646LL;
            v49 = (char *)L"\\" - (char *)v47;
            do
            {
              if ( !v51 )
                break;
              v52 = *(unsigned __int16 *)((char *)v47 + v49);
              if ( !v52 )
                break;
              *v47 = v52;
              --v51;
              ++v47;
              --v48;
            }
            while ( v48 );
          }
          v53 = v47 - 1;
          LODWORD(v6) = -2147483643;
          if ( v48 )
          {
            v53 = v47;
            LODWORD(v6) = 0;
          }
          *v53 = 0;
        }
        if ( (int)v6 < 0 || (LODWORD(v6) = RtlStringCbCatW(v72, (__int64)v47, (size_t *)v71), (int)v6 < 0) )
        {
LABEL_58:
          v23 = WdLogNewEntry5_WdWarning(v48, v47, v49);
          *(_QWORD *)(v23 + 24) = (int)v6;
          *(_QWORD *)(v23 + 32) = 2343LL;
          goto LABEL_54;
        }
        v42 = &v71[v43 + 1];
        v45 = v72;
      }
    }
    v63 = v42;
    v61 = DxgkpRegistryQueryRoutine;
    v65 = a2[132] << 24;
    v62 = 276;
    v64 = (char *)(a2 + 136);
    v66 = 0LL;
    v67 = 0;
    v68 = 0LL;
    v69 = 0;
    memset(v70, 0, sizeof(v70));
    v54 = RtlQueryRegistryValuesEx(0LL, v45, &v61, a2, 0LL);
    v6 = v54;
    if ( v54 >= 0 )
      goto LABEL_55;
    v23 = WdLogNewEntry5_WdWarning(v56, v55, v57);
    *(_QWORD *)(v23 + 32) = 2364LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v38, v37, v39);
  }
  *(_QWORD *)(v23 + 24) = v6;
LABEL_54:
  WdLogEvent5_WdWarning(v23);
LABEL_55:
  if ( (_DWORD)v6 != -2147483643 )
  {
    if ( !(_DWORD)v6 )
    {
      a2[135] = 0;
      return (unsigned int)v6;
    }
    goto LABEL_57;
  }
  LODWORD(v6) = 0;
  v58 = *a2 - 2;
  a2[135] = 1;
  if ( v58 <= 1 || (a2[1] & 1) != 0 )
    *v15 += 16;
  return (unsigned int)v6;
}
