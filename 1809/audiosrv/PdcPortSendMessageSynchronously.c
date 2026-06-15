/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x180133DC0
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x180133790 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, _DWORD *a2)
{
  int v4; // edi

  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  if ( *(_QWORD *)(a1 + 8) )
  {
    a2[11] = 4;
    memset_0(a2, 0, 0x28uLL);
    *a2 = 52429560;
    v4 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(a1 + 8), 0x20000LL, a2);
    if ( v4 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 124));
  }
  else
  {
    v4 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
  return (unsigned int)v4;
}
