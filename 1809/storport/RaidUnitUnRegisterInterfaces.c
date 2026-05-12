/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C001E2D4
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C002537C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0046F98 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x1C001E1E0 (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // rdx
  void (__fastcall *v5)(__int64, __int64); // rax
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 96);
  if ( v1 )
    v2 = PortMapDeleteLunEntry(*(_DWORD *)(v1 + 56), (unsigned __int8)v3, BYTE1(v3), BYTE2(v3));
  if ( *(_QWORD *)(a1 + 1840) && (*(_BYTE *)(a1 + 450) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1832), 0);
    *(_BYTE *)(a1 + 450) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 1960) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1952), 0);
  v5 = *(void (__fastcall **)(__int64, __int64))(a1 + 904);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 832);
    if ( v7 )
    {
      v5(v7, v3);
      memset((void *)(a1 + 824), 0, 0x58uLL);
    }
  }
  return v2;
}
