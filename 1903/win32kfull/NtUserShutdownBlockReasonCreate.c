/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C012ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     _GetAncestor @ 0x1C012EF14 (_GetAncestor.c)
 *     InternalRemoveProp @ 0x1C0164654 (InternalRemoveProp.c)
 *     QueueShutdownData @ 0x1C01D6D80 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
  v6 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process )
  {
    v8 = 5LL;
    goto LABEL_15;
  }
  if ( v7 != GetAncestor(v7, 2LL) || a3 > 0x101 )
  {
    v17 = 87LL;
LABEL_19:
    UserSetLastError(v17, v10, v11, v12);
    goto LABEL_15;
  }
  v13 = (char *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v14 = v13;
  if ( !v13 )
  {
    v17 = 8LL;
    goto LABEL_19;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v14, a3 + 1, (char *)a2);
  }
  else
  {
    *(_WORD *)v13 = 0;
  }
  v15 = InternalRemoveProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v15 )
    Win32FreePool(v15);
  if ( (unsigned int)InternalSetProp(v7, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v14, 1u) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v8 = 1LL;
  }
  else
  {
    Win32FreePool(v14);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
