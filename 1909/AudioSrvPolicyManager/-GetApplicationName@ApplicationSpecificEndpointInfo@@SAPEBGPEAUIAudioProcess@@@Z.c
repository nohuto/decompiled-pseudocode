/*
 * XREFs of ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18002DB14
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010DDC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180012440 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

const unsigned __int16 *__fastcall ApplicationSpecificEndpointInfo::GetApplicationName(struct IAudioProcess *a1)
{
  const unsigned __int16 *result; // rax

  result = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 72LL))(a1);
  if ( !result || !*result )
    return (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 80LL))(a1);
  return result;
}
