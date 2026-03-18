/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C01577EC
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0157764 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        VIDPN_MGR *this,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v10; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r11
  GUID *v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  char TargetLinkTrainingStatus; // al
  int v21; // r9d
  int v22; // r10d
  unsigned int v23; // r9d
  __int64 v24; // r11
  int v25; // ecx
  const GUID *v26; // r9
  bool v27; // [rsp+30h] [rbp-D0h] BYREF
  bool v28; // [rsp+31h] [rbp-CFh] BYREF
  bool v29; // [rsp+32h] [rbp-CEh] BYREF
  bool v30; // [rsp+33h] [rbp-CDh] BYREF
  char v31; // [rsp+34h] [rbp-CCh] BYREF
  char v32; // [rsp+35h] [rbp-CBh] BYREF
  bool v33; // [rsp+36h] [rbp-CAh] BYREF
  char v34; // [rsp+37h] [rbp-C9h] BYREF
  bool v35; // [rsp+38h] [rbp-C8h] BYREF
  bool v36; // [rsp+39h] [rbp-C7h] BYREF
  bool v37; // [rsp+3Ah] [rbp-C6h] BYREF
  char v38; // [rsp+3Bh] [rbp-C5h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int64 *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  bool *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  bool *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  bool *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  bool *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  bool *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  char *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  char *Data4; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  char *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  bool *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  bool *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  struct _DMM_HPD_FILTER_INFO *v74; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]
  char *v76; // [rsp+180h] [rbp+80h]
  __int64 v77; // [rsp+188h] [rbp+88h]
  char *v78; // [rsp+190h] [rbp+90h]
  __int64 v79; // [rsp+198h] [rbp+98h]
  char *v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  bool *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  char *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]

  v5 = *((_QWORD *)this + 1);
  v6 = a4;
  if ( !v5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v18);
    v5 = *((_QWORD *)this + 1);
  }
  v10 = *(_QWORD *)(v5 + 16);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v6);
  v15 = (__int64)TargetById;
  if ( !TargetById )
  {
    v19 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdError(v19);
    return;
  }
  v16 = (GUID *)((char *)TargetById + 568);
  v17 = *((_DWORD *)a2 + 10);
  if ( (v17 & 0xC0000) == 0 )
    goto LABEL_5;
  *(struct _GUID *)a2 = *a3;
  if ( (_BYTE)v17 == 8 )
    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v15, 0LL);
  else
    TargetLinkTrainingStatus = 0;
  *((_BYTE *)a2 + 41) = TargetLinkTrainingStatus;
  v21 = *((_DWORD *)a2 + 10);
  if ( (v21 & 0x10000) != 0 )
    goto LABEL_23;
  if ( (v21 & 0x20000) != 0 )
  {
LABEL_19:
    v22 = *((_DWORD *)a2 + 10);
    if ( dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000080uLL) )
      {
        v25 = *(_DWORD *)v16[2].Data4;
        v39 = *(_DWORD *)(v24 + 24);
        v42 = &v39;
        v40 = *(_QWORD *)(v10 + 276);
        v44 = &v40;
        v43 = 4LL;
        v27 = (v25 & 0x100000) != 0;
        v46 = &v27;
        v45 = 8LL;
        v28 = (v25 & 0x200000) != 0;
        v48 = &v28;
        v47 = 1LL;
        v29 = (v25 & 0x400000) != 0;
        v50 = &v29;
        v49 = 1LL;
        v30 = (v25 & 0x800000) != 0;
        v52 = &v30;
        v51 = 1LL;
        v31 = HIBYTE(v25) & 1;
        v53 = 1LL;
        v54 = &v31;
        v33 = (_BYTE)v23 == 10;
        v32 = v16[2].Data4[1];
        v56 = &v32;
        v58 = &v33;
        v60 = &a5;
        v55 = 1LL;
        v34 = BYTE2(v25) & 1;
        v62 = &v34;
        v64 = (char *)&v16[1];
        Data4 = (char *)v16[1].Data4;
        v68 = (char *)&v16[2];
        v57 = 1LL;
        v35 = (v25 & 0x40000) != 0;
        v59 = 1LL;
        v61 = 1LL;
        v63 = 1LL;
        v65 = 8LL;
        v67 = 8LL;
        v69 = 8LL;
        v70 = &v35;
        v72 = &v36;
        v76 = (char *)a2 + 16;
        v78 = (char *)a2 + 24;
        v80 = (char *)a2 + 32;
        v37 = (v23 & 0x40000) != 0;
        v26 = (const GUID *)(v23 >> 19);
        v82 = &v37;
        LOBYTE(v26) = (unsigned __int8)v26 & 1;
        v71 = 1LL;
        v84 = &v38;
        v36 = (v25 & 0x80000) != 0;
        v73 = 1LL;
        v74 = a2;
        v75 = 16LL;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 1LL;
        v38 = (char)v26;
        v85 = 1LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C007464F, v16, v26, 0x18u, &pData);
        v22 = *((_DWORD *)a2 + 10);
      }
    }
    if ( (v22 & 0x60000) == 0x40000 )
      goto LABEL_23;
LABEL_5:
    memset(v16, 0, 0x30uLL);
    return;
  }
  if ( (*(_DWORD *)v16[2].Data4 & 0x40000) != 0 )
  {
    if ( (__int64)(*((_QWORD *)a2 + 2) - *(_QWORD *)&v16[1].Data1) > 100000000 )
    {
      if ( (v21 & 0x40000) == 0 )
        goto LABEL_5;
LABEL_23:
      *v16 = *(GUID *)a2;
      v16[1] = *((GUID *)a2 + 1);
      v16[2] = *((GUID *)a2 + 2);
      return;
    }
    goto LABEL_19;
  }
  if ( (v21 & 0x40000) != 0 )
    goto LABEL_23;
}
