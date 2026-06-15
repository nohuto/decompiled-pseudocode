/*
 * XREFs of ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18002DC14
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010E0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180012470 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

const unsigned __int16 *__fastcall ApplicationSpecificEndpointInfo::GetApplicationName(struct IAudioProcess *a1)
{
  const unsigned __int16 *result; // rax

  result = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 72LL))(a1);
  if ( !result || !*result )
    return (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 80LL))(a1);
  return result;
}
