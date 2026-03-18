/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7E1C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00CC630 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0139F30 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C023B7E0 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00C7F10 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02886A8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C028AF34 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // ebp
  _QWORD *v16; // rax
  _BYTE v17[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+10h] BYREF
  struct _LUID v19; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  CCD_BTL::Global();
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v17);
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v19, &v18, v4, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v16[3] = v8;
    v16[4] = this;
    v16[5] = *((_QWORD *)this + 8);
    v16[6] = this;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v8;
  }
  else
  {
    v9 = *((_QWORD *)this + 8);
    v10 = 0;
    v11 = 0;
    v12 = *(unsigned __int16 *)(v9 + 20);
    if ( !*(_WORD *)(v9 + 20) )
      goto LABEL_17;
    while ( 1 )
    {
      v13 = 272LL * v11;
      if ( *(_DWORD *)(v13 + v9 + 64) == v19.LowPart
        && *(_DWORD *)(v13 + v9 + 68) == v19.HighPart
        && *(_DWORD *)(v13 + v9 + 76) == v18 )
      {
        break;
      }
      if ( ++v11 >= v12 )
        goto LABEL_17;
    }
    v14 = 0;
    do
    {
      if ( v14 == v11 || CCD_TOPOLOGY::IsSameCloneGroup(this, v14, v11, 0) )
        ++v10;
      ++v14;
    }
    while ( v14 < v12 );
    if ( !v10 )
    {
LABEL_17:
      *(_DWORD *)a2 = 8;
      return 0LL;
    }
    if ( v10 == 1 )
    {
      if ( v12 > 1 )
      {
        *(_DWORD *)a2 = 4;
        return 0LL;
      }
      if ( v12 == 1 )
      {
        *(_DWORD *)a2 = 1;
        return 0LL;
      }
    }
    else if ( v12 > 1 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    return 3221225473LL;
  }
}
