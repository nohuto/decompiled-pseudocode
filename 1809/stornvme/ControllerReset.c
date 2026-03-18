/*
 * XREFs of ControllerReset @ 0x1C000B83C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000DE90 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // eax
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  char v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+48h] [rbp+10h]

  v5 = *(_DWORD *)(a1 + 164) / 0xAu;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL);
  v13 = v6;
  v7 = v14;
  v8 = 0;
  if ( (v6 & 1) == 0 && (v14 & 1) != 0 && (v9 = 0, v5) )
  {
    while ( 1 )
    {
      if ( (v6 & 1) != 0 )
      {
LABEL_6:
        v7 = v14;
        goto LABEL_7;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL) == -1LL )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL);
      ++v9;
      v13 = v6;
      if ( v9 >= v5 )
        goto LABEL_6;
    }
LABEL_12:
    LOBYTE(v10) = v13;
  }
  else
  {
LABEL_7:
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) = v7 & 0xFFFFFFFE;
    _InterlockedOr(v12, 0);
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL);
    v13 = v10;
    if ( v5 )
    {
      while ( (v10 & 1) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL) == -1LL )
          goto LABEL_12;
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 28LL);
        ++v8;
        v13 = v10;
        if ( v8 >= v5 )
          goto LABEL_13;
      }
      return 1;
    }
  }
LABEL_13:
  if ( (v10 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 24) = 5;
    return 0;
  }
  return 1;
}
