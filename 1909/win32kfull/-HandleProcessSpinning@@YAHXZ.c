/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C003EC00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C012FE2C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  _BOOL8 v1; // rdx
  int v2; // r8d
  int v4; // eax

  v0 = *(_QWORD *)(gptiCurrent + 472LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v4 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v4 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 480LL) = v4 | 0x400;
      PriorityBoost::UpdateProcessPriorityForSpinning(gptiCurrent, (struct tagTHREADINFO *)v1);
    }
  }
  return 1LL;
}
