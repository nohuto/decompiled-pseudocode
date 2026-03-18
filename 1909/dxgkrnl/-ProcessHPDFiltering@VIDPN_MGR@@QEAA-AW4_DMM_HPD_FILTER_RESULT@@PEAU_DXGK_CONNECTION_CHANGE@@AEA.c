/*
 * XREFs of ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C015C104
 * Callers:
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C015C074 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC63C (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, const GUID *pActivityId)
{
  __int64 v5; // r14
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r8
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  int v22; // eax
  bool v23; // al
  DMMVIDEOPRESENTTARGET *v24; // r8
  int v25; // edx
  int v26; // esi
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r10
  int v31; // eax
  __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  struct _LUID *v39; // rdx
  __int64 v40; // r8
  const GUID *v41; // r9
  int v42; // eax
  unsigned int v43; // esi
  __int64 v44; // r8
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v53[10]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]

  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v10 = *(_QWORD **)(v5 + 16);
  memset(v53, 0, 0x48uLL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                 *(DMMVIDEOPRESENTTARGETSET **)(a1 + 80),
                 *(_DWORD *)(a2 + 8) & 0xFFFFFF);
  if ( !TargetById )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11, 0LL);
    *(_QWORD *)(v14 + 24) = *(_DWORD *)(a2 + 8) & 0xFFFFFFLL;
    WdLogEvent5_WdError(v14);
    return 0LL;
  }
  v17 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v17;
  v18 = v17 & 0xFEFFFFFF | (*((_DWORD *)TargetById + 24) != 4 ? 0x1000000 : 0);
  v19 = 0;
  *(_DWORD *)(a3 + 40) = v18;
  if ( *((_DWORD *)TargetById + 21) == 15 )
    v19 = 0x200000;
  v20 = v18 & 0xFFDFFFFF | v19;
  *(_DWORD *)(a3 + 40) = v20;
  v21 = *((_DWORD *)TargetById + 20);
  if ( v21 >= 0 && (v21 <= 3 || v21 == 14) )
    v22 = 0x400000;
  else
    v22 = 0;
  *(_DWORD *)(a3 + 40) = v22 | v20 & 0xFFBFFFFF;
  v23 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)TargetById + 20));
  v26 = v25 ^ (v25 ^ (v23 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v26;
  v27 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v28 = *((_QWORD *)v24 + 53);
  *(_QWORD *)(a3 + 24) = v28;
  v29 = v27 - v28;
  v30 = *((_QWORD *)v24 + 54);
  *(_QWORD *)(a3 + 32) = v30;
  if ( v27 - v28 < 100000000 || v27 - v30 < 100000000 )
  {
    v31 = *(_DWORD *)(a3 + 40);
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      v31 |= 0x40000u;
    *(_DWORD *)(a3 + 40) = v31 | 0x80000;
  }
  v32 = *(unsigned int *)(v10[319] + 436LL);
  v33 = (unsigned int)(v32 + 100000000);
  if ( v29 < v33 || v27 - v30 < v33 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v26 )
    return 0LL;
  v34 = *(unsigned int *)(a2 + 8);
  v35 = *(_DWORD *)(a2 + 8) & 0xF000000;
  if ( *(_BYTE *)(*((_QWORD *)v24 + 67) + 172LL) )
  {
    if ( (_DWORD)v35 == 0x8000000 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v24, 0);
      LODWORD(v34) = *(_DWORD *)(a2 + 8);
      v43 = 2;
    }
    else
    {
      v43 = 3;
    }
    v53[8] = *(_QWORD *)((char *)v10 + 276);
    v53[0] = 0x480000001ELL;
    HIDWORD(v53[6]) = v34 & 0xFFFFFF;
    v53[7] = v43 == 3;
    memset(&v53[1], 0, 36);
    LODWORD(v53[6]) = 103;
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v10, (struct _LUID *)v53[7], 0LL, &v52);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v53, v52, v44);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v43;
  }
  else
  {
    if ( (_DWORD)v35 != 0x8000000 )
      return 0LL;
    if ( v29 >= v32 && v27 - v30 >= v32 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34);
      v36[3] = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
      v36[4] = v10;
      v36[5] = *(_QWORD *)(a3 + 24);
      v36[6] = *(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 24);
      WdLogEvent5_WdDmmEvent(v36);
      return 0LL;
    }
    v37 = *(_QWORD *)((char *)v10 + 276);
    v53[0] = 0x480000001ELL;
    memset(&v53[1], 0, 36);
    HIDWORD(v53[6]) = v34 & 0xFFFFFF;
    v38 = *(_DWORD *)(a3 + 16);
    LODWORD(v53[7]) = v28 >= v30;
    v39 = (struct _LUID *)(unsigned int)(v38 - v28);
    LODWORD(v53[6]) = 102;
    HIDWORD(v53[7]) = (_DWORD)v39;
    v53[8] = v37;
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v10, v39, 0LL, &v49);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v53, v49, v40);
    if ( dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000080uLL) )
      {
        v42 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
        v56 = 4LL;
        v48 = -1;
        v45 = v42;
        v58 = 8LL;
        v55 = &v45;
        v50 = *(_QWORD *)((char *)v10 + 276);
        v57 = &v50;
        v59 = &v46;
        v61 = &v51;
        v63 = &v47;
        v46 = 0;
        v60 = 4LL;
        v51 = 2LL;
        v62 = 8LL;
        v47 = 1;
        v64 = 4LL;
        v65 = &v48;
        v66 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00748B4, pActivityId, v41, 8u, &pData);
      }
    }
    *(_DWORD *)(a3 + 40) |= 0x10000u;
    return 1LL;
  }
}
