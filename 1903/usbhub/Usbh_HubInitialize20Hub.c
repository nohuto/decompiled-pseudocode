/*
 * XREFs of Usbh_HubInitialize20Hub @ 0x1C0026760
 * Callers:
 *     UsbhInitializeTtHub @ 0x1C0026668 (UsbhInitializeTtHub.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubInitialize20Hub(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  int v8; // ecx
  _QWORD *v9; // rbx
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD); // rax
  void (__fastcall *v12)(_QWORD, __int64); // rax
  void (__fastcall *v13)(_QWORD, __int64); // rax

  v6 = FdoExt(a1);
  v7 = FdoExt(a1);
  v8 = v6[642];
  v9 = v7 + 1056;
  if ( (v8 & 1) != 0 )
  {
    v12 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v7 + 565);
    if ( v12 )
    {
      v12(v9[1], a2);
      v8 = v6[642];
    }
  }
  if ( (v8 & 2) != 0 )
  {
    v13 = (void (__fastcall *)(_QWORD, __int64))v9[37];
    if ( v13 )
      v13(v9[1], a2);
  }
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v9[16];
  if ( v10 )
    return v10(v9[1], a2, a3);
  else
    return 3221225474LL;
}
