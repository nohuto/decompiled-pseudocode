/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874
 * Callers:
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(_QWORD *a1, int a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int16 v4; // si
  __int64 v5; // rdx
  struct tagBWL *v6; // rdi
  unsigned __int64 *i; // rbx
  __int64 v8; // rax

  v2 = a1[5];
  result = *(_WORD *)(v2 + 286) != 0;
  if ( a2 != (_DWORD)result )
  {
    v4 = a2 ? *(_WORD *)(v2 + 284) : 0;
    result = (__int64)BuildHwndList(a1, 1, 0LL);
    v6 = (struct tagBWL *)result;
    if ( result )
    {
      for ( i = (unsigned __int64 *)(result + 32); *i != 1; ++i )
      {
        LOBYTE(v5) = 1;
        v8 = HMValidateHandleNoSecure(*i, v5);
        if ( v8 )
          *(_WORD *)(*(_QWORD *)(v8 + 40) + 286LL) = v4;
      }
      return FreeHwndList(v6);
    }
  }
  return result;
}
