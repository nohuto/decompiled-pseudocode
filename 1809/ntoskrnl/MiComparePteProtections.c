/*
 * XREFs of MiComparePteProtections @ 0x140088398
 * Callers:
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 * Callees:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // rsi
  unsigned __int8 v11; // r15
  int v12; // ecx
  bool v13; // zf
  unsigned __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, a3, v11, a1, 0LL, &v16, (__int64 *)&v15, &v17);
    v12 = v16;
    if ( !v16 )
    {
      if ( v17 )
        goto LABEL_13;
      v13 = ((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) == 0;
      v12 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
      v16 = v12;
      if ( v13 )
        goto LABEL_13;
    }
    if ( a5 == 1 )
    {
      if ( v12 != a4 )
        goto LABEL_13;
    }
    else if ( v12 == -1
           || (v12 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v13 = (v12 & 4) == 0) : (v13 = (v12 & 7) == 0), v13) )
    {
LABEL_13:
      v6 = -1073741755;
      break;
    }
    a2 = v15;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v11);
  return v6;
}
