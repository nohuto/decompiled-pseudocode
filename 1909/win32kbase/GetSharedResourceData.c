/*
 * XREFs of GetSharedResourceData @ 0x1C000F5BC
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000E934 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000F708 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
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
  __int64 (__fastcall *v9)(); // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 <= 0x68 )
  {
    if ( a1 == 104 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedMatrixTransformMarshaler;
      goto LABEL_9;
    }
    if ( a1 <= 0x26 )
    {
      switch ( a1 )
      {
        case 0x26u:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionSpotLightMarshaler;
          goto LABEL_9;
        case 0x21u:
          v9 = CreateSharedReadCompositionLightMarshaler;
LABEL_24:
          *(_QWORD *)(a2 + 16) = 0LL;
          *(_QWORD *)(a2 + 8) = v9;
          return v2;
        case 0x1Fu:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionDistantLightMarshaler;
          goto LABEL_9;
        case 0x1Du:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionAmbientLightMarshaler;
          goto LABEL_9;
        case 4u:
          *(_QWORD *)(a2 + 8) = CreateSharedReadAnimationTriggerMarshaler;
          v7 = CreateSharedWriteAnimationTriggerMarshaler;
          goto LABEL_9;
        case 0x12u:
          *(_DWORD *)a2 = 128;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedClientProjectedShadowCasterMarshaler;
          goto LABEL_8;
        case 0x23u:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedCompositionPointLightMarshaler;
          goto LABEL_9;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 'W':
          *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedInteractionMarshaler;
          goto LABEL_9;
        case '0':
          *(_QWORD *)(a2 + 8) = CreateSharedReadDesktopTargetMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteDesktopTargetMarshaler;
          goto LABEL_9;
        case 'J':
          *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedHolographicInteropTextureMarshaler;
          goto LABEL_9;
        case 'L':
          *(_DWORD *)a2 = 128;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedHostProjectedShadowCasterMarshaler;
          goto LABEL_8;
        case 'e':
          *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedManipulationTransformMarshaler;
          goto LABEL_9;
      }
    }
    return 0;
  }
  if ( a1 <= 0xB4 )
  {
    if ( a1 == 180 )
      goto LABEL_47;
    v10 = a1 - 105;
    if ( !v10 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_9;
    }
    v11 = v10 - 19;
    if ( !v11 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_9;
    }
    v12 = v11 - 11;
    if ( !v12 )
    {
      *(_DWORD *)a2 = 16;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedReadCaptureControllerMarshaler;
      goto LABEL_8;
    }
    v13 = v12 - 6;
    if ( !v13 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemotingRenderTargetMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteRemotingRenderTargetMarshaler;
      goto LABEL_9;
    }
    v14 = v13 - 7;
    if ( !v14 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedWriteScalarMarshaler;
      goto LABEL_9;
    }
    if ( v14 == 31 )
    {
LABEL_47:
      v9 = CreateSharedReadTransformMarshaler;
      goto LABEL_24;
    }
    return 0;
  }
  v3 = a1 - 189;
  if ( !v3 )
  {
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateHostVisualMarshaler;
    goto LABEL_8;
  }
  v4 = v3 - 3;
  if ( !v4 )
  {
    v9 = CreateSharedReadVisualReferenceMarshaler;
    goto LABEL_24;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateSharedVisualReferenceControllerMarshaler;
    goto LABEL_9;
  }
  v6 = v5 - 2;
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
  *(_DWORD *)a2 = 189;
  v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **))CreateVisualTargetMarshaler;
LABEL_8:
  *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v7;
  return v2;
}
