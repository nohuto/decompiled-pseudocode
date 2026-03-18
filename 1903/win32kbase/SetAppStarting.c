/*
 * XREFs of SetAppStarting @ 0x1C0090640
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AC440 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetAppStarting(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  v1 = 0LL;
  result = gppiStarting;
  *(_QWORD *)(a1 + 368) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = IsSetRITTimerSupported();
    if ( (int)result >= 0 )
    {
      result = SetRITTimer(qword_1C0214FD8, (unsigned int)(gdwHungAppTimeout + 30000), CheckAppStarting, 1LL);
      v1 = result;
    }
    qword_1C0214FD8 = v1;
  }
  return result;
}
