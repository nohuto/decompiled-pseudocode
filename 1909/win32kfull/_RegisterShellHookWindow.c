/*
 * XREFs of _RegisterShellHookWindow @ 0x1C0115D50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F0F60 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 )
  {
    UserSetLastError(87LL, a2, a3, a4);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 3);
    if ( v6 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v6 + 8) + 240LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, (__int64)a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
