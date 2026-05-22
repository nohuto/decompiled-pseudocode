/*
 * XREFs of SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x1800A6A38
 * Callers:
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x1800A5114 (SpatialInteractionDevices--ReadLocalOrientation.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800A924C (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        USAGE **a4,
        float *a5)
{
  float *v5; // rsi
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  const struct _HIDP_VALUE_CAPS *v11; // r8
  float v12; // xmm5_4
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG UsageValue; // [rsp+70h] [rbp+18h] BYREF

  UsageValue = a3;
  v5 = a5;
  v9 = 0;
  while ( 1 )
  {
    v10 = HidP_GetUsageValue(
            HidP_Input,
            **a4,
            (*a4)[3],
            (*a4)[28],
            &UsageValue,
            *(PHIDP_PREPARSED_DATA *)(a1 + 56),
            *(PCHAR *)(a2 + 8),
            *(_DWORD *)a2);
    if ( v10 < 0 )
      break;
    ++v9;
    v12 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)(int)UsageValue,
            (__int64)*a4++,
            v11);
    *v5++ = v12;
    if ( v9 >= 4 )
      return 0LL;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1FA,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
           (const char *)(unsigned int)v10);
}
