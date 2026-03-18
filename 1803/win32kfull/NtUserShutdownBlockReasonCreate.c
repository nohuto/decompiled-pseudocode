/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C0104AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetAncestor @ 0x1C0104C60 (_GetAncestor.c)
 *     QueueShutdownData @ 0x1C01A2190 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v10 = 0LL;
  if ( !v7 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process )
  {
    v10 = 5LL;
    goto LABEL_15;
  }
  if ( v7 != GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v17 = 87LL;
LABEL_20:
    UserSetLastError(v17, v12);
    goto LABEL_15;
  }
  v13 = (wchar_t *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v14 = v13;
  if ( !v13 )
  {
    v17 = 8LL;
    goto LABEL_20;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v14, a3 + 1, (NTSTRSAFE_PCWSTR)a2);
  }
  else
  {
    *v13 = 0;
  }
  v15 = RealInternalRemoveProp(*(_QWORD *)(v7 + 120), (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v15 )
    Win32FreePool(v15);
  if ( (unsigned int)RealInternalSetProp(v7 + 120, (unsigned __int16)gatomShutdownBlockingReason, v14, 1LL) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v10 = 1LL;
  }
  else
  {
    Win32FreePool(v14);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
