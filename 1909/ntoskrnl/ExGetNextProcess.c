/*
 * XREFs of ExGetNextProcess @ 0x1406391C8
 * Callers:
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 */

_DWORD *__fastcall ExGetNextProcess(PVOID Object, char a2)
{
  _DWORD *result; // rax
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    result = (_DWORD *)PsGetNextProcess(Object);
    Object = result;
    if ( !result )
      break;
    if ( (result[195] & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(result, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
  return result;
}
