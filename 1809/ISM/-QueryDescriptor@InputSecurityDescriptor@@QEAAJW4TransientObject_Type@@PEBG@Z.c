/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180052F08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180059AF0 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x18009F080 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800C5BB4 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800C8BB0 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800D0C70 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x1800D982C (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180106064 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  int TransientObjectSecurityDescriptor; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(a1 + 8) = 1;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(8LL, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-2"
             "616377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
            1u,
            (PSECURITY_DESCRIPTOR *)a1,
            0LL) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x46,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecuritydescriptor.cpp",
               v5);
    *(_BYTE *)(a1 + 8) = 0;
    return 0LL;
  }
  if ( TransientObjectSecurityDescriptor >= 0 )
    return 0LL;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4C,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecuritydescriptor.cpp",
           (const char *)(unsigned int)TransientObjectSecurityDescriptor);
}
