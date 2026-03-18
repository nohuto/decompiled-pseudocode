/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012F9A0
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C01308F0 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003AF0 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D5AAC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DB1CC (_CcdOpenRegistrySubkey.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00DCC54 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C012FC68 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdWriteRegistryValues @ 0x1C012FD64 (_CcdWriteRegistryValues.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C0130174 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 *v12; // r14
  int v13; // r12d
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 v21; // dx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r12
  int v34; // r12d
  int v35; // edx
  int v36; // eax
  unsigned int BitsPerPixel; // eax
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r15
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v52; // rax
  int v53; // ebx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v57; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v58; // [rsp+3Ch] [rbp-34h] BYREF
  int v59; // [rsp+40h] [rbp-30h]
  int v60; // [rsp+44h] [rbp-2Ch]
  int v61; // [rsp+48h] [rbp-28h] BYREF
  int v62; // [rsp+4Ch] [rbp-24h]
  ULONG v63; // [rsp+50h] [rbp-20h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v64; // [rsp+58h] [rbp-18h]
  wchar_t Dest; // [rsp+60h] [rbp-10h] BYREF

  v64 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v7 = v3;
  if ( v3 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
    v52[3] = v7;
LABEL_52:
    v52[4] = a2;
    v52[5] = *((_QWORD *)a2 + 8);
    v52[6] = 1LL;
    WdLogEvent5_WdError(v52);
    return (unsigned int)v7;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v12 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v52[3] = *(int *)v12;
    goto LABEL_52;
  }
  v13 = -1;
  Handle = 0LL;
  v14 = 0;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v15 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v12, v14, &v58, 0LL, &v57);
      v18 = v15;
      if ( v15 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v19 = *((_QWORD *)a2 + 8)) == 0 ? (v17 = 0LL) : (v17 = *(unsigned __int16 *)(v19 + 20)),
            v14 >= (unsigned __int16)v17) )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
        v55[3] = -1073741823LL;
        goto LABEL_49;
      }
      v20 = *((_QWORD *)a2 + 7);
      if ( v20 )
        v21 = *(_WORD *)(v20 + 2LL * v14);
      else
        v21 = v14;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v21);
      v24 = v58;
      v25 = (__int64)PathDescriptor;
      if ( v13 != v58 )
      {
        v26 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", v58);
        v29 = v26;
        if ( v26 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v27);
          v55[3] = v29;
          v55[4] = v14;
          v55[5] = v24;
          v55[6] = a2;
          v55[7] = *((_QWORD *)a2 + 8);
          goto LABEL_50;
        }
        if ( Handle )
          ZwClose(Handle);
        v30 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v64 + 8), &Dest, &v63);
        v33 = v30;
        if ( v30 < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v23, v31, v32);
          v54[3] = v33;
          v54[4] = v14;
          v54[5] = v24;
          goto LABEL_44;
        }
        v13 = v24;
        v62 = v24;
        if ( !v57 )
        {
          v34 = *(_DWORD *)(v25 + 96);
          v59 = *(_DWORD *)(v25 + 100);
          v60 = *(_DWORD *)(v25 + 112);
          if ( (*(_QWORD *)v25 & 0x20000LL) != 0 )
          {
            if ( (*(_QWORD *)v25 & 0x200LL) != 0 && ((*(_DWORD *)(v25 + 132) - 2) & 0xFFFFFFFD) == 0 )
            {
              v35 = *(_DWORD *)(v25 + 156);
              v36 = *(_DWORD *)(v25 + 152);
            }
            else
            {
              v35 = *(_DWORD *)(v25 + 152);
              v36 = *(_DWORD *)(v25 + 156);
            }
            *(_DWORD *)(v25 + 100) = v36;
            *(_DWORD *)(v25 + 96) = v35;
          }
          BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v25 + 116));
          *(_DWORD *)(v25 + 112) = v38 * (BitsPerPixel >> 3);
          v39 = CcdWriteRegistryValues((int)Handle, 0LL, v25);
          v42 = v39;
          if ( v39 < 0
            || (*(_DWORD *)(v25 + 100) = v59,
                *(_DWORD *)(v25 + 112) = v60,
                *(_DWORD *)(v25 + 96) = v34,
                v61 = 3,
                v43 = CcdWriteRegistryValues((int)Handle, 0LL, (__int64)&v61),
                v42 = v43,
                v43 < 0) )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v23, v40, v41);
            v54[3] = v42;
            v54[4] = Handle;
            v54[5] = 0LL;
            v54[6] = v14;
            goto LABEL_45;
          }
          v13 = v62;
        }
      }
      v44 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v23,
              Handle,
              v57,
              (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v25);
      v48 = v44;
      if ( v44 < 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v47);
        v54[4] = v14;
        v54[5] = v57;
        v54[3] = v48;
LABEL_44:
        v54[6] = a2;
        v54[7] = *((_QWORD *)a2 + 8);
LABEL_45:
        WdLogEvent5_WdError(v54);
        goto LABEL_31;
      }
      if ( (*(_QWORD *)v25 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v25 + 88))
        && (v49 & 0x200) != 0 )
      {
        v53 = *(_DWORD *)(v25 + 132);
        *((_DWORD *)DXGGLOBAL::GetGlobal(v50, v49) + 246) = v53;
      }
      if ( ++v14 >= v12[16] )
        goto LABEL_31;
    }
    v55 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
    v55[3] = v18;
LABEL_49:
    v55[4] = v14;
    v55[5] = a2;
    v55[6] = *((_QWORD *)a2 + 8);
LABEL_50:
    WdLogEvent5_WdAssertion(v55);
LABEL_31:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
