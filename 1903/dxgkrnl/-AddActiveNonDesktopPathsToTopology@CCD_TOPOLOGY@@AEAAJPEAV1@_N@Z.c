/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00D07E4
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD6EC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D08CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0146CB8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02C03FC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        bool a3)
{
  unsigned __int16 v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int16 v16; // di
  __int16 v17; // cx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // cx
  unsigned __int16 v23; // bx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int i; // esi
  unsigned __int16 v35; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _BYTE v51[64]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v52; // [rsp+78h] [rbp+17h]
  int v53; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v54; // [rsp+E0h] [rbp+7Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v51, 8u, 0);
  v53 |= 4u;
  v6 = 1;
  v54 = 1;
  while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v51, v6) >= v6 )
  {
    v11 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v51, 0, a3, 1, &v54);
    v6 = v54;
    LODWORD(v15) = v11;
    if ( v11 != -1073741789 )
      goto LABEL_4;
  }
  v19 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
  *(_QWORD *)(v19 + 24) = v6;
  *(_QWORD *)(v19 + 32) = this;
  WdLogEvent5_WdLowResource(v19);
  LODWORD(v15) = -1073741801;
LABEL_4:
  v16 = 0;
  if ( (int)v15 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v20 + 24) = (int)v15;
LABEL_25:
    WdLogEvent5_WdError(v20);
    goto LABEL_9;
  }
  if ( v52 )
    v17 = *(_WORD *)(v52 + 20);
  else
    v17 = 0;
  if ( !v17 )
  {
    LODWORD(v15) = 255;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v21 = *((_QWORD *)this + 8);
  if ( v21 )
    v22 = *(_WORD *)(v21 + 20);
  else
    v22 = 0;
  if ( v21 )
    v23 = *(_WORD *)(v21 + 20);
  else
    v23 = 0;
  v25 = CCD_TOPOLOGY::Reserve(a2, v6 + v22);
  if ( (unsigned int)v25 < v6 + (unsigned int)v23 )
  {
    v28 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = this;
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      v16 = *(_WORD *)(v29 + 20);
    *(_QWORD *)(v28 + 32) = v6 + (unsigned int)v16;
    WdLogEvent5_WdLowResource(v28);
    LODWORD(v15) = -1073741801;
    goto LABEL_9;
  }
  v30 = CCD_TOPOLOGY::CopyTopology(a2, this);
  v15 = v30;
  if ( v30 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v32, v31, v33);
    *(_QWORD *)(v20 + 24) = v15;
    goto LABEL_25;
  }
  for ( i = 0; ; ++i )
  {
    v35 = v52 ? *(_WORD *)(v52 + 20) : 0;
    if ( i >= v35 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v37 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 38) = *((_DWORD *)v37 + 24);
      v38 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 39) = *((_DWORD *)v38 + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 42) = 0;
      v39 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 45) = *((_DWORD *)v39 + 25);
      v40 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 44) = *((_DWORD *)v40 + 24);
      v41 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *(_QWORD *)v41 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 0x87) != 0 )
    {
      v42 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)v42 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 2) != 0 )
    {
      v43 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)v43 + 1) |= 2uLL;
    }
    v44 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
    v46 = CCD_TOPOLOGY::AddPathDescriptor(a2, v44, v45);
    v15 = v46;
    if ( v46 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v48, v47);
      v49[3] = v15;
      v49[4] = i;
      v49[5] = this;
      v50 = *((_QWORD *)a2 + 8);
      if ( v50 )
        v16 = *(_WORD *)(v50 + 20);
      v49[6] = v16;
      WdLogEvent5_WdAssertion(v49);
      break;
    }
  }
LABEL_9:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v51);
  return (unsigned int)v15;
}
