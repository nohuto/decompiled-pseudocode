/*
 * XREFs of sub_18000C9C4 @ 0x18000C9C4
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000B0B0 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B6E4 @ 0x18000B6E4 (sub_18000B6E4.c)
 *     sub_18000C914 @ 0x18000C914 (sub_18000C914.c)
 */

char __fastcall sub_18000C9C4(__int64 a1)
{
  signed __int64 v2; // rax

  LODWORD(v2) = GetCurrentThreadId();
  if ( dword_180268BD8 != (_DWORD)v2 )
  {
    if ( _InterlockedIncrement(&dword_180268BDC) < 4 )
    {
      dword_180268BD8 = v2;
      v2 = sub_18000B6E4(0);
      if ( v2 )
        LOBYTE(v2) = sub_18000C914(v2, a1);
      dword_180268BD8 = 0;
    }
    _InterlockedDecrement(&dword_180268BDC);
  }
  return v2;
}
