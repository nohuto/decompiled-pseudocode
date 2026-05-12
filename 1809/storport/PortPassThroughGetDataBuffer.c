/*
 * XREFs of PortPassThroughGetDataBuffer @ 0x1C006F9BC
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C006F55C (PortPassThroughSendAsync.c)
 *     PortPassThroughValidate @ 0x1C006F8CC (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughGetDataBuffer(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a3 )
      return v4;
    else
      return v4 + *(_QWORD *)(a2 + 24);
  }
  return result;
}
