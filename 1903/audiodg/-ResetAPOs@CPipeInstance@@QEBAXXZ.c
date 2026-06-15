/*
 * XREFs of ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000ECA4
 * Callers:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000EC10 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A0A0 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::ResetAPOs(CPipeInstance *this)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  int v3; // eax
  int (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 2 )
    {
      v6 = 0LL;
      v3 = ATL::CComPtrBase<IAudioMediaType>::CopyTo((_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL), &v6);
      v4 = v6;
      if ( v3 >= 0 )
      {
        v5 = 0LL;
        if ( (**v6)(v6, &GUID_0ef25615_b134_4fba_80e3_e3ea2f74206e, &v5) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( v4 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    }
  }
}
