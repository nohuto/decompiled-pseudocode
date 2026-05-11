/*
 * XREFs of PropertySetBooleanSideband @ 0x1C00262F4
 * Callers:
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D594 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DCC4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0020E2C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBooleanSideband(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _BYTE *a5, _DWORD *a6)
{
  int v7; // r10d
  __int64 v8; // rdi
  NTSTATUS v9; // ecx

  v7 = -1073741811;
  if ( *a5 > 1u )
    return (unsigned int)v7;
  v8 = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 528LL) == 1 )
  {
    if ( (unsigned int)a4 < *(_DWORD *)(a2 + 92) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(a2 + 136))(a1, a2, a5);
      if ( v7 >= 0 )
      {
        *(_BYTE *)(v8 + 12) = *a5;
        *a3 = (_DWORD)a5;
      }
    }
    return (unsigned int)v7;
  }
  v9 = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a3, a4);
  if ( v9 < 0 )
    return 3221225635LL;
  *a6 = 1;
  return (unsigned int)v9;
}
