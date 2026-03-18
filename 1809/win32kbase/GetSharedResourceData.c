/*
 * XREFs of GetSharedResourceData @ 0x1C0013264
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013030 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C007C904 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, __int64 a2)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 (__fastcall *v7)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **); // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 (__fastcall *v14)(); // rax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 <= 0x61 )
  {
    if ( a1 == 97 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedMatrixTransformMarshaler;
      goto LABEL_9;
    }
    if ( a1 <= 0x24 )
    {
      if ( a1 == 36 )
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionSpotLightMarshaler;
        goto LABEL_9;
      }
      v9 = a1 - 4;
      if ( !v9 )
      {
        *(_QWORD *)(a2 + 8) = CreateSharedReadAnimationTriggerMarshaler;
        v7 = CreateSharedWriteAnimationTriggerMarshaler;
        goto LABEL_9;
      }
      v10 = v9 - 14;
      if ( !v10 )
      {
        *(_DWORD *)a2 = 112;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedClientProjectedShadowCasterMarshaler;
        goto LABEL_8;
      }
      v11 = v10 - 11;
      if ( !v11 )
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionAmbientLightMarshaler;
        goto LABEL_9;
      }
      v12 = v11 - 2;
      if ( !v12 )
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionDistantLightMarshaler;
        goto LABEL_9;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionPointLightMarshaler;
          goto LABEL_9;
        }
        return 0;
      }
      v14 = CreateSharedReadCompositionLightMarshaler;
LABEL_57:
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = v14;
      return v2;
    }
    switch ( a1 )
    {
      case 'S':
        *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedInteractionMarshaler;
        goto LABEL_9;
      case '-':
        *(_QWORD *)(a2 + 8) = CreateSharedReadDesktopTargetMarshaler;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteDesktopTargetMarshaler;
        goto LABEL_9;
      case 'F':
        *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedHolographicInteropTextureMarshaler;
        goto LABEL_9;
      case 'H':
        *(_DWORD *)a2 = 112;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedHostProjectedShadowCasterMarshaler;
        goto LABEL_8;
      case '^':
        *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
        v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedManipulationTransformMarshaler;
        goto LABEL_9;
    }
    return 0;
  }
  if ( a1 <= 0x95 )
  {
    if ( a1 == 149 )
      goto LABEL_46;
    v15 = a1 - 98;
    if ( !v15 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_9;
    }
    v16 = v15 - 10;
    if ( !v16 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_9;
    }
    v17 = v16 - 10;
    if ( !v17 )
    {
      *(_DWORD *)a2 = 16;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedReadCaptureControllerMarshaler;
      goto LABEL_8;
    }
    v18 = v17 - 5;
    if ( !v18 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemotingRenderTargetMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteRemotingRenderTargetMarshaler;
      goto LABEL_9;
    }
    v19 = v18 - 7;
    if ( !v19 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteScalarMarshaler;
      goto LABEL_9;
    }
    if ( v19 == 18 )
    {
LABEL_46:
      v14 = CreateSharedReadTransformMarshaler;
      goto LABEL_57;
    }
    return 0;
  }
  v3 = a1 - 157;
  if ( !v3 )
  {
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateHostVisualMarshaler;
    goto LABEL_8;
  }
  v4 = v3 - 3;
  if ( !v4 )
  {
    v14 = CreateSharedReadVisualReferenceMarshaler;
    goto LABEL_57;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedVisualReferenceControllerMarshaler;
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      *(_DWORD *)a2 = 16;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteCaptureControllerMarshaler;
      goto LABEL_8;
    }
    return 0;
  }
  *(_DWORD *)a2 = 157;
  v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateVisualTargetMarshaler;
LABEL_8:
  *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v7;
  return v2;
}
