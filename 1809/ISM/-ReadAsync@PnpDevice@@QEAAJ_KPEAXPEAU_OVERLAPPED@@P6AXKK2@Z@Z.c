/*
 * XREFs of ?ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z @ 0x180073644
 * Callers:
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180077C34 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDevice::ReadAsync(HANDLE *this, DWORD a2, void *a3, struct _OVERLAPPED *a4)
{
  DWORD LastError; // eax
  int v5; // ecx
  __int64 result; // rax

  a4->Internal = 0LL;
  a4->InternalHigh = 0LL;
  a4->Pointer = 0LL;
  if ( ReadFileEx(this[5], a3, a2, a4, ConsumerControlNexusDevice::HandleReadCompletion) )
    return 0LL;
  LastError = GetLastError();
  v5 = LastError;
  if ( !LastError || LastError == 997 )
    return 0LL;
  result = (unsigned __int16)LastError | 0x80070000;
  if ( v5 <= 0 )
    return (unsigned int)v5;
  return result;
}
