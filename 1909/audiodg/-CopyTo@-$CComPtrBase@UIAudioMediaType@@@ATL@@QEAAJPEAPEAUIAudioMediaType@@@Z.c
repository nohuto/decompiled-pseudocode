/*
 * XREFs of ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A090
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009F34 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000EC94 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400130D0 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400139D0 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14003554C (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140039E68 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A1A4 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A36C (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioMediaType>::CopyTo(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v2 = *a1;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
