/*
 * XREFs of PspSetContextThreadInternal @ 0x140620A30
 * Callers:
 *     PspInitializeThunkContext @ 0x1406207DC (PspInitializeThunkContext.c)
 *     WbSetTrapFrame @ 0x140624794 (WbSetTrapFrame.c)
 *     PspWow64SetContextThread @ 0x1406A89BC (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14088B8F0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14088BA40 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDD0 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x14008A360 (KeInitializeApc.c)
 *     KeVerifyContextRecord @ 0x1400A1C88 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1400A1E00 (RtlpSanitizeContextFlags.c)
 *     IoThreadToProcess @ 0x1400ACF20 (IoThreadToProcess.c)
 *     KeInsertQueueApc @ 0x1400F1480 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x1400FA304 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14013A374 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401C5230 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1401C5DC0 (_alloca_probe.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     RtlpReadExtendedContext @ 0x140620F80 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406A9180 (EtwTiLogSetContextThread.c)
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
  PETHREAD *v20; // [rsp+20h] [rbp-20h]
  unsigned int v21; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp+4h]
  __int64 v23; // [rsp+48h] [rbp+8h]
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  PETHREAD v26; // [rsp+98h] [rbp+58h] BYREF
  char v27; // [rsp+A8h] [rbp+68h]
  char v28; // [rsp+A9h] [rbp+69h]
  int v29; // [rsp+ACh] [rbp+6Ch]
  _BYTE v30[24]; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v31; // [rsp+C8h] [rbp+88h]

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
      v31 = (unsigned int *)a2;
      goto LABEL_6;
    }
    result = RtlGetExtendedContextLength(v21);
    if ( (int)result >= 0 )
    {
      v16 = v22 + 15LL;
      if ( v16 <= v22 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      v31 = &v21;
      memset(&v21, 0, v22);
      result = RtlInitializeExtendedContext((__int64)v31, v21);
      if ( (int)result >= 0 )
      {
        v31 = (unsigned int *)(v23 - 1232);
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
              v12 = KeVerifyContextRecord((__int64)Thread, (__int64)v31);
              if ( v12 < 0 )
                return (unsigned int)v12;
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
              EtwTiLogSetContextThread(v14, Thread, v31, v21, v20);
            }
            return (unsigned int)v12;
          }
          v28 = v13 | 1;
          KeInitializeGate((__int64)v30);
          KeInitializeApc((__int64)v24, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v24, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)v30, 0);
            goto LABEL_12;
          }
          return (unsigned int)-1073741823;
        }
      }
    }
  }
  return result;
}
