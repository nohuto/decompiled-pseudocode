/*
 * XREFs of PdcAcquireRwLockExclusive2 @ 0x180051B38
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x1800673B4 (Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x180133790 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x180133AD0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall PdcAcquireRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  DWORD v4; // eax
  DWORD result; // eax

  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v4 = WaitForSingleObjectEx(*(HANDLE *)a1, 0xEA60u, 0);
    if ( !v4 )
      break;
    if ( v4 == 128 )
      __fastfail(0x24u);
    if ( v4 != 258 )
      goto LABEL_12;
  }
  if ( a2 )
    *a2 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  result = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 8) != result )
LABEL_12:
    __fastfail(5u);
  return result;
}
