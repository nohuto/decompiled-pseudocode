/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C021AFF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01F8D8C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rdi

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v14 = (void *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v18 = v14;
    if ( v14 )
    {
      memmove(v14, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(a1, v18, v3) >= 0;
      Win32FreePool(v18);
    }
    else
    {
      UserSetLastError(8LL, v15, v16, v17);
    }
  }
  else
  {
    UserSetLastError(87LL, v7, v8, v9);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
