/*
 * XREFs of MiComparePteProtections @ 0x140115BE8
 * Callers:
 *     MiCheckSecuredVad @ 0x14064C0CC (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x1406BEB94 (MiSecureVad.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // rsi
  unsigned __int8 v11; // r15
  int v12; // ecx
  bool v13; // zf
  int v15; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-30h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[6]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, a3, v11, a1, 0LL, &v17, &v15, &v16, &v18);
    v12 = v17;
    if ( !v17 )
    {
      if ( v18 )
        goto LABEL_13;
      v13 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
      v12 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v17 = v12;
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
    a2 = v16;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[6], v11);
  return v6;
}
