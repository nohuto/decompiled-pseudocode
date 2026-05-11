/*
 * XREFs of PropertySetDbLevelSideband @ 0x1C0026764
 * Callers:
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CEE8 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DC34 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0020E0C (DeviceRequestPowerUp.c)
 */

NTSTATUS __fastcall PropertySetDbLevelSideband(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int *a5, _DWORD *a6)
{
  __int64 v7; // rax
  int v8; // r11d
  __int64 v9; // rdi
  int v10; // r10d
  NTSTATUS result; // eax
  _DWORD *v12; // rdi
  int v13; // ebx

  v7 = *(_QWORD *)(a1 + 16);
  v8 = -1073741811;
  v9 = *(_QWORD *)(a2 + 128);
  *a6 = 0;
  v10 = *a5;
  if ( *(_DWORD *)(v7 + 528) == 1 )
  {
    if ( (unsigned int)a4 < *(_DWORD *)(a2 + 92) )
    {
      v12 = (_DWORD *)(32LL * (unsigned int)a4 + v9);
      v13 = v12[7];
      if ( v10 <= v13 )
      {
        v13 = *a5;
        if ( v10 < v12[6] )
          v13 = v12[6];
      }
      *a5 = v13;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 136))(a1, a2);
      if ( v8 >= 0 )
      {
        v12[3] = v13;
        *a3 = (_DWORD)a5;
      }
    }
    return v8;
  }
  else
  {
    result = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a5, a4);
    if ( result < 0 )
      return -1073741661;
    else
      *a6 = 1;
  }
  return result;
}
