/*
 * XREFs of ??$FindProperty@UFlipContentPresentTransform@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentPresentTransform@@@Z @ 0x1C005CAE4
 * Callers:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCEndpointResourceStateManager@@PEAVCFlipContentToken@@@Z @ 0x1C005CBDC (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCEndpointResourceSta.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<FlipContentPresentTransform>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r11d
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // ecx

  *a2 = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v6 = 32LL * v2;
      v7 = *(_QWORD *)(v6 + v5) - *(_QWORD *)&GUID_1403a881_b096_49c3_8b10_cc5a82caf815.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v6 + v5 + 8) - *(_QWORD *)GUID_1403a881_b096_49c3_8b10_cc5a82caf815.Data4;
      v8 = v7 == 0;
      v9 = *(_DWORD *)(v6 + v5 + 16);
      if ( v8 && v9 == 8 )
        break;
      ++v2;
      v4 += v9;
      if ( v2 >= v3 )
        return;
    }
    *a2 = v4;
  }
}
