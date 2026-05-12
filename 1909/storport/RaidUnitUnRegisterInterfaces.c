/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C0019C50
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00457F8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x1C0019B30 (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024DC0 (memset.c)
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
  if ( *(_QWORD *)(a1 + 1840) && (*(_BYTE *)(a1 + 450) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1832), 0);
    *(_BYTE *)(a1 + 450) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 1960) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1952), 0);
  v5 = *(void (**)(void))(a1 + 928);
  if ( v5 && *(_QWORD *)(a1 + 856) )
  {
    v5();
    memset((void *)(a1 + 848), 0, 0x58uLL);
  }
  return v4;
}
