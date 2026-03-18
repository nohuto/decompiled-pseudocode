/*
 * XREFs of PsCreateSystemThreadEx @ 0x1406725D0
 * Callers:
 *     MiZeroBootLargePages @ 0x1401858A4 (MiZeroBootLargePages.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 *     ExpNodeCreateSystemThread @ 0x1406C05EC (ExpNodeCreateSystemThread.c)
 *     NtGetMUIRegistryInfo @ 0x1406CFA90 (NtGetMUIRegistryInfo.c)
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     IoCreateSystemThread @ 0x14071D340 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x14072A7A8 (PopInitSystemSleeperThread.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407586EC (CmpInitializeSystemHivesLoad.c)
 *     CmpInitializeLazyWriters @ 0x1407591D4 (CmpInitializeLazyWriters.c)
 *     CmpCreateRegistryThread @ 0x1407593C0 (CmpCreateRegistryThread.c)
 *     KiStartDpcThread @ 0x14075C408 (KiStartDpcThread.c)
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 *     PfTStart @ 0x14077B7C8 (PfTStart.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407835CC (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x140785370 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x140854D60 (IopStartApcHardError.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1400D7A20 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        _DWORD *a9)
{
  __int64 *v10; // r14
  char v12; // r13
  int Thread; // esi
  char *v14; // rbx
  _DWORD *v15; // rsi
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  unsigned int v19; // ebx
  __int128 v20; // xmm0
  int v21; // eax
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  _OWORD v26[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  _OWORD v29[31]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = a8;
  v25 = a1;
  v24 = a5;
  memset(v29, 0, sizeof(v29));
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v28 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v12 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 2, (__int64)PsProcessType, 0, 0x72437350u, &Object, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = (char *)Object;
    v12 = 1;
  }
  else
  {
    v14 = (char *)*((_QWORD *)PspSystemPartition + 13);
    Object = v14;
  }
  v15 = v14 + 1788;
  if ( (*((_DWORD *)v14 + 447) & 0x1000) != 0 )
  {
    if ( a8 )
      goto LABEL_17;
    if ( !a9 )
    {
      v19 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v27;
      LOWORD(v28) = v19 % KeQueryActiveGroupCount();
      v14 = (char *)Object;
      v27 = qword_140572748[(unsigned __int16)v28];
    }
    if ( v10 )
    {
LABEL_17:
      v20 = *(_OWORD *)v10;
      v21 = 4096;
      DWORD1(v29[0]) = 4096;
      v29[20] = v20;
    }
    else
    {
      v21 = DWORD1(v29[0]);
    }
    if ( a9 )
    {
      DWORD1(v29[0]) = v21 | 0x4000;
      HIDWORD(v29[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v17 = *a3;
    v26[1] = a3[1];
    v26[0] = v17;
    v18 = a3[2];
    DWORD2(v26[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v26[1], 8)) | 0x200;
    v26[2] = v18;
  }
  else
  {
    *((_QWORD *)&v26[0] + 1) = 0LL;
    *(_QWORD *)&v26[1] = 0LL;
    v26[2] = 0LL;
    LODWORD(v26[0]) = 48;
    DWORD2(v26[1]) = 512;
  }
  Thread = PspCreateThread(
             v25,
             a2,
             (__int64)v26,
             0LL,
             (_KPROCESS *)v14,
             (unsigned __int64)v29 & -(__int64)((*v15 & 0x1000) != 0),
             v24,
             0LL,
             0LL,
             0,
             a6,
             a7,
             0LL);
  if ( v12 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)Thread;
}
