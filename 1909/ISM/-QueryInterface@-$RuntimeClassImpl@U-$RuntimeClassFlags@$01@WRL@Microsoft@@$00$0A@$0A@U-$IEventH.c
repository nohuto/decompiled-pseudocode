/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *a3 = 0LL;
  if ( (*(_QWORD *)a2 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != 6429730
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00621c22_42e8_529f_9270_836b32931d72.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00621c22_42e8_529f_9270_836b32931d72.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00621c22_42e8_529f_9270_836b32931d72.Data4[4]) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
