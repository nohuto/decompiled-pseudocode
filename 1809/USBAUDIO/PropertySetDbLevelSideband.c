/*
 * XREFs of PropertySetDbLevelSideband @ 0x1C0025624
 * Callers:
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C31C (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CDE8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C001FD4C (DeviceRequestPowerUp.c)
 */

NTSTATUS __fastcall PropertySetDbLevelSideband(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  _DWORD *v7; // rbx
  __int64 v9; // rax
  int v10; // r11d
  int *v11; // r8
  __int64 v12; // rdi
  int v13; // r10d
  NTSTATUS result; // eax
  _DWORD *v15; // rdi
  int v16; // ebx

  v7 = a7;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = -1073741811;
  v11 = a6;
  v12 = *(_QWORD *)(a2 + 128);
  *a7 = 0;
  v13 = *v11;
  if ( *(_DWORD *)(v9 + 528) == 1 )
  {
    if ( (unsigned int)a4 < *(_DWORD *)(a2 + 92) )
    {
      v15 = (_DWORD *)(32LL * (unsigned int)a4 + v12);
      v16 = v15[7];
      if ( v13 <= v16 )
      {
        v16 = *v11;
        if ( v13 < v15[6] )
          v16 = v15[6];
      }
      *v11 = v16;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *, _DWORD, int, int *))(a2 + 136))(
              a1,
              a2,
              4LL,
              v11,
              a4,
              1,
              &a5);
      if ( v10 >= 0 )
      {
        v15[3] = v16;
        *a3 = a5;
      }
    }
    return v10;
  }
  else
  {
    result = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)v11, a4);
    if ( result < 0 )
      return -1073741661;
    else
      *v7 = 1;
  }
  return result;
}
