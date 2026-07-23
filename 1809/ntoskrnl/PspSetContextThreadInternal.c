/*
 * XREFs of PspSetContextThreadInternal @ 0x140621A30
 * Callers:
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x1406257B4 (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14088CB50 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14088CCA0 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140890030 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KeVerifyContextRecord @ 0x1400A1BC8 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1400A1D40 (RtlpSanitizeContextFlags.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14013A474 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401C5390 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpReadExtendedContext @ 0x140621F80 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406AA420 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, CONTEXT *a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  int result; // eax
  struct _KPROCESS *v11; // rbx
  int v12; // ebx
  char v13; // al
  __int64 v14; // rcx
  __int64 p_ContextFlags; // rax
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // edx
  int v19; // ecx
  PETHREAD *v20; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  PETHREAD v26; // [rsp+98h] [rbp+58h] BYREF
  char v27; // [rsp+A8h] [rbp+68h]
  char v28; // [rsp+A9h] [rbp+69h]
  int v29; // [rsp+ACh] [rbp+6Ch]
  _BYTE v30[24]; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = (__int64)&a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= 0x7FFFFFFF0000LL )
      p_ContextFlags = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)p_ContextFlags;
  }
  else
  {
    ContextFlags = a2->ContextFlags;
  }
  result = RtlpSanitizeContextFlags(&ContextFlags);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      Context = a2;
      goto LABEL_6;
    }
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, ContextFlags, &ContextEx);
      if ( result >= 0 )
      {
        Context = (PCONTEXT)&ContextEx[-39].XState;
        LOBYTE(v18) = 1;
        result = RtlpReadExtendedContext(v19, v18, (_DWORD)ContextEx, ContextFlags, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 )
          {
            if ( (Thread->MiscFlags & 0x400) != 0 )
              return -1073741776;
            v11 = IoThreadToProcess(CurrentThread);
            if ( IoThreadToProcess(Thread) == v11 )
            {
              v12 = KeVerifyContextRecord((__int64)Thread, (__int64)Context);
              if ( v12 < 0 )
                return v12;
            }
          }
          v27 = a4;
          v13 = v28 ^ (v28 ^ (2 * a5)) & 2;
          if ( Thread == CurrentThread )
          {
            v25 = 1LL;
            v26 = Thread;
            v28 = v13 & 0xFE;
            --CurrentThread->SpecialApcDisable;
            v20 = &v26;
            PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, &v25);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_12:
            v12 = v29;
            if ( v29 >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v14) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v14, Thread, Context, ContextFlags, v20);
            }
            return v12;
          }
          v28 = v13 | 1;
          KeInitializeGate((__int64)v30);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)v30, 0);
            goto LABEL_12;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
