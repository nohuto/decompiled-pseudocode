/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C00077F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rax
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  if ( a2 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = *a2;
    v6 = *(_QWORD *)(v4 + 424);
    v7 = *(_QWORD *)(v6 + 428);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v5 <= (unsigned int)v7 )
      {
        if ( (_DWORD)v5 != (_DWORD)v7
          || (v8 = HIDWORD(v5), v9 = HIDWORD(v7), (_DWORD)v8 != (_DWORD)v9) && (_DWORD)v8 != -1 && (_DWORD)v9 != -1 )
        {
          EtwTraceUIPIInputError(gptiCurrent, v4, v6, *(_QWORD *)(v6 + 428), 1);
          return 0LL;
        }
      }
    }
  }
  CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 72);
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v2) )
  {
    if ( (unsigned int)IsMessageOnlyWindow(v2) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v2);
      if ( !CompositionInputWindowUIOwner )
        return 0LL;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 40) + 27LL) & 8) == 0
    && (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) == 0 )
  {
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v17;
      v17[1] = CompositionInputWindowUIOwner;
      _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
    }
    xxxSetForegroundWindow2(CompositionInputWindowUIOwner);
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
      ThreadUnlock1();
    if ( a2 )
    {
      if ( gpqForeground )
      {
        v12 = *(_QWORD *)(gpqForeground + 428LL);
        v13 = *a2;
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v13 <= (unsigned int)v12 )
          {
            if ( (_DWORD)v13 != (_DWORD)v12
              || (v14 = HIDWORD(v12), v15 = HIDWORD(v13), (_DWORD)v15 != (_DWORD)v14)
              && (_DWORD)v15 != -1
              && (_DWORD)v14 != -1 )
            {
              MSGLUA_GPQFOREGROUND();
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 1LL;
}
