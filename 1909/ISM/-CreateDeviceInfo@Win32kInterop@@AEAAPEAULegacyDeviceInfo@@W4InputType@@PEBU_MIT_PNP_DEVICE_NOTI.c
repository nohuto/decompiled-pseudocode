/*
 * XREFs of ?CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180014494
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800128D8 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

_DWORD *__fastcall Win32kInterop::CreateDeviceInfo(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v5; // rbx
  unsigned int v6; // r14d

  v5 = operator new(0x620uLL);
  memset_0(v5, 0, 0x620uLL);
  v5[2] = 1568;
  *v5 = *(_DWORD *)(a3 + 4);
  v5[1] = a2;
  *((_BYTE *)v5 + 12) = *(_DWORD *)(a3 + 12) != 0;
  v5[4] = *(_DWORD *)(a3 + 16);
  v5[22] = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 48);
  if ( v6 )
  {
    memcpy_0(v5 + 23, (const void *)(a3 + 52), 2LL * v6);
    if ( v6 > 1 )
      *((_WORD *)v5 + 47) = 92;
  }
  if ( a2 == 2 )
  {
    *(_QWORD *)(v5 + 15) = *(_QWORD *)(a3 + 20);
    v5[17] = *(_DWORD *)(a3 + 28);
  }
  else if ( a2 == 4 )
  {
    *(_OWORD *)(v5 + 15) = *(_OWORD *)(a3 + 20);
    *(_QWORD *)(v5 + 19) = *(_QWORD *)(a3 + 36);
    v5[21] = *(_DWORD *)(a3 + 44);
  }
  return v5;
}
