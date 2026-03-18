/*
 * XREFs of _RegisterShellHookWindow @ 0x1C010E6B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F5E78 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v2 + 20) < 0 || *(char *)(v2 + 19) < 0 )
  {
    UserSetLastError(87LL, a2);
  }
  else
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v4 + 8) + 240LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, (__int64)a1, 1856, 1);
      return 1LL;
    }
  }
  return 0LL;
}
