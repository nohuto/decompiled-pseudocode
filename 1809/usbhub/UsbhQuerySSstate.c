/*
 * XREFs of UsbhQuerySSstate @ 0x1C001E944
 * Callers:
 *     UsbhHubSSH_PnpStart @ 0x1C001E4E0 (UsbhHubSSH_PnpStart.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhQuerySSstate(__int64 a1, _BYTE *a2)
{
  _DWORD *v3; // rax
  int v4; // ecx
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  v6 = 0;
  v7 = 0;
  v3 = FdoExt(a1);
  if ( *((_QWORD *)v3 + 539) )
  {
    v4 = (*((__int64 (__fastcall **)(_QWORD, int *, __int64, unsigned int *))v3 + 539))(
           *((_QWORD *)v3 + 529),
           &v7,
           10LL,
           &v6);
    if ( v4 >= 0 )
    {
      if ( v6 < 0xA )
        return (unsigned int)-1073741811;
      else
        *a2 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v4;
}
