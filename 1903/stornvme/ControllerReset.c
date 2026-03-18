/*
 * XREFs of ControllerReset @ 0x1C0008C6C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000B600 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1)
{
  char v1; // si
  unsigned int v3; // ebp
  int v4; // ebx
  int v5; // eax
  int v6; // r14d
  int v7; // ebx
  const wchar_t *v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  const wchar_t *v11; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v3 = *(_DWORD *)(a1 + 172) / 0xAu;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL);
  if ( (v5 & 1) == 0 && (v4 & 1) != 0 )
  {
    v6 = 0;
    if ( v3 )
    {
      while ( (v5 & 1) == 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) == -1LL )
        {
LABEL_11:
          v1 = 1;
          goto LABEL_12;
        }
        StorPortExtendedFunction(81LL, a1, 10000LL);
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL);
        if ( ++v6 >= v3 )
          break;
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) = v4 & 0xFFFFFFFE;
  _InterlockedOr(v10, 0);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL);
  v7 = 0;
  if ( v3 )
  {
    while ( (v5 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) == -1LL )
        goto LABEL_11;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 28LL);
      if ( ++v7 >= v3 )
        goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  if ( (v5 & 1) == 0 )
    return 1;
  *(_DWORD *)(a1 + 24) = 5;
  v8 = L"Controller Reset failed due to surprise remove";
  if ( !v1 )
    v8 = L"Controller Reset failed";
  v11 = v8;
  StorPortNotification(4108LL, a1, 0LL);
  return 0;
}
