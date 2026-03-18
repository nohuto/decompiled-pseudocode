/*
 * XREFs of ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCEndpointResourceStateManager@@PEAVCFlipContentToken@@@Z @ 0x1C005CBDC
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENTRY@@@Z @ 0x1C005CE04 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@AEAU_LIST_ENT.c)
 * Callees:
 *     ??$FindProperty@UFlipContentGenericPresentInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentGenericPresentInfo@@@Z @ 0x1C005C964 (--$FindProperty@UFlipContentGenericPresentInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentGe.c)
 *     ??$FindProperty@UFlipContentHDRMetadata_HDR10@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHDRMetadata_HDR10@@@Z @ 0x1C005C9C4 (--$FindProperty@UFlipContentHDRMetadata_HDR10@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHDR.c)
 *     ??$FindProperty@UFlipContentHDRMetadata_HDR10Plus@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHDRMetadata_HDR10Plus@@@Z @ 0x1C005CA24 (--$FindProperty@UFlipContentHDRMetadata_HDR10Plus@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipConten.c)
 *     ??$FindProperty@UFlipContentPresentAttributeHeader@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentPresentAttributeHeader@@@Z @ 0x1C005CA84 (--$FindProperty@UFlipContentPresentAttributeHeader@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipConte.c)
 *     ??$FindProperty@UFlipContentPresentTransform@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentPresentTransform@@@Z @ 0x1C005CAE4 (--$FindProperty@UFlipContentPresentTransform@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentPres.c)
 *     ??$FindProperty@UFlipContentSourceRectInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentSourceRectInfo@@@Z @ 0x1C005CB44 (--$FindProperty@UFlipContentSourceRectInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentSource.c)
 */

void __fastcall CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(
        CContentResourceState *this,
        struct CEndpointResourceStateManager *a2,
        struct CFlipContentToken *a3)
{
  __int64 v3; // rsi
  struct CEndpointResourceStateManager *v6; // rdi
  char v7; // r15
  struct CEndpointResourceStateManager *v8; // rdx
  __int64 v9; // rax
  bool v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct CEndpointResourceStateManager *v16; // rdx
  __int64 v17; // rcx
  struct CEndpointResourceStateManager *v18; // rdx
  char v19; // si
  struct CEndpointResourceStateManager *v20; // rdx
  int v21; // eax
  int v22; // eax
  __int128 v23; // xmm0
  struct CEndpointResourceStateManager *v24; // [rsp+48h] [rbp+28h] BYREF

  v24 = a2;
  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
    return;
  CFlipPropertySetBase::FindProperty<FlipContentPresentAttributeHeader>(*((_QWORD *)this + 5), &v24);
  v6 = v24;
  if ( !v24 )
    return;
  v7 = *(_BYTE *)v24;
  if ( (*(_BYTE *)v24 & 0x73) != 0 || (*((_BYTE *)v24 + 1) & 1) != 0 )
  {
    CFlipPropertySetBase::FindProperty<FlipContentGenericPresentInfo>(v3, &v24);
    v8 = v24;
    if ( v24 )
    {
      if ( (v7 & 1) != 0 )
      {
        v9 = *(_QWORD *)v24;
        *((_BYTE *)a3 + 121) |= 1u;
        *((_QWORD *)a3 + 16) = v9;
      }
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        v10 = *((_DWORD *)v8 + 2) != 0;
        *((_BYTE *)a3 + 121) |= 2u;
        *((_BYTE *)a3 + 136) = v10;
      }
      if ( (*(_BYTE *)v6 & 0x10) != 0 )
      {
        v11 = *((_DWORD *)v8 + 3);
        *((_BYTE *)a3 + 121) |= 0x10u;
        *((_DWORD *)a3 + 37) = v11;
      }
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
      {
        v12 = *((_DWORD *)v8 + 4);
        *((_BYTE *)a3 + 121) |= 0x20u;
        *((_DWORD *)a3 + 38) = v12;
      }
      if ( (*(_BYTE *)v6 & 0x40) != 0 )
      {
        v13 = *((_DWORD *)v8 + 5);
        *((_BYTE *)a3 + 121) |= 0x40u;
        *((_DWORD *)a3 + 39) = v13;
      }
      if ( (*((_BYTE *)v6 + 1) & 1) != 0 )
      {
        v14 = *((_DWORD *)v8 + 6);
        if ( v14 == 1 )
        {
          v15 = *((_QWORD *)this + 5);
          v24 = 0LL;
          CFlipPropertySetBase::FindProperty<FlipContentHDRMetadata_HDR10>(v15, &v24);
          v16 = v24;
          if ( !v24 )
            goto LABEL_24;
          *((_DWORD *)a3 + 44) = 1;
          *(_OWORD *)((char *)a3 + 180) = *(_OWORD *)v16;
          *(_QWORD *)((char *)a3 + 196) = *((_QWORD *)v16 + 2);
          *((_DWORD *)a3 + 51) = *((_DWORD *)v16 + 6);
        }
        else
        {
          if ( v14 != 2 )
            goto LABEL_24;
          v17 = *((_QWORD *)this + 5);
          v24 = 0LL;
          CFlipPropertySetBase::FindProperty<FlipContentHDRMetadata_HDR10Plus>(v17, &v24);
          v18 = v24;
          if ( !v24 )
            goto LABEL_24;
          *((_DWORD *)a3 + 44) = 2;
          *(_OWORD *)((char *)a3 + 180) = *(_OWORD *)v18;
          *(_OWORD *)((char *)a3 + 196) = *((_OWORD *)v18 + 1);
          *(_OWORD *)((char *)a3 + 212) = *((_OWORD *)v18 + 2);
          *(_OWORD *)((char *)a3 + 228) = *((_OWORD *)v18 + 3);
          *(_QWORD *)((char *)a3 + 244) = *((_QWORD *)v18 + 8);
        }
        *((_BYTE *)a3 + 122) |= 1u;
      }
    }
  }
LABEL_24:
  v19 = *(_BYTE *)v6;
  if ( (*(_BYTE *)v6 & 0xC) != 0 )
  {
    CFlipPropertySetBase::FindProperty<FlipContentPresentTransform>(*((_QWORD *)this + 5), &v24);
    v20 = v24;
    if ( v24 )
    {
      if ( (v19 & 4) != 0 )
      {
        v21 = *(_DWORD *)v24;
        *((_BYTE *)a3 + 121) |= 4u;
        *((_DWORD *)a3 + 35) = v21;
      }
      if ( (*(_BYTE *)v6 & 8) != 0 )
      {
        v22 = *(_DWORD *)v20;
        *((_BYTE *)a3 + 121) |= 8u;
        *((_DWORD *)a3 + 36) = v22;
      }
    }
  }
  if ( *(char *)v6 < 0 )
  {
    CFlipPropertySetBase::FindProperty<FlipContentSourceRectInfo>(*((_QWORD *)this + 5), &v24);
    if ( v24 )
    {
      v23 = *(_OWORD *)v24;
      *((_BYTE *)a3 + 121) |= 0x80u;
      *((_OWORD *)a3 + 10) = v23;
    }
  }
}
