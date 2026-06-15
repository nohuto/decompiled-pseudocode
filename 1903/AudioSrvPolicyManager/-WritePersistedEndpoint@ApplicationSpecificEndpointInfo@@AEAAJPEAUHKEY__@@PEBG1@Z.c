/*
 * XREFs of ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x18002F624
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002DC60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F704 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::WritePersistedEndpoint(
        ApplicationSpecificEndpointInfo *this,
        HKEY a2,
        const unsigned __int16 *a3,
        const BYTE *lpData)
{
  int v4; // ecx
  const BYTE *v5; // rax
  __int64 v6; // r10
  signed int v7; // ebx
  DWORD cbData; // ecx
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( lpData )
  {
    v5 = lpData;
    v6 = 130LL;
    do
    {
      if ( !*(_WORD *)v5 )
        break;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    v7 = v6 == 0 ? 0x80070057 : 0;
    if ( v6 )
      v4 = 130 - v6;
    else
      v4 = 0;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( v7 < 0 )
    cbData = 0;
  else
    cbData = 2 * v4;
  if ( v7 >= 0 )
  {
    v10 = RegSetValueExW(a2, a3, 0, 1u, lpData, cbData);
    if ( v10 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x34B,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               (const char *)v10);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
}
