/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D237C
 * Callers:
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D45C8 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D6DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD974 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0149BC0 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C02706A0 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00D2478 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02C0AD8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02C33E0 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // esi
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  __int64 v15; // r8
  unsigned int v16; // ebp
  _QWORD *v18; // rax
  _BYTE v19[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  struct _LUID v21; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v21 = 0LL;
  CCD_BTL::Global();
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v19);
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v21, &v20, v4, v5);
  v10 = v6;
  if ( v6 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v18[3] = v10;
    v18[4] = this;
    v18[5] = *((_QWORD *)this + 8);
    v18[6] = this;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v10;
  }
  else
  {
    v11 = *((_QWORD *)this + 8);
    v12 = 0;
    v13 = 0;
    v14 = *(unsigned __int16 *)(v11 + 20);
    if ( !*(_WORD *)(v11 + 20) )
      goto LABEL_17;
    while ( 1 )
    {
      v15 = 272LL * v13;
      if ( *(_DWORD *)(v15 + v11 + 64) == v21.LowPart
        && *(_DWORD *)(v15 + v11 + 68) == v21.HighPart
        && *(_DWORD *)(v15 + v11 + 76) == v20 )
      {
        break;
      }
      if ( ++v13 >= v14 )
        goto LABEL_17;
    }
    v16 = 0;
    do
    {
      if ( v16 == v13 || CCD_TOPOLOGY::IsSameCloneGroup(this, v16, v13, 0) )
        ++v12;
      ++v16;
    }
    while ( v16 < v14 );
    if ( !v12 )
    {
LABEL_17:
      *(_DWORD *)a2 = 8;
      return 0LL;
    }
    if ( v12 == 1 )
    {
      if ( v14 > 1 )
      {
        *(_DWORD *)a2 = 4;
        return 0LL;
      }
      if ( v14 == 1 )
      {
        *(_DWORD *)a2 = 1;
        return 0LL;
      }
    }
    else if ( v14 > 1 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    return 3221225473LL;
  }
}
