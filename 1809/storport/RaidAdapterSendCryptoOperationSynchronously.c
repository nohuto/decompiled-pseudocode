/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x1C00398DC
 * Callers:
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C00386B0 (RaidAdapterProgramCryptoKeyRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-10h]

  if ( !*(_QWORD *)(a1 + 5768) || !(unsigned int)RaidIsAdapterControlSupported(a1, 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = RaCallMiniportAdapterControl(a1 + 312);
  if ( (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0LL;
    BugCheckParameter2 = 0LL;
    RaidDriverGetName(v6, (__int64)&v7);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2, 1uLL, 0LL);
  }
  return result;
}
