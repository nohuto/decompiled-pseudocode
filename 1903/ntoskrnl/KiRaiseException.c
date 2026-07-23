/*
 * XREFs of KiRaiseException @ 0x1402B14B0
 * Callers:
 *     NtRaiseException @ 0x1401C4510 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140016D1C (RtlpSanitizeContextFlags.c)
 *     KiSetupForInstrumentationReturn @ 0x14014441C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1401C3C50 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 */

int __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char PreviousMode; // r12
  __int64 v9; // rax
  int result; // eax
  ULONG v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  CONTEXT_CHUNK *p_XState; // rsi
  __int64 v19; // rax
  unsigned int v20; // ebx
  char *v21; // rax
  EXCEPTION_RECORD *v22; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v25; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v31; // [rsp+40h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+18h] BYREF
  _DWORD v33[40]; // [rsp+50h] [rbp+20h] BYREF

  Src = a1;
  memset(v33, 0, 0x98uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_18:
    LOBYTE(v27) = PreviousMode;
    KeContextToKframes(a4, a3, a2, *(_DWORD *)(a2 + 48), v27);
    v22 = (EXCEPTION_RECORD *)Src;
    *(_DWORD *)Src &= ~0x10000000u;
    KiDispatchException(v22, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        KiSetupForInstrumentationReturn(a4);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v25 && CurrentIrql < v25 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
    }
    return 0;
  }
  v9 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v9 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v9;
  result = RtlpSanitizeContextFlags(&ContextFlags);
  if ( result >= 0 )
  {
    v11 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v12 = ContextLength + 15LL;
      if ( v12 <= ContextLength )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v11, &ContextEx);
      if ( result >= 0 )
      {
        p_XState = &ContextEx[-39].XState;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, (_DWORD)ContextEx, v11, a2, 0LL);
        if ( result >= 0 )
        {
          a2 = (__int64)p_XState;
          v19 = (__int64)Src + 24;
          if ( (unsigned __int64)Src + 24 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          v20 = *(_DWORD *)v19;
          v31 = v20;
          if ( v20 > 0xF )
            return -1073741811;
          ContextLength = 8 * v20 + 32;
          v21 = (char *)Src + ContextLength;
          if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v33, Src, 8 * v20 + 32);
          Src = v33;
          v33[6] = v20;
          goto LABEL_18;
        }
      }
    }
  }
  return result;
}
