/*
 * XREFs of PspGetContextThreadInternal @ 0x140620C00
 * Callers:
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     PspInitializeThunkContext @ 0x1406207DC (PspInitializeThunkContext.c)
 *     WbGetTrapFrame @ 0x14062444C (WbGetTrapFrame.c)
 *     WbSetTrapFrame @ 0x140624794 (WbSetTrapFrame.c)
 *     PspWow64GetContextThread @ 0x1406A82D8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A89DC (PspWow64SetContextThread.c)
 *     NtGetContextThread @ 0x1406C5330 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x14088BA40 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDF0 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x14008A360 (KeInitializeApc.c)
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1400A1E00 (RtlpSanitizeContextFlags.c)
 *     KeInsertQueueApc @ 0x1400F1460 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x1400FA2E4 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14013A354 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401C5210 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlpReadExtendedContext @ 0x140620F80 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406A8568 (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  int v18; // ecx
  unsigned int v19; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp+4h]
  __int64 v21; // [rsp+48h] [rbp+8h]
  _QWORD v22[48]; // [rsp+50h] [rbp+10h] BYREF
  _BYTE v23[24]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v22, 0, sizeof(v22));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v19 = *(_DWORD *)v13;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&v19);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(v19);
      if ( (int)result < 0 )
        return result;
      v14 = v20 + 15LL;
      if ( v14 <= v20 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      v22[15] = &v19;
      result = RtlInitializeExtendedContext((__int64)&v19, v19);
      if ( (int)result < 0 )
        return result;
      v11 = v21;
      v22[15] = v21 - 1232;
      result = RtlpReadExtendedContext(v18, 0, v21, v19, a2, (__int64)v23);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v22[15] = a2;
      v11 = a2 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
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
        return 3221225473LL;
      KeWaitForGate((__int64)&v22[12], 0);
    }
    result = HIDWORD(v22[11]);
    if ( v22[11] >= 0 && v22[15] != a2 )
      return RtlpWriteExtendedContext(v22[15], (int)a2 + 1232, (unsigned int)v23, *(_DWORD *)(v22[15] + 48LL), v11);
  }
  return result;
}
