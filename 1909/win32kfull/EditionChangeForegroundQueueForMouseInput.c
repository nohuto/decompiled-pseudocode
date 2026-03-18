/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C000B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // si
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    v4 = 1;
    if ( !(unsigned __int8)CheckAccess(a2, *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL) + 436LL) )
    {
      EtwTraceUIPIInputError(
        gptiCurrent,
        *(_QWORD *)(v3 + 16),
        *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL) + 436LL),
        1);
      return 0LL;
    }
  }
  else
  {
    v4 = 0;
  }
  CompositionInputWindowUIOwner = (struct tagWND *)v3;
  if ( !(unsigned int)IsIndependentInputWindow((const struct tagWND *)v3)
    || (CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v3)) != 0LL )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 40) + 27LL) & 8) != 0
      || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) != 0 )
    {
      return 1LL;
    }
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v8 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v8;
      v9 = CompositionInputWindowUIOwner;
      HMLockObject(CompositionInputWindowUIOwner);
    }
    xxxForceForegroundWindowNoRestoreFocus(CompositionInputWindowUIOwner, 0LL);
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v3 )
      ThreadUnlock1();
    if ( !v4 || !gpqForeground || (unsigned __int8)CheckAccess(a2, gpqForeground + 436LL) )
      return 1LL;
    MSGLUA_GPQFOREGROUND();
  }
  return 0LL;
}
