/*
 * XREFs of KiRaiseException @ 0x14029A0B0
 * Callers:
 *     NtRaiseException @ 0x1401BC6F0 (NtRaiseException.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1400A1E00 (RtlpSanitizeContextFlags.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiSetupForInstrumentationReturn @ 0x14013F97C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1401BBCD0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     RtlpReadExtendedContext @ 0x140620F80 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r14
  char PreviousMode; // r12
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // ebx
  char *v21; // rax
  struct _EXCEPTION_RECORD *v22; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v25; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // [rsp+20h] [rbp-10h]
  unsigned int v28; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp+4h]
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v31; // [rsp+40h] [rbp+10h]
  __int64 v32; // [rsp+48h] [rbp+18h]
  _BYTE v33[24]; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v34; // [rsp+68h] [rbp+38h]

  v7 = a2;
  Src = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_18:
    LOBYTE(v27) = PreviousMode;
    KeContextToKframes(a4, a3, v7, *(_DWORD *)(v7 + 48), v27);
    v22 = (struct _EXCEPTION_RECORD *)Src;
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
    return 0LL;
  }
  v9 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v9 = 0x7FFFFFFF0000LL;
  v28 = *(_DWORD *)v9;
  result = RtlpSanitizeContextFlags(&v28);
  if ( (int)result >= 0 )
  {
    v11 = v28;
    result = RtlGetExtendedContextLength(v28);
    if ( (int)result >= 0 )
    {
      v12 = v29 + 15LL;
      if ( v12 <= v29 )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext((__int64)&v28, v11);
      if ( (int)result >= 0 )
      {
        v18 = v32 - 1232;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, v32, v11, v7, 0LL);
        if ( (int)result >= 0 )
        {
          v7 = v18;
          v19 = (__int64)Src + 24;
          if ( (unsigned __int64)Src + 24 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          v20 = *(_DWORD *)v19;
          v31 = v20;
          if ( v20 > 0xF )
            return 3221225485LL;
          v29 = 8 * v20 + 32;
          v21 = (char *)Src + v29;
          if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v33, Src, 8 * v20 + 32);
          Src = v33;
          v34 = v20;
          goto LABEL_18;
        }
      }
    }
  }
  return result;
}
