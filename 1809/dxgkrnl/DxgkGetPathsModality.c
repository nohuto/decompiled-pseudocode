/*
 * XREFs of DxgkGetPathsModality @ 0x1C00C8E30
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C6FF0 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C7320 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0013024 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C99F4 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C013A1DC (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02885F8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, GUID *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  int AllPaths; // ebx
  CCD_TOPOLOGY *v9; // rcx
  __int64 v10; // rcx
  const GUID *v11; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int i; // edi
  __int64 v18; // r14
  int v19; // ecx
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  char v22; // [rsp+40h] [rbp-C0h]
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int16 v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  _DWORD *v31; // [rsp+90h] [rbp-70h]
  bool v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  int v34; // [rsp+A0h] [rbp-60h]
  BOOL v35; // [rsp+A4h] [rbp-5Ch]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int16 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  _DWORD *v45; // [rsp+F0h] [rbp-10h]
  bool v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]
  int v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+104h] [rbp+4h]
  int v50; // [rsp+110h] [rbp+10h] BYREF
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int16 v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  _DWORD *v58; // [rsp+150h] [rbp+50h]
  bool v59; // [rsp+158h] [rbp+58h]
  int v60; // [rsp+15Ch] [rbp+5Ch]
  int v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+164h] [rbp+64h]
  int v63; // [rsp+170h] [rbp+70h] BYREF
  __int64 v64; // [rsp+178h] [rbp+78h]
  __int64 v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  __int16 v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  __int64 v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v71; // [rsp+1B0h] [rbp+B0h]
  bool v72; // [rsp+1B8h] [rbp+B8h]
  int v73; // [rsp+1BCh] [rbp+BCh]
  int v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C4h] [rbp+C4h]
  _BYTE v76[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 retaddr; // [rsp+258h] [rbp+158h]
  unsigned int v78; // [rsp+260h] [rbp+160h] BYREF
  __int64 v79; // [rsp+268h] [rbp+168h] BYREF

  v20 = -1;
  v5 = (unsigned int)a1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2081;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2081);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2081);
  v79 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v79, 9);
  v7 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v7 = a2;
  if ( (v5 & 0x800000) != 0 )
    v7[6] |= 2u;
  if ( (v5 & 0x14000) == 0 )
  {
    if ( (v5 & 0x100) == 0 )
    {
      if ( (v5 & 0x10) != 0 )
      {
        v50 = 0;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        v59 = v7 == 0LL;
        v54 = 0;
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = v7;
        v60 = 0;
        v61 = 1;
        v62 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v50, (unsigned __int16 *)a3);
        v9 = (CCD_TOPOLOGY *)&v50;
        goto LABEL_16;
      }
      if ( (v5 & 0x2000040) != 0 )
      {
        v23 = 0;
        v24 = 0LL;
        v25 = 0LL;
        v28 = 0LL;
        v32 = v7 == 0LL;
        v29 = 0LL;
        v26 = 0LL;
        v27 = 0;
        v30 = 0LL;
        v31 = v7;
        v33 = 0;
        v34 = 1;
        v36 = 0;
        v35 = (v5 & 0x1000000) != 0;
        AllPaths = CCD_TOPOLOGY::RetrieveActive(
                     (CCD_TOPOLOGY *)&v23,
                     (v5 & 0x80000) != 0,
                     0,
                     (v5 & 0x100000) != 0,
                     (unsigned __int16 *)a3);
        if ( AllPaths >= 0 && (v5 & 0x2000000) != 0 )
        {
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v76, 0, 0);
          if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v76, 0x8Fu, 0LL) >= 0 )
          {
            for ( i = 0; i < *((unsigned __int16 *)v7 + 10); ++i )
            {
              v18 = 68LL * i;
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          (CCD_TOPOLOGY *)v76,
                          (const struct _LUID *)&v7[v18 + 16],
                          v7[v18 + 19],
                          &v78) >= 0 )
              {
                v19 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v76, v78) + 35);
                *(_QWORD *)&v7[v18 + 12] |= 0x10000uLL;
                v7[v18 + 47] = v19;
              }
            }
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v76);
        }
        v9 = (CCD_TOPOLOGY *)&v23;
        goto LABEL_16;
      }
      if ( (v5 & 0xF) != 0 )
      {
        v63 = 0;
        v64 = 0LL;
        v65 = 0LL;
        v66 = 0LL;
        v72 = v7 == 0LL;
        v67 = 0;
        v68 = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v71 = v7;
        v73 = 0;
        v74 = 1;
        v75 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v63, v5 & 0x40030AF, (unsigned __int16 *)a3);
        v9 = (CCD_TOPOLOGY *)&v63;
LABEL_16:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v9);
        goto LABEL_17;
      }
LABEL_33:
      AllPaths = -1073741811;
      goto LABEL_17;
    }
    if ( (v5 & 0xFFFFFEFF) == 0 )
    {
      v37 = 0;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v46 = v7 == 0LL;
      v41 = 0;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = v7;
      v47 = 0;
      v48 = 1;
      v49 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v37);
      v9 = (CCD_TOPOLOGY *)&v37;
      goto LABEL_16;
    }
LABEL_32:
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdAssertion(v16);
    goto LABEL_33;
  }
  if ( (v5 & 0xFFFEBFFF) != 0 )
    goto LABEL_32;
  v13 = 0;
  v14 = ((unsigned int)v5 >> 13) & 2 | 4;
  if ( (v5 & 0x10000) == 0 )
    v14 = ((unsigned int)v5 >> 13) & 2;
  if ( *((_WORD *)v7 + 10) )
  {
    do
    {
      v15 = *(_QWORD *)&v7[68 * v13 + 68];
      if ( v15 )
        *(_DWORD *)(v15 + 240) |= v14;
      ++v13;
    }
    while ( v13 < *((unsigned __int16 *)v7 + 10) );
  }
  AllPaths = 0;
LABEL_17:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v79, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v20);
  return (unsigned int)AllPaths;
}
