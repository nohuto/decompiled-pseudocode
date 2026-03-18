/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00AEF34
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0137CF4 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0288084 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        char a3)
{
  unsigned __int16 v5; // si
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 v11; // di
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // rax
  __int16 v15; // cx
  unsigned __int16 v16; // bx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  unsigned int i; // esi
  unsigned __int16 v23; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _BYTE v39[64]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v40; // [rsp+78h] [rbp+17h]
  int v41; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v42; // [rsp+D8h] [rbp+77h] BYREF

  LOBYTE(v42) = a3;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v39, 8u, 0);
  v41 |= 4u;
  v5 = 1;
  v42 = 1;
  while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v39, v5) >= v5 )
  {
    v7 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v39, 0, 0, 1, &v42);
    v5 = v42;
    LODWORD(v9) = v7;
    if ( v7 != -1073741789 )
      goto LABEL_6;
  }
  v10 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = this;
  WdLogEvent5_WdLowResource(v10);
  LODWORD(v9) = -1073741801;
LABEL_6:
  v11 = 0;
  if ( (int)v9 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = (int)v9;
LABEL_25:
    WdLogEvent5_WdError(v12);
    goto LABEL_42;
  }
  if ( v40 )
    v13 = *(_WORD *)(v40 + 20);
  else
    v13 = 0;
  if ( v13 )
  {
    *((_DWORD *)a2 + 21) |= 1u;
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
      v15 = *(_WORD *)(v14 + 20);
    else
      v15 = 0;
    if ( v14 )
      v16 = *(_WORD *)(v14 + 20);
    else
      v16 = 0;
    v17 = CCD_TOPOLOGY::Reserve(a2, v5 + v15);
    if ( (unsigned int)v17 >= v5 + (unsigned int)v16 )
    {
      v20 = CCD_TOPOLOGY::CopyTopology(a2, this);
      v9 = v20;
      if ( v20 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v12 + 24) = v9;
        goto LABEL_25;
      }
      for ( i = 0; ; ++i )
      {
        v23 = v40 ? *(_WORD *)(v40 + 20) : 0;
        if ( i >= v23 )
          break;
        if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) & 0x100LL) != 0 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
          v25 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 38) = *((_DWORD *)v25 + 24);
          v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 39) = *((_DWORD *)v26 + 25);
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 43) = 0;
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 42) = 0;
          v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 45) = *((_DWORD *)v27 + 25);
          v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) + 44) = *((_DWORD *)v28 + 24);
          v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *(_QWORD *)v29 |= 0x820000uLL;
        }
        if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) & 0x87) != 0 )
        {
          v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_QWORD *)v30 + 1) |= 0x87uLL;
        }
        if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i) & 2) != 0 )
        {
          v31 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
          *((_QWORD *)v31 + 1) |= 2uLL;
        }
        v32 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v39, i);
        v34 = CCD_TOPOLOGY::AddPathDescriptor(a2, v32, v33);
        v9 = v34;
        if ( v34 < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v35);
          v36[3] = v9;
          v36[4] = i;
          v36[5] = this;
          v37 = *((_QWORD *)a2 + 8);
          if ( v37 )
            v11 = *(_WORD *)(v37 + 20);
          v36[6] = v11;
          WdLogEvent5_WdAssertion(v36);
          break;
        }
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = this;
      v19 = *((_QWORD *)this + 8);
      if ( v19 )
        v11 = *(_WORD *)(v19 + 20);
      *(_QWORD *)(v18 + 32) = v5 + (unsigned int)v11;
      WdLogEvent5_WdLowResource(v18);
      LODWORD(v9) = -1073741801;
    }
  }
  else
  {
    LODWORD(v9) = 255;
  }
LABEL_42:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v39);
  return (unsigned int)v9;
}
