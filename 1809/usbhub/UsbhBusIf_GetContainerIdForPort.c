/*
 * XREFs of UsbhBusIf_GetContainerIdForPort @ 0x1C001C8D8
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhBusIf_GetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967604553, (__int64)(v6 + 1056), v4);
  if ( (*(_DWORD *)(v8 + 2560) & 1) == 0 )
    return 3221225485LL;
  v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 272);
  if ( v9 )
    return v9(*(_QWORD *)(v7 + 8), (unsigned __int16)v4, a3);
  else
    return 3221225474LL;
}
