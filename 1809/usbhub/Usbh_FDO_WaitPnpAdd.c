/*
 * XREFs of Usbh_FDO_WaitPnpAdd @ 0x1C001D2E0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001D39C (UsbhReleaseFdoPnpLock.c)
 *     UsbhSetFdoPnpState @ 0x1C001EDBC (UsbhSetFdoPnpState.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     Usbh_PnpRemove @ 0x1C0050824 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpAdd(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  int v4; // esi
  char *v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  int v8; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v4 = 0;
  do
  {
    v5 = (char *)&HubModule + 56 * v2;
    if ( v5 )
    {
      v6 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v5 + 1);
      if ( v6 )
      {
        v8 = v6(v1, a1);
        if ( v8 < 0 )
          v4 = v8;
      }
    }
    ++v2;
  }
  while ( v2 < 0xA );
  FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  if ( v4 < 0 )
  {
    Usbh_PnpRemove(a1, 6LL);
  }
  else
  {
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 2LL, 1LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  }
  return (unsigned int)v4;
}
