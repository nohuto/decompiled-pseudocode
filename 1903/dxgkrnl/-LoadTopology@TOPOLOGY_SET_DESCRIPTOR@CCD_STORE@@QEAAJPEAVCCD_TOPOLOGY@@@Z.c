/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD028
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0147190 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000DF74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D0EA0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D7990 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DAB8C (_CcdOpenRegistrySubkey.c)
 *     _CcdReadRegistryValues @ 0x1C00DBE88 (_CcdReadRegistryValues.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00DBFDC (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00DC2C4 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00DC614 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01458FC (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int16 v7; // di
  unsigned __int16 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rsi
  int RegistryValues; // eax
  __int64 v30; // rdx
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  int Path; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-30h] BYREF
  int v59; // [rsp+44h] [rbp-2Ch]
  int v60; // [rsp+48h] [rbp-28h]
  int v61; // [rsp+4Ch] [rbp-24h]
  unsigned int v62; // [rsp+50h] [rbp-20h]
  unsigned int v63; // [rsp+54h] [rbp-1Ch] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v64; // [rsp+58h] [rbp-18h]
  wchar_t Dest; // [rsp+60h] [rbp-10h] BYREF

  v64 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v7 = 0;
  v8 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v45 = WdLogNewEntry5_WdError(v5, v4, v6);
    WdLogEvent5_WdError(v45);
    return 3221225473LL;
  }
  v9 = *((unsigned __int16 *)SetId + 16);
  v10 = *((_QWORD *)a2 + 8);
  if ( v10 )
    v11 = *(unsigned __int16 *)(v10 + 22);
  else
    v11 = 0LL;
  if ( (unsigned __int16)v9 > (unsigned __int16)v11 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v11, v9);
    v47 = *((_QWORD *)a2 + 8);
    if ( v47 )
      v7 = *(_WORD *)(v47 + 22);
    *(_QWORD *)(v46 + 24) = v7;
    *(_QWORD *)(v46 + 32) = v8[16];
    WdLogEvent5_WdAssertion(v46);
    return 3221225507LL;
  }
  v12 = 0;
  if ( (_WORD)v9 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v12);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v12;
    }
    while ( v12 < v8[16] );
  }
  v59 = -1;
  LODWORD(v14) = -1073741823;
  Handle = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( !v8[16] )
    return (unsigned int)v14;
  while ( 1 )
  {
    LODWORD(v56) = 0;
    v17 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v8, v16, &v63, 0LL, &v58);
    v14 = v17;
    if ( v17 < 0 )
      break;
    v20 = v63;
    if ( v59 != v63 )
    {
      v21 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", v63);
      v14 = v21;
      if ( v21 < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
        v53[3] = v14;
        v53[4] = v16;
        v53[5] = v20;
        v53[6] = a2;
        v53[7] = *((_QWORD *)a2 + 8);
        goto LABEL_69;
      }
      if ( Handle )
        ZwClose(Handle);
      v24 = CcdOpenRegistrySubkey((int)&Handle, 131097, *((_QWORD *)v64 + 8), &Dest, 0LL);
      v14 = v24;
      if ( v24 < 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
        v52[4] = v16;
        v52[3] = v14;
        v52[5] = v20;
        v52[6] = a2;
        v52[7] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v52);
        goto LABEL_35;
      }
      v59 = v20;
    }
    v28 = CCD_TOPOLOGY::GetPathDescriptor(a2, v16);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C00A1610, 8u, (__int64)v28);
    v14 = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_66;
    *((_QWORD *)v28 + 13) = *((_QWORD *)v28 + 12);
    v33 = CcdReadRegistryValues(Handle, 0LL, &unk_1C00A1450, 2u, (__int64)&v56);
    v14 = v33;
    if ( v33 == -1073741772 )
    {
      LODWORD(v56) = 0;
    }
    else if ( v33 < 0 )
    {
LABEL_66:
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
      v54[3] = v14;
      v54[4] = Handle;
      v54[5] = v58;
      v54[6] = v16;
      goto LABEL_67;
    }
    v61 = *((_DWORD *)v28 + 24);
    v60 = *((_DWORD *)v28 + 25);
    v62 = v58;
    Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v31, Handle, v58, v28);
    v14 = Path;
    if ( Path < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
      v54[4] = v16;
      v54[5] = v62;
      v54[3] = v14;
      v54[6] = a2;
      v54[7] = *((_QWORD *)a2 + 8);
LABEL_67:
      WdLogEvent5_WdError(v54);
      CCD_TOPOLOGY::ClearPathDescriptor(v28);
      goto LABEL_35;
    }
    *((_DWORD *)v28 + 51) = 0;
    *((_DWORD *)v28 + 52) = 4;
    switch ( (_DWORD)v56 )
    {
      case 0:
        *(_QWORD *)v28 &= 0x10B87uLL;
        if ( (*(_QWORD *)v28 & 0x100LL) != 0 )
        {
          if ( (*(_QWORD *)v28 & 0x200LL) == 0 || ((*((_DWORD *)v28 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v49 = *((_DWORD *)v28 + 25);
            v36 = *((unsigned int *)v28 + 24);
          }
          else
          {
            v49 = *((_DWORD *)v28 + 24);
            v36 = *((unsigned int *)v28 + 25);
          }
          *((_DWORD *)v28 + 38) = v36;
          *((_DWORD *)v28 + 39) = v49;
          *(_QWORD *)v28 |= 0x20000uLL;
        }
LABEL_54:
        v50 = *(_QWORD *)v28 & 0x30B87LL;
        *(_QWORD *)v28 = v50;
        if ( (_DWORD)v56 == 1 && (v50 & 0x10000) != 0 )
        {
          v35 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)v28 + 140);
          if ( *((_DWORD *)v28 + 35) == 5 )
            DxgkGetAdapterDefaultScaling((struct _LUID *)v28 + 2, v35);
        }
LABEL_58:
        *(_QWORD *)v28 &= 0x830B87uLL;
        if ( *((_DWORD *)v28 + 29) != 21 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
          v51[3] = *((int *)v28 + 29);
          v51[4] = v64;
          v51[5] = v28;
          WdLogEvent5_WdWarning(v51);
        }
        *((_DWORD *)v28 + 29) = 21;
        goto LABEL_23;
      case 1:
        goto LABEL_54;
      case 2:
        goto LABEL_58;
    }
    if ( (_DWORD)v56 != 3 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
      v48[3] = (int)v56;
      v48[4] = *((unsigned int *)v28 + 6);
      v48[5] = *((unsigned int *)v28 + 7);
      WdLogEvent5_WdError(v48);
      CCD_TOPOLOGY::ClearPathDescriptor(v28);
      goto LABEL_24;
    }
LABEL_23:
    *(_QWORD *)v28 &= 0x830F87uLL;
LABEL_24:
    v38 = *(_QWORD *)v28;
    if ( (*(_QWORD *)v28 & 0x20000LL) != 0 )
    {
      if ( v62 )
      {
        *((_QWORD *)v28 + 19) = v15;
      }
      else
      {
        if ( (v38 & 0x200) != 0 && ((*((_DWORD *)v28 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v39 = v61;
          v40 = v60;
        }
        else
        {
          v39 = v60;
          v40 = v61;
        }
        *((_DWORD *)v28 + 38) = v40;
        *((_DWORD *)v28 + 39) = v39;
        v15 = *((_QWORD *)v28 + 19);
        v38 = *(_QWORD *)v28;
      }
    }
    if ( (v38 & 0x10000) != 0 )
    {
      *((_DWORD *)v28 + 34) = *((_DWORD *)v28 + 35);
      v38 |= 0x40000000000uLL;
      *(_QWORD *)v28 = v38;
    }
    if ( (v38 & 0x100) == 0 )
      *(_QWORD *)v28 = v38 & 0xFFFFFFFFFF7FFFFFuLL;
    if ( ++v16 >= v8[16] )
      goto LABEL_35;
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18);
  v53[3] = v14;
  v53[4] = v16;
  v53[5] = a2;
  v53[6] = *((_QWORD *)a2 + 8);
LABEL_69:
  WdLogEvent5_WdAssertion(v53);
LABEL_35:
  if ( (int)v14 >= 0 )
  {
    v14 = *(int *)CCD_TOPOLOGY::SetModalitySetId((void **)a2, (const struct CCD_SET_STRING_ID *)v8);
    if ( (int)v14 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
      v55[3] = v14;
      v55[4] = a2;
      v55[5] = v8;
      WdLogEvent5_WdError(v55);
    }
    else
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v8[16];
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v14;
}
