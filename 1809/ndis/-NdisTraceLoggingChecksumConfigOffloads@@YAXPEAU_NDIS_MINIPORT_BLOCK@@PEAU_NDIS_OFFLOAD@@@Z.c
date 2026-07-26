/*
 * XREFs of ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C001D590
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C001D0D8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0013A1C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingChecksumConfigOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  const GUID *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ecx
  char v6; // al
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v9; // ecx
  unsigned int v10; // edx
  char v11; // al
  char v12; // al
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  char v17; // [rsp+34h] [rbp-CCh] BYREF
  char v18; // [rsp+35h] [rbp-CBh] BYREF
  char v19; // [rsp+36h] [rbp-CAh] BYREF
  char v20; // [rsp+37h] [rbp-C9h] BYREF
  char v21; // [rsp+38h] [rbp-C8h] BYREF
  char v22; // [rsp+39h] [rbp-C7h] BYREF
  char v23; // [rsp+3Ah] [rbp-C6h] BYREF
  char v24; // [rsp+3Bh] [rbp-C5h] BYREF
  char v25; // [rsp+3Ch] [rbp-C4h] BYREF
  char v26; // [rsp+3Dh] [rbp-C3h] BYREF
  char v27; // [rsp+3Eh] [rbp-C2h] BYREF
  char v28; // [rsp+3Fh] [rbp-C1h] BYREF
  char v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  int *v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  char *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  char *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  char *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  char *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  char *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  char *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  char *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  int *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  char *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  char *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  char *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  char *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  char *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  char *v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  char *v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  char *v80; // [rsp+1E0h] [rbp+E0h]
  __int64 v81; // [rsp+1E8h] [rbp+E8h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v5 = *(_DWORD *)(v3 + 8);
      v36 = v4 + 4040;
      v31 = *(_DWORD *)(v3 + 4);
      v38 = &v31;
      v6 = *(_BYTE *)(v3 + 8) & 3;
      v37 = 16LL;
      v13 = v6;
      v40 = &v13;
      v39 = 4LL;
      v14 = (v5 >> 2) & 3;
      v42 = &v14;
      v41 = 1LL;
      v15 = (v5 >> 4) & 3;
      v44 = &v15;
      v16 = (v5 >> 6) & 3;
      v17 = BYTE1(v5) & 3;
      v7 = *(_DWORD *)(v3 + 16);
      v46 = &v16;
      v48 = &v17;
      v32 = *(_DWORD *)(v3 + 12);
      v50 = &v32;
      v8 = *(_BYTE *)(v3 + 16) & 3;
      v43 = 1LL;
      v18 = v8;
      v52 = &v18;
      v45 = 1LL;
      v19 = (v7 >> 2) & 3;
      v54 = &v19;
      v47 = 1LL;
      v20 = (v7 >> 4) & 3;
      v56 = &v20;
      v21 = (v7 >> 6) & 3;
      v49 = 1LL;
      v58 = &v21;
      v60 = &v22;
      v51 = 4LL;
      v53 = 1LL;
      v55 = 1LL;
      v57 = 1LL;
      v59 = 1LL;
      v22 = BYTE1(v7) & 3;
      v9 = *(_DWORD *)(v3 + 24);
      v10 = *(_DWORD *)(v3 + 32);
      v33 = *(_DWORD *)(v3 + 20);
      v62 = &v33;
      v11 = *(_BYTE *)(v3 + 24) & 3;
      v61 = 1LL;
      v23 = v11;
      v64 = &v23;
      v63 = 4LL;
      v24 = (v9 >> 2) & 3;
      v66 = &v24;
      v25 = (v9 >> 4) & 3;
      v65 = 1LL;
      v68 = &v25;
      v70 = &v26;
      v34 = *(_DWORD *)(v3 + 28);
      v72 = &v34;
      v12 = *(_BYTE *)(v3 + 32) & 3;
      v67 = 1LL;
      v27 = v12;
      v74 = &v27;
      v69 = 1LL;
      v28 = (v10 >> 2) & 3;
      v76 = &v28;
      v29 = (v10 >> 4) & 3;
      v26 = (v9 >> 6) & 3;
      v78 = &v29;
      v80 = &v30;
      v71 = 1LL;
      v73 = 4LL;
      v75 = 1LL;
      v77 = 1LL;
      v79 = 1LL;
      v30 = (v10 >> 6) & 3;
      v81 = 1LL;
      TlgWrite(&hProvider, &unk_1C008C69A, v2, (LPCGUID)v3, 0x19u, &pData);
    }
  }
}
