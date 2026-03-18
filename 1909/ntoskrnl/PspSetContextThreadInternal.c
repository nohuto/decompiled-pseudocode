/*
 * XREFs of PspSetContextThreadInternal @ 0x1405E5AE0
 * Callers:
 *     WbSetTrapFrame @ 0x1405CA2D0 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x1408C96C0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1408C9810 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14001710C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14001BD40 (KeVerifyContextRecord.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14013C9B4 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401CC3D0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E7EB4 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406C916C (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  struct _KPROCESS *v11; // rbx
  int v12; // ebx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // edx
  int v19; // ecx
  _QWORD *v20; // [rsp+20h] [rbp-20h]
  unsigned int v21; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp+4h]
  __int64 v23; // [rsp+48h] [rbp+8h]
  _QWORD v24[48]; // [rsp+50h] [rbp+10h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v15 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v15;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v21);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      v24[15] = a2;
      goto LABEL_6;
    }
    result = RtlGetExtendedContextLength(v21);
    if ( (int)result >= 0 )
    {
      v16 = v22 + 15LL;
      if ( v16 <= v22 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      v24[15] = &v21;
      memset(&v21, 0, v22);
      result = RtlInitializeExtendedContext(v24[15], v21);
      if ( (int)result >= 0 )
      {
        v24[15] = v23 - 1232;
        LOBYTE(v18) = 1;
        result = RtlpReadExtendedContext(v19, v18, v23, v21, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 )
          {
            if ( (Thread->MiscFlags & 0x400) != 0 )
              return (unsigned int)-1073741776;
            v11 = IoThreadToProcess(CurrentThread);
            if ( IoThreadToProcess(Thread) == v11 )
            {
              v12 = KeVerifyContextRecord((__int64)Thread, v24[15]);
              if ( v12 < 0 )
                return (unsigned int)v12;
            }
          }
          LOBYTE(v24[11]) = a4;
          v13 = BYTE1(v24[11]) ^ (BYTE1(v24[11]) ^ (2 * a5)) & 2;
          if ( Thread == CurrentThread )
          {
            v24[8] = 1LL;
            v24[9] = Thread;
            BYTE1(v24[11]) = v13 & 0xFE;
            --CurrentThread->SpecialApcDisable;
            v20 = &v24[9];
            PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, &v24[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_12:
            v12 = HIDWORD(v24[11]);
            if ( v24[11] >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v14) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v14, Thread, v24[15], v21, v20);
            }
            return (unsigned int)v12;
          }
          BYTE1(v24[11]) = v13 | 1;
          KeInitializeGate((__int64)&v24[12]);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)&v24[12], 0);
            goto LABEL_12;
          }
          return (unsigned int)-1073741823;
        }
      }
    }
  }
  return result;
}
