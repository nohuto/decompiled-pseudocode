/*
 * XREFs of PspGetContextThreadInternal @ 0x1405E7D40
 * Callers:
 *     WbGetTrapFrame @ 0x1405C9BC8 (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x1405C9DD0 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C9B9C (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x1406E6DB0 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x1408C9F10 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140016D1C (RtlpSanitizeContextFlags.c)
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
 *     RtlpWriteExtendedContext @ 0x1406C9E54 (RtlpWriteExtendedContext.c)
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
