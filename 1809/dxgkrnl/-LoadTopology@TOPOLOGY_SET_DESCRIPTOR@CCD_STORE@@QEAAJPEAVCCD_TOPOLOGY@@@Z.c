/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00C7970
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C77E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00188AC (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00BE7F4 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00C8310 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C898C (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdReadRegistryValues @ 0x1C00C8AC8 (_CcdReadRegistryValues.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C8C1C (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CA874 (_CcdOpenRegistrySubkey.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00CE3E0 (DxgkGetAdapterDefaultScaling.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0135B14 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  unsigned __int16 *v6; // r13
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rdi
  int RegistryValues; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v24; // rcx
  int v25; // eax
  int Path; // eax
  char *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v48; // [rsp+40h] [rbp-30h] BYREF
  int v49; // [rsp+44h] [rbp-2Ch]
  int v50; // [rsp+48h] [rbp-28h]
  int v51; // [rsp+4Ch] [rbp-24h]
  unsigned int v52; // [rsp+50h] [rbp-20h]
  unsigned int v53; // [rsp+54h] [rbp-1Ch] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v54; // [rsp+58h] [rbp-18h]
  wchar_t pszDest; // [rsp+60h] [rbp-10h] BYREF

  v54 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v5 = 0;
  v6 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v35 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v35);
    return 3221225473LL;
  }
  v7 = *((_WORD *)SetId + 16);
  v8 = *((_QWORD *)a2 + 8);
  if ( v8 )
    v9 = *(unsigned __int16 *)(v8 + 22);
  else
    v9 = 0LL;
  if ( v7 > (unsigned __int16)v9 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v9);
    v37 = *((_QWORD *)a2 + 8);
    if ( v37 )
      v5 = *(_WORD *)(v37 + 22);
    *(_QWORD *)(v36 + 24) = v5;
    *(_QWORD *)(v36 + 32) = v6[16];
    WdLogEvent5_WdAssertion(v36);
    return 3221225507LL;
  }
  v10 = 0;
  if ( v7 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v10);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v10;
    }
    while ( v10 < v6[16] );
  }
  v49 = -1;
  v12 = 0LL;
  Handle = 0LL;
  LODWORD(v13) = -1073741823;
  v14 = 0;
  if ( !v6[16] )
    return (unsigned int)v13;
  while ( 1 )
  {
    v15 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v14, &v53, 0LL, &v48);
    v13 = v15;
    if ( v15 < 0 )
      break;
    v17 = v53;
    if ( v49 != v53 )
    {
      v18 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v53);
      v13 = v18;
      if ( v18 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
        v43[3] = v13;
        v43[4] = v14;
        v43[5] = v17;
        v43[6] = a2;
        v43[7] = *((_QWORD *)a2 + 8);
        goto LABEL_69;
      }
      if ( Handle )
        ZwClose(Handle);
      v20 = CcdOpenRegistrySubkey((int)&Handle, 131097, *((_QWORD *)v54 + 8), &pszDest, 0LL);
      v13 = v20;
      if ( v20 < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v42[4] = v14;
        v42[3] = v13;
        v42[5] = v17;
        v42[6] = a2;
        v42[7] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v42);
        goto LABEL_35;
      }
      v49 = v17;
    }
    v22 = CCD_TOPOLOGY::GetPathDescriptor(a2, v14);
    RegistryValues = CcdReadRegistryValues((int)Handle, 0LL, &unk_1C008D5C0, (__int64)v22);
    v13 = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_66;
    *((_QWORD *)v22 + 13) = *((_QWORD *)v22 + 12);
    v25 = CcdReadRegistryValues((int)Handle, 0LL, &unk_1C008D400, (__int64)&v46);
    v13 = v25;
    if ( v25 == -1073741772 )
    {
      LODWORD(v46) = 0;
    }
    else if ( v25 < 0 )
    {
LABEL_66:
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v44[3] = v13;
      v44[4] = Handle;
      v44[5] = v48;
      v44[6] = v14;
      goto LABEL_67;
    }
    v51 = *((_DWORD *)v22 + 24);
    v50 = *((_DWORD *)v22 + 25);
    v52 = v48;
    Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v24, Handle, v48, v22);
    v13 = Path;
    if ( Path < 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v44[4] = v14;
      v44[5] = v52;
      v44[3] = v13;
      v44[6] = a2;
      v44[7] = *((_QWORD *)a2 + 8);
LABEL_67:
      WdLogEvent5_WdError(v44);
      CCD_TOPOLOGY::ClearPathDescriptor(v22);
      goto LABEL_35;
    }
    *((_DWORD *)v22 + 51) = 0;
    *((_DWORD *)v22 + 52) = 4;
    switch ( (_DWORD)v46 )
    {
      case 0:
        *(_QWORD *)v22 &= 0x10B87uLL;
        if ( (*(_QWORD *)v22 & 0x100LL) != 0 )
        {
          if ( (*(_QWORD *)v22 & 0x200LL) == 0 || ((*((_DWORD *)v22 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v39 = *((_DWORD *)v22 + 25);
            v28 = *((unsigned int *)v22 + 24);
          }
          else
          {
            v39 = *((_DWORD *)v22 + 24);
            v28 = *((unsigned int *)v22 + 25);
          }
          *((_DWORD *)v22 + 38) = v28;
          *((_DWORD *)v22 + 39) = v39;
          *(_QWORD *)v22 |= 0x20000uLL;
        }
LABEL_54:
        v40 = *(_QWORD *)v22 & 0x30B87LL;
        *(_QWORD *)v22 = v40;
        if ( (_DWORD)v46 == 1 && (v40 & 0x10000) != 0 )
        {
          v27 = (char *)v22 + 140;
          if ( *((_DWORD *)v22 + 35) == 5 )
            DxgkGetAdapterDefaultScaling((char *)v22 + 16, v27);
        }
LABEL_58:
        *(_QWORD *)v22 &= 0x830B87uLL;
        if ( *((_DWORD *)v22 + 29) != 21 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
          v41[3] = *((int *)v22 + 29);
          v41[4] = v54;
          v41[5] = v22;
          WdLogEvent5_WdWarning(v41);
        }
        *((_DWORD *)v22 + 29) = 21;
        goto LABEL_23;
      case 1:
        goto LABEL_54;
      case 2:
        goto LABEL_58;
    }
    if ( (_DWORD)v46 != 3 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v38[3] = (int)v46;
      v38[4] = *((unsigned int *)v22 + 6);
      v38[5] = *((unsigned int *)v22 + 7);
      WdLogEvent5_WdError(v38);
      CCD_TOPOLOGY::ClearPathDescriptor(v22);
      goto LABEL_24;
    }
LABEL_23:
    *(_QWORD *)v22 &= 0x830F87uLL;
LABEL_24:
    v30 = *(_QWORD *)v22;
    if ( (*(_QWORD *)v22 & 0x20000LL) != 0 )
    {
      if ( v52 )
      {
        *((_QWORD *)v22 + 19) = v12;
      }
      else
      {
        if ( (v30 & 0x200) != 0 && ((*((_DWORD *)v22 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v31 = v51;
          v32 = v50;
        }
        else
        {
          v31 = v50;
          v32 = v51;
        }
        *((_DWORD *)v22 + 38) = v32;
        *((_DWORD *)v22 + 39) = v31;
        v12 = *((_QWORD *)v22 + 19);
        v30 = *(_QWORD *)v22;
      }
    }
    if ( (v30 & 0x10000) != 0 )
    {
      *((_DWORD *)v22 + 34) = *((_DWORD *)v22 + 35);
      v30 |= 0x40000000000uLL;
      *(_QWORD *)v22 = v30;
    }
    if ( (v30 & 0x100) == 0 )
      *(_QWORD *)v22 = v30 & 0xFFFFFFFFFF7FFFFFuLL;
    if ( ++v14 >= v6[16] )
      goto LABEL_35;
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16);
  v43[3] = v13;
  v43[4] = v14;
  v43[5] = a2;
  v43[6] = *((_QWORD *)a2 + 8);
LABEL_69:
  WdLogEvent5_WdAssertion(v43);
LABEL_35:
  if ( (int)v13 >= 0 )
  {
    v13 = *(int *)CCD_TOPOLOGY::SetModalitySetId(a2, (const struct CCD_SET_STRING_ID *)v6);
    if ( (int)v13 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v45[3] = v13;
      v45[4] = a2;
      v45[5] = v6;
      WdLogEvent5_WdError(v45);
    }
    else
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v6[16];
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
