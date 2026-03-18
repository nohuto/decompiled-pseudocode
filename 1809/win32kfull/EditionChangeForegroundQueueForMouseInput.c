/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C0007DD0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rax
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  if ( !a2
    || (v4 = *(_QWORD *)(v2 + 16), v5 = *a2, v6 = *(_QWORD *)(v4 + 432), v7 = *(_QWORD *)(v6 + 428), !gbEnforceUIPI)
    || (unsigned int)v5 > (unsigned int)v7
    || (_DWORD)v5 == (_DWORD)v7
    && ((v12 = HIDWORD(v5), v13 = HIDWORD(v7), (_DWORD)v12 == (_DWORD)v13) || (_DWORD)v12 == -1 || (_DWORD)v13 == -1) )
  {
    CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 72);
    if ( !(unsigned int)IsIndependentInputWindow((const struct tagWND *)v2)
      || (CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v2)) != 0LL )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 40) + 27LL) & 8) != 0
        || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) != 0 )
      {
        return 1LL;
      }
      if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v17;
        v17[1] = CompositionInputWindowUIOwner;
        _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
      }
      xxxSetForegroundWindow2(CompositionInputWindowUIOwner, 0LL, 0x40u);
      if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
        ThreadUnlock1();
      if ( !a2 )
        return 1LL;
      if ( !gpqForeground )
        return 1LL;
      v9 = *(_QWORD *)(gpqForeground + 428LL);
      v10 = *a2;
      if ( !gbEnforceUIPI )
        return 1LL;
      if ( (unsigned int)v10 > (unsigned int)v9 )
        return 1LL;
      if ( (_DWORD)v10 == (_DWORD)v9 )
      {
        v14 = HIDWORD(v9);
        v15 = HIDWORD(v10);
        if ( (_DWORD)v15 == (_DWORD)v14 || (_DWORD)v15 == -1 || (_DWORD)v14 == -1 )
          return 1LL;
      }
      MSGLUA_GPQFOREGROUND();
    }
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, v4, v6, *(_QWORD *)(v6 + 428), 1);
  }
  return 0LL;
}
