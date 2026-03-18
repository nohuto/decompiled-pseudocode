/*
 * XREFs of GetSharedResourceData @ 0x1C0011E58
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000B9D8 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000BACC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
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
  unsigned int v7; // ecx
  __int64 (__fastcall *v8)(); // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int64 (__fastcall *v20)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedReadTransformMarshaler **); // rax

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 > 0x76 )
  {
    v10 = a1 - 125;
    if ( !v10 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v8 = CreateSharedWriteScalarMarshaler;
      goto LABEL_9;
    }
    v11 = v10 - 17;
    if ( v11 && (v12 = v11 - 1) != 0 )
    {
      v13 = v12 - 8;
      if ( !v13 )
      {
        v8 = (__int64 (__fastcall *)())CreateHostVisualMarshaler;
        goto LABEL_20;
      }
      v14 = v13 - 3;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          v8 = CreateSharedVisualReferenceControllerMarshaler;
          goto LABEL_9;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 3 )
          {
            v8 = CreateSharedWriteCaptureControllerMarshaler;
            goto LABEL_29;
          }
          return 0;
        }
        *(_DWORD *)a2 = 151;
        v8 = (__int64 (__fastcall *)())CreateVisualTargetMarshaler;
LABEL_20:
        *(_QWORD *)(a2 + 8) = v8;
        goto LABEL_9;
      }
      v20 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedReadTransformMarshaler **))CreateSharedReadVisualReferenceMarshaler;
    }
    else
    {
      v20 = CreateSharedReadTransformMarshaler;
    }
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v20;
    return v2;
  }
  if ( a1 == 118 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadRemotingRenderTargetMarshaler;
    v8 = CreateSharedWriteRemotingRenderTargetMarshaler;
    goto LABEL_9;
  }
  v3 = a1 - 4;
  if ( !v3 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadAnimationTriggerMarshaler;
    v8 = CreateSharedWriteAnimationTriggerMarshaler;
    goto LABEL_9;
  }
  v4 = v3 - 42;
  if ( !v4 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadDesktopTargetMarshaler;
    v8 = CreateSharedWriteDesktopTargetMarshaler;
    goto LABEL_9;
  }
  v5 = v4 - 25;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
    v8 = CreateSharedHolographicInteropTextureMarshaler;
    goto LABEL_9;
  }
  v6 = v5 - 11;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
    v8 = (__int64 (__fastcall *)())CreateSharedInteractionMarshaler;
    goto LABEL_9;
  }
  v7 = v6 - 11;
  if ( v7 )
  {
    v17 = v7 - 3;
    if ( !v17 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v8 = CreateSharedMatrixTransformMarshaler;
      goto LABEL_9;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v8 = CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_9;
    }
    v19 = v18 - 8;
    if ( !v19 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v8 = CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_9;
    }
    if ( v19 == 9 )
    {
      v8 = CreateSharedReadCaptureControllerMarshaler;
LABEL_29:
      *(_DWORD *)a2 = 16;
      goto LABEL_20;
    }
    return 0;
  }
  *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
  v8 = (__int64 (__fastcall *)())CreateSharedManipulationTransformMarshaler;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v8;
  return v2;
}
