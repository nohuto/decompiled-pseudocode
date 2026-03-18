/*
 * XREFs of NVMeMaskInterrupt @ 0x1C0016BA0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0004520 (NVMeHwMSIInterrupt.c)
 *     ProcessCompletionQueues @ 0x1C0018C90 (ProcessCompletionQueues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeMaskInterrupt(__int64 a1, char a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 18) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(result + 12) = 1 << a2;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      *(_BYTE *)(a1 + 18) = 1;
    }
  }
  return result;
}
