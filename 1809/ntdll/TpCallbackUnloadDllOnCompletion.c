/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x180083210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  __int64 v2; // r8

  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_QWORD *)Instance + 25) )
  {
    TppRaiseInvalidParameter(Instance, DllHandle, v2);
  }
  else
  {
    *((_QWORD *)Instance + 25) = DllHandle;
    *((_DWORD *)Instance + 36) |= 0x80u;
  }
}
