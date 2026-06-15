/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140017CE0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001DCA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14001DCA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || (a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]) )
  {
    if ( *a2 != -1099282551
      || a2[1] != *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data2
      || a2[2] != *(_DWORD *)GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4
      || a2[3] != *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4[4] )
    {
      return (unsigned int)-2147467262;
    }
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 8LL))(
    a1,
    a2,
    a3,
    *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]);
  return v3;
}
