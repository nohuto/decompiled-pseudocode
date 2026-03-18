/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154464 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C015455C (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154654 (-IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154738 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAU.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154878 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154A0C (-IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        char a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // r9
  const UNICODE_STRING *v8; // r10

  if ( a4 )
  {
    *((_QWORD *)this + 2) += (a3->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, (a3->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) )
  {
    a2->MaximumLength = v8->MaximumLength;
    a2->Length = v8->Length;
    a2->Buffer = (PWSTR)(v7 + *v6);
    RtlCopyUnicodeString(a2, v8);
    a2->Buffer = (PWSTR)(((__int64)a2->Buffer - *(_QWORD *)this) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
