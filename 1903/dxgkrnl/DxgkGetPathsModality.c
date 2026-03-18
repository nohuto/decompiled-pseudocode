/*
 * XREFs of DxgkGetPathsModality @ 0x1C00D6780
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D49EC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C013C7F0 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001C98 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??1?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@QEAA@XZ @ 0x1C00451E4 (--1-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@QEAA@XZ.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D0EA0 (DxgkGetAdapterDefaultScaling.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D7C54 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9258 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C014AB40 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02C0968 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, GUID *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rsi
  int v9; // eax
  unsigned int j; // edx
  __int64 v11; // r8
  int AllPaths; // ebx
  __int64 v13; // rax
  CCD_TOPOLOGY *v14; // rcx
  unsigned int i; // edi
  __int64 v16; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  char v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int16 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  _DWORD *v33; // [rsp+90h] [rbp-70h]
  bool v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int v36; // [rsp+A0h] [rbp-60h]
  BOOL v37; // [rsp+A4h] [rbp-5Ch]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _DWORD *v47; // [rsp+F0h] [rbp-10h]
  bool v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+104h] [rbp+4h]
  int v52; // [rsp+110h] [rbp+10h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  __int16 v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  __int64 v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  _DWORD *v60; // [rsp+150h] [rbp+50h]
  bool v61; // [rsp+158h] [rbp+58h]
  int v62; // [rsp+15Ch] [rbp+5Ch]
  int v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+164h] [rbp+64h]
  int v65; // [rsp+170h] [rbp+70h] BYREF
  __int64 v66; // [rsp+178h] [rbp+78h]
  __int64 v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  __int16 v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v73; // [rsp+1B0h] [rbp+B0h]
  bool v74; // [rsp+1B8h] [rbp+B8h]
  int v75; // [rsp+1BCh] [rbp+BCh]
  int v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C4h] [rbp+C4h]
  _BYTE v78[144]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 retaddr; // [rsp+268h] [rbp+168h]
  unsigned int v80; // [rsp+270h] [rbp+170h] BYREF
  __int64 v81; // [rsp+278h] [rbp+178h] BYREF

  v22 = -1;
  v4 = (unsigned int)a1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2081);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2081LL);
  v81 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v81, 9);
  v8 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v8 = a2;
  if ( (v4 & 0x800000) != 0 )
    v8[6] |= 2u;
  if ( (v4 & 0x14000) == 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      if ( (v4 & 0xFFFFFEFF) != 0 )
        goto LABEL_22;
      v39 = 0;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v48 = v8 == 0LL;
      v43 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = v8;
      v49 = 0;
      v50 = 1;
      v51 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v39);
      v14 = (CCD_TOPOLOGY *)&v39;
    }
    else if ( (v4 & 0x10) != 0 )
    {
      v52 = 0;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v61 = v8 == 0LL;
      v56 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v60 = v8;
      v62 = 0;
      v63 = 1;
      v64 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v52, (unsigned __int16 *)a3);
      v14 = (CCD_TOPOLOGY *)&v52;
    }
    else if ( (v4 & 0x2000040) != 0 )
    {
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v30 = 0LL;
      v34 = v8 == 0LL;
      v31 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v32 = 0LL;
      v33 = v8;
      v35 = 0;
      v36 = 1;
      v38 = 0;
      v37 = (v4 & 0x1000000) != 0;
      AllPaths = CCD_TOPOLOGY::RetrieveActive(
                   (CCD_TOPOLOGY *)&v25,
                   (v4 & 0x80000) != 0,
                   0,
                   (v4 & 0x100000) != 0,
                   (unsigned __int16 *)a3);
      if ( AllPaths >= 0 && (v4 & 0x2000000) != 0 )
      {
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v78, 0, 0);
        if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v78, 0x8Fu, 0LL) < 0 )
          CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)v78);
        for ( i = 0; i < *((unsigned __int16 *)v8 + 10); ++i )
        {
          v16 = 68LL * i;
          v17 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v8[v16];
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      (CCD_TOPOLOGY *)v78,
                      (const struct _LUID *)&v8[v16 + 16],
                      v8[v16 + 19],
                      &v80) < 0 )
            DxgkGetAdapterDefaultScaling((struct _LUID *)&v8[v16 + 16], v17 + 47);
          else
            v17[47] = *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)CCD_TOPOLOGY::GetPathDescriptor(
                                                                      (CCD_TOPOLOGY *)v78,
                                                                      v80)
                      + 35);
          *(_QWORD *)&v8[v16 + 12] |= 0x10000uLL;
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v78);
      }
      v14 = (CCD_TOPOLOGY *)&v25;
    }
    else
    {
      if ( (v4 & 0xF) == 0 )
        goto LABEL_23;
      v65 = 0;
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      v74 = v8 == 0LL;
      v69 = 0;
      v70 = 0LL;
      v71 = 0LL;
      v72 = 0LL;
      v73 = v8;
      v75 = 0;
      v76 = 1;
      v77 = 0LL;
      AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v65, v4 & 0x40030AF, (unsigned __int16 *)a3);
      v14 = (CCD_TOPOLOGY *)&v65;
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY(v14);
    goto LABEL_42;
  }
  if ( (v4 & 0xFFFEBFFF) != 0 )
  {
LABEL_22:
    v13 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v13 + 24) = v4;
    WdLogEvent5_WdAssertion(v13);
LABEL_23:
    AllPaths = -1073741811;
    goto LABEL_42;
  }
  v9 = 0;
  if ( (v4 & 0x4000) != 0 )
    v9 = 2;
  if ( (v4 & 0x10000) != 0 )
    v9 |= 4u;
  for ( j = 0; j < *((unsigned __int16 *)v8 + 10); ++j )
  {
    v11 = *(_QWORD *)&v8[68 * j + 68];
    if ( v11 )
      *(_DWORD *)(v11 + 240) |= v9;
  }
  AllPaths = 0;
LABEL_42:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::~DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>(&v81);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v18);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)AllPaths;
}
