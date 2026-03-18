/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01F3920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01D43BC (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  GUID *v12; // rax
  __int64 v13; // rdx
  const GUID *v14; // rdi

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v12 = (GUID *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v14 = v12;
    if ( v12 )
    {
      memmove(v12, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(a1, v14, v3) >= 0;
      Win32FreePool(v14);
    }
    else
    {
      UserSetLastError(8LL, v13);
    }
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
