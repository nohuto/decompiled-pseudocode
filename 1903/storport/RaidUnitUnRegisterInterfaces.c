/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C001C714
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C0021978 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0044408 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D154 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x1C001C5F4 (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = PortMapDeleteLunEntry(*(_DWORD *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 1584) && (*(_BYTE *)(a1 + 162) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1576), 0);
    *(_BYTE *)(a1 + 162) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 1704) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1696), 0);
  v5 = *(void (**)(void))(a1 + 672);
  if ( v5 && *(_QWORD *)(a1 + 600) )
  {
    v5();
    memset((void *)(a1 + 592), 0, 0x58uLL);
  }
  return v4;
}
