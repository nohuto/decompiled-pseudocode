/*
 * XREFs of GetKeyEventInputSource @ 0x1C0056750
 * Callers:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(int a1, __int16 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // di
  int v5; // ebx

  v4 = 0;
  v5 = 1;
  *a4 = 1;
  if ( a2 != -3 )
  {
    if ( a3 )
    {
      v4 = *(_DWORD *)(a3 + 8) != 0;
    }
    else if ( gbEnforceUIPI && *(int *)(*((_QWORD *)gptiCurrent + 52) + 12LL) < 0
           || (PVOID)PsGetCurrentProcess() == gpepCSRSS )
    {
      v4 = 1;
    }
  }
  a4[1] = 0;
  if ( a1 )
  {
    if ( !v4 )
    {
      v5 = 4;
      if ( a2 != -3 )
        v5 = 2;
    }
  }
  a4[1] = v5;
}
