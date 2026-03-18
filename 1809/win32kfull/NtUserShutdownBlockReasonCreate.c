/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C0124850
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     _GetAncestor @ 0x1C0124A04 (_GetAncestor.c)
 *     QueueShutdownData @ 0x1C01C3A80 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // rax
  wchar_t *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rcx

  EnterCrit(0LL, 1LL);
  v7 = (_QWORD *)ValidateHwnd(a1);
  v10 = 0LL;
  if ( !v7 )
    goto LABEL_17;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v6 = v7[2];
  if ( *(_QWORD *)(v6 + 424) != CurrentProcessWin32Process )
  {
    v10 = 5LL;
    goto LABEL_17;
  }
  if ( v7 != (_QWORD *)GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v21 = 87LL;
LABEL_21:
    UserSetLastError(v21, v12, v13, v14);
    goto LABEL_17;
  }
  v15 = (wchar_t *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v16 = v15;
  if ( !v15 )
  {
    v21 = 8LL;
    goto LABEL_21;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v16, a3 + 1, (NTSTRSAFE_PCWSTR)a2);
  }
  else
  {
    *v15 = 0;
  }
  v17 = (unsigned __int16)gatomShutdownBlockingReason;
  v18 = v7[15];
  if ( gatomShutdownBlockingReason == word_1C0317660 )
    *(_QWORD *)(v7[5] + 312LL) = 0LL;
  v19 = RealInternalRemoveProp(v18, v17, 1LL);
  if ( v19 )
    Win32FreePool(v19);
  if ( (unsigned int)InternalSetProp((__int64)v7, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v16, 1u) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v10 = 1LL;
  }
  else
  {
    Win32FreePool(v16);
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
