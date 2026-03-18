/*
 * XREFs of _GetInputDesktop @ 0x1C01EAD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v6)
    && (unsigned int)SetHandleFlag(v6, 1LL, 1LL) )
  {
    return v6;
  }
  else
  {
    return 0LL;
  }
}
