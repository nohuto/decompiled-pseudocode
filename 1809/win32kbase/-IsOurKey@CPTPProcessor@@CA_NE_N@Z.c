/*
 * XREFs of ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C014ADB4
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C014B38C (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPProcessor::IsOurKey(unsigned __int8 a1, char a2)
{
  char v2; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int8 v6; // cl
  unsigned __int64 v7; // rax
  __int64 v8; // rcx

  v2 = 0;
  if ( !a2 && !_InterlockedCompareExchange64(&qword_1C01D1460, 0LL, 0LL) )
    return 0;
  if ( (unsigned __int8)(a1 - 48) <= 0x3Fu )
  {
    v4 = 0xFFFF07FFFFFE03FFuLL;
    if ( _bittest64((const __int64 *)&v4, (unsigned __int8)(a1 - 48)) )
      return 1;
  }
  if ( a1 <= 0x20u )
  {
    v5 = 0x100002200LL;
    if ( _bittest64(&v5, a1) )
      return 1;
  }
  v6 = a1 + 70;
  if ( v6 <= 0x25u )
  {
    v7 = v6;
    v8 = 0x3E0000007FLL;
    if ( _bittest64(&v8, v7) )
      return 1;
  }
  return v2;
}
