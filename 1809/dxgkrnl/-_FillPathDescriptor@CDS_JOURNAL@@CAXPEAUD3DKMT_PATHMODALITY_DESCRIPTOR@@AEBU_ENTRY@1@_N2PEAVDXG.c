/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B5744
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B4FBC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B569C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C028D960 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0001C9C (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00B4E7C (ConvertGdiScalingToDMMScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00B5980 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00B5A34 (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00CE3E0 (DxgkGetAdapterDefaultScaling.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C027ACEC (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 */

void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        char a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rdi
  int v6; // eax
  __int64 v8; // r10
  char v10; // r15
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r11
  int v19; // r9d
  __int64 v20; // r11
  int v21; // r9d
  __int64 v22; // r10
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v23; // rdx
  char *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax

  *(_QWORD *)a1 &= 0xFFFFFFFFFF7DFE78uLL;
  v5 = (unsigned int *)((char *)a2 + 44);
  v6 = *((_DWORD *)a2 + 11);
  v8 = *(_QWORD *)a1;
  v10 = a3;
  v12 = v6;
  if ( (v6 & 0x80u) != 0 )
  {
    v13 = *((_DWORD *)a2 + 14);
    if ( v13 )
    {
      v32 = v13 - 1;
      if ( !v32 )
      {
        *((_DWORD *)a1 + 33) = 2;
        goto LABEL_4;
      }
      v33 = (unsigned int)(v32 - 1);
      if ( !(_DWORD)v33 )
      {
        *((_DWORD *)a1 + 33) = 3;
        goto LABEL_4;
      }
      if ( (_DWORD)v33 == 1 )
      {
        *((_DWORD *)a1 + 33) = 4;
        goto LABEL_4;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, a2, a3);
      v34[3] = v5;
      v34[4] = *v5;
      v34[5] = v5[3];
      WdLogEvent5_WdWarning(v34);
    }
    *((_DWORD *)a1 + 33) = 1;
LABEL_4:
    *(_QWORD *)a1 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
    v6 = *v5;
    v12 = *v5;
    v8 = *(_QWORD *)a1;
  }
  v14 = 0x80000LL;
  if ( (v6 & 0x80000) != 0 )
  {
    v15 = *((_DWORD *)a2 + 17);
    v8 |= 0x20000uLL;
    *(_QWORD *)a1 = v8;
    *((_DWORD *)a1 + 38) = v15;
    v6 = *v5;
    v12 = *v5;
  }
  if ( (v6 & 0x100000) != 0 )
  {
    v16 = *((_DWORD *)a2 + 18);
    v8 |= 0x20000uLL;
    *(_QWORD *)a1 = v8;
    *((_DWORD *)a1 + 39) = v16;
    v12 = *v5;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    v17 = v12;
    v18 = v8;
    if ( (v12 & 0x80000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 25) = v19;
      else
        *((_DWORD *)a1 + 24) = v19;
      v18 = v20 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v18;
      v12 = *v5;
      v17 = *v5;
    }
    v8 = v18;
    if ( (v17 & 0x100000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 24) = v21;
      else
        *((_DWORD *)a1 + 25) = v21;
      v8 = v22 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v8;
      v12 = *v5;
    }
  }
  if ( (v12 & 0x20) != 0 )
  {
    v8 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 = v8;
    v12 = *v5;
  }
  if ( (v12 & 0x20000000) != 0 && (v35 = *((unsigned int *)a2 + 15), (_DWORD)v35) )
  {
    ConvertGdiScalingToDMMScaling(v35, (_DWORD *)a1 + 35, v14);
  }
  else if ( (v8 & 0x10000) == 0 )
  {
    v23 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
    if ( a5 )
      DmmGetDefaultScaling(a5, v23);
    else
      DxgkGetAdapterDefaultScaling((char *)a2 + 20, v23);
  }
  v24 = (char *)a1 + 140;
  if ( a5 )
    EnforceDriverModelScalingPolicy(a5, v24);
  else
    EnforceDriverModelScalingPolicy((char *)a2 + 20, v24);
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*v5 & 0x40000) != 0 )
  {
    v28 = v5[5];
    switch ( v28 )
    {
      case 0x20u:
LABEL_28:
        *((_DWORD *)a1 + 29) = 21;
        break;
      case 8u:
        *((_DWORD *)a1 + 29) = 41;
        break;
      case 0x10u:
        *((_DWORD *)a1 + 29) = 23;
        break;
      case 0x18u:
        *((_DWORD *)a1 + 29) = 20;
        break;
      default:
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v36[3] = v5;
        v36[4] = *v5;
        v36[5] = v5[5];
        WdLogEvent5_WdWarning(v36);
        goto LABEL_28;
    }
  }
  v29 = *v5;
  if ( (*v5 & 0x200000) != 0 )
  {
    v30 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8 | (((*((_DWORD *)a2 + 20) & 2) != 0) + 1);
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v30;
    v29 = *v5;
  }
  if ( (v29 & 0x400000) != 0 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
      v31 = 2 * *((_DWORD *)a2 + 19);
    else
      v31 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a1 + 13) = v31;
    *(_QWORD *)a1 |= 2uLL;
    *((_DWORD *)a1 + 14) = 1;
  }
  if ( !a4 && !v10 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
