/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D523C
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D481C (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkGetPathsModality @ 0x1C00D6FD0 (DxgkGetPathsModality.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00DE8C0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01400C0 (DxgkGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        struct _QDC_CONTEXT *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v5; // rbx
  int v7; // r12d
  int v8; // ebp
  unsigned __int16 v9; // di
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  int PathsModality; // ebx
  __int64 v16; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[64]; // [rsp+20h] [rbp-88h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v26; // [rsp+60h] [rbp-48h]
  int v27; // [rsp+C0h] [rbp+18h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  if ( !*((_DWORD *)a3 + 1) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = 1229LL;
    return 3221225507LL;
  }
  v8 = a1 & 0x200000;
  if ( (a1 & 0x200000) != 0 )
  {
    v9 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v16 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v16 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v23 + 24) = v5;
        WdLogEvent5_WdAssertion(v23);
        return 3221225485LL;
      }
      v16 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v16, &v27);
    v21 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v21;
      *(_QWORD *)(v22 + 32) = 2LL;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v9 = v27;
    }
  }
  else
  {
    v9 = *((_DWORD *)a3 + 1);
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v25, v9, 0);
  if ( v26 )
    v13 = *((_WORD *)v26 + 11);
  else
    v13 = 0;
  if ( (unsigned int)v13 < *((_DWORD *)a3 + 1) )
  {
    v24 = WdLogNewEntry5_WdLowResource(v10, v26, v11, v12);
    *(_QWORD *)(v24 + 24) = *((unsigned int *)a3 + 1);
    WdLogEvent5_WdLowResource(v24);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v5, v26, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(v26, v7 != 0, v8 != 0, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v26 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v25);
  return (unsigned int)PathsModality;
}
