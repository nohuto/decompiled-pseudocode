/*
 * XREFs of GetKeyEventInputSource @ 0x1C0035B60
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall GetKeyEventInputSource(__int64 a1, __int16 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // di
  int v5; // ebx
  int v8; // r14d

  v4 = 0;
  v5 = 1;
  *a4 = 1;
  v8 = a1;
  if ( a2 != -3 )
  {
    if ( a3 )
    {
      v4 = *(_DWORD *)(a3 + 8) != 0;
    }
    else if ( gbEnforceUIPI && (a1 = *((_QWORD *)gptiCurrent + 53), *(int *)(a1 + 12) < 0)
           || (PVOID)PsGetCurrentProcess(a1) == gpepCSRSS )
    {
      v4 = 1;
    }
  }
  a4[1] = 0;
  if ( v8 )
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
