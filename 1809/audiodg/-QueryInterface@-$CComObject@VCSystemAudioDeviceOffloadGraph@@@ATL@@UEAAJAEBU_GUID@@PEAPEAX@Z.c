/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140039670
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E1B0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E1C0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E1D0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E1E0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E1F0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E200 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E210 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E220 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v7; // rdi
  _DWORD *v8; // rsi
  __int64 v9; // rbx

  if ( a1 )
  {
    if ( !a3 )
      return 2147500035LL;
    *a3 = 0LL;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = a1;
      return result;
    }
    v7 = &unk_14006A110;
    while ( 1 )
    {
      v8 = (_DWORD *)*(v7 - 2);
      if ( !v8 || *v8 == *a2 && v8[1] == a2[1] && v8[2] == a2[2] && v8[3] == a2[3] )
      {
        if ( *v7 == 1LL )
        {
          v9 = a1 + *(v7 - 1);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          result = 0LL;
          *a3 = v9;
          return result;
        }
        result = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
        if ( !(_DWORD)result || v8 && (int)result < 0 )
          return result;
      }
      v7 += 3;
      if ( !*v7 )
        return 2147500034LL;
    }
  }
  return 2147942487LL;
}
