/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140126560
 * Callers:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     DbgPrint @ 0x1401264E0 (DbgPrint.c)
 *     vDbgPrintEx @ 0x140126530 (vDbgPrintEx.c)
 *     IopDebugPrint @ 0x14029EA38 (IopDebugPrint.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x14030B100 (DbgPrintReturnControlC.c)
 *     vDbgPrintExWithPrefix @ 0x14030B4F0 (vDbgPrintExWithPrefix.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     NtQueryDebugFilterState @ 0x1401266C0 (NtQueryDebugFilterState.c)
 *     RtlStringCbVPrintfA @ 0x140154240 (RtlStringCbVPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     DbgBreakPointWithStatus @ 0x1401CB970 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1401CB980 (DebugPrint.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        ULONG ComponentId,
        ULONG Level,
        const char *a4,
        va_list argList,
        char a6)
{
  __int64 result; // rax
  char *v10; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rdi
  __int64 CurrentIrql; // rsi
  unsigned __int8 v18; // cl
  struct _EX_RUNDOWN_REF *v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // r14
  void (__fastcall *Count)(__int64 *, _QWORD, _QWORD); // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char v23[96]; // [rsp+0h] [rbp-80h] BYREF
  NTSTATUS v24; // [rsp+80h] [rbp+0h]
  NTSTRSAFE_PCSTR pszFormat; // [rsp+88h] [rbp+8h]
  __int64 v26; // [rsp+90h] [rbp+10h] BYREF
  char *v27; // [rsp+98h] [rbp+18h]
  __int64 v28; // [rsp+A0h] [rbp+20h]

  pszFormat = a4;
  v26 = 0LL;
  v27 = 0LL;
  if ( !NtQueryDebugFilterState(ComponentId, Level) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v24 = 0;
  v12 = 0;
  v13 = -1LL;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v23;
    v12 += 128;
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
    v15 = v12 - 1;
    if ( v14 <= v15 )
      v15 = v14;
    memmove(v23, Src, v15);
    v11 = RtlStringCbVPrintfA(&v23[v15], v12 - v15, pszFormat, argList);
    v24 = v11;
    if ( v11 >= 0 )
      break;
  }
  while ( v11 == -2147483643 );
  if ( v11 == -2147483643 )
  {
    v10[v12 - 2] = 10;
    LOWORD(v13) = v12 - 1;
    v10[v12 - 1] = 0;
  }
  else
  {
    do
      ++v13;
    while ( v10[v13] );
  }
  v27 = v10;
  LOWORD(v26) = v13;
  LODWORD(pszFormat) = KiBugCheckActive;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v28 = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v18 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
    v19 = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      do
      {
        v20 = v19 - 3;
        if ( ExAcquireRundownProtection_0(v19 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int64 *, _QWORD, _QWORD))v20[2].Count;
          if ( v16 )
            ExReleaseRundownProtection_0(v16 + 1);
          v16 = v20;
          Count(&v26, ComponentId, Level);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
          v19 = (struct _EX_RUNDOWN_REF *)v20[3].Count;
        }
        else
        {
          v19 = (struct _EX_RUNDOWN_REF *)v19->Count;
        }
      }
      while ( v19 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      LOBYTE(CurrentIrql) = v28;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v16 )
      ExReleaseRundownProtection_0(v16 + 1);
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8((unsigned __int8)CurrentIrql);
    }
  }
  result = DebugPrint(&v26, ComponentId, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
