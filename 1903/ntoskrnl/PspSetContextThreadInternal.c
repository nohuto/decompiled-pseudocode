/*
 * XREFs of PspSetContextThreadInternal @ 0x1405E5310
 * Callers:
 *     WbSetTrapFrame @ 0x1405C9DD0 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x1408C9DE0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1408C9F30 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140016D1C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14001B950 (KeVerifyContextRecord.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14013C3C4 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401CB850 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406CA754 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  int result; // eax
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
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v24[48]; // [rsp+50h] [rbp+10h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v15 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v15;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      v24[15] = a2;
      goto LABEL_6;
    }
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      v24[15] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)v24[15], ContextFlags, &ContextEx);
      if ( result >= 0 )
      {
        v24[15] = (char *)ContextEx - 1232;
        LOBYTE(v18) = 1;
        result = RtlpReadExtendedContext(v19, v18, (_DWORD)ContextEx, ContextFlags, a2, 0LL);
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
              v12 = KeVerifyContextRecord((__int64)Thread, v24[15]);
              if ( v12 < 0 )
                return v12;
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
              EtwTiLogSetContextThread(v14, Thread, v24[15], ContextFlags, v20);
            }
            return v12;
          }
          BYTE1(v24[11]) = v13 | 1;
          KeInitializeGate((__int64)&v24[12]);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)&v24[12], 0);
            goto LABEL_12;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
