/*
 * XREFs of PspGetContextThreadInternal @ 0x1405E8510
 * Callers:
 *     WbGetTrapFrame @ 0x1405CA0C8 (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x1405CA2D0 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x1406E7E00 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x1408C97F0 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14001710C (RtlpSanitizeContextFlags.c)
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
 *     RtlpWriteExtendedContext @ 0x1406C886C (RtlpWriteExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  int result; // eax
  PCONTEXT_EX v11; // rdi
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int64 v18; // rcx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v22[48]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v23[3]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v13;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      v22[15] = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result < 0 )
        return result;
      v11 = ContextEx;
      v22[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v18, 0, (__int64)ContextEx, ContextFlags, a2, (int *)v23);
      if ( result < 0 )
        return result;
    }
    else
    {
      v22[15] = a2;
      v11 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    LOBYTE(v22[11]) = a4;
    v12 = BYTE1(v22[11]) ^ (BYTE1(v22[11]) ^ (2 * a5)) & 2;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v22[8] = 0LL;
      v22[9] = a1;
      BYTE1(v22[11]) = v12 & 0xFE;
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, &v22[8]);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      BYTE1(v22[11]) = v12 | 1;
      KeInitializeGate((__int64)&v22[12]);
      KeInitializeApc((__int64)v22, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !KeInsertQueueApc((__int64)v22, 0LL, a1, 2u) )
        return -1073741823;
      KeWaitForGate((__int64)&v22[12], 0);
    }
    result = HIDWORD(v22[11]);
    if ( v22[11] >= 0 && v22[15] != a2 )
      return RtlpWriteExtendedContext(
               v22[15],
               (int)a2 + 1232,
               (unsigned int)v23,
               *(_DWORD *)(v22[15] + 48LL),
               (__int64)v11);
  }
  return result;
}
