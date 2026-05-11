/*
 * XREFs of PropertySetBooleanSideband @ 0x1C0025178
 * Callers:
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C80C (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CDE8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C001FD4C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBooleanSideband(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        _DWORD *a7)
{
  _BYTE *v7; // rbx
  int v9; // r10d
  __int64 v10; // rdi
  NTSTATUS v11; // ecx

  v7 = a6;
  v9 = -1073741811;
  if ( *a6 > 1u )
    return (unsigned int)v9;
  v10 = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 528LL) == 1 )
  {
    if ( (unsigned int)a4 < *(_DWORD *)(a2 + 92) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, _DWORD, int, int *))(a2 + 136))(
             a1,
             a2,
             4LL,
             a6,
             a4,
             1,
             &a5);
      if ( v9 >= 0 )
      {
        *(_BYTE *)(v10 + 12) = *v7;
        *a3 = a5;
      }
    }
    return (unsigned int)v9;
  }
  v11 = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a3, a4);
  if ( v11 < 0 )
    return 3221225635LL;
  *a7 = 1;
  return (unsigned int)v11;
}
