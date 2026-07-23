/*
 * XREFs of EtwpEnableKernelTrace @ 0x1406C6A30
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoPerfInit @ 0x1402853E4 (IoPerfInit.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1402ECBE0 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x1406C6CCC (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C6E58 (EtwpUpdateFileInfoDriverState.c)
 *     KeSetIntervalProfile @ 0x1406D7F60 (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x14084578C (KeInitializeProfileCallback.c)
 *     AlpcRegisterLogRoutine @ 0x14084C7F8 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x140863A20 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1408B5650 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(const __m128i *a1, char *a2, __int64 a3, unsigned int a4)
{
  int v5; // esi
  int updated; // r15d
  int v9; // ecx
  int v10; // r14d
  int v11; // eax
  __int64 v12; // r12
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int i; // ebx
  signed __int64 v22; // rdi
  _BYTE *v23; // rax
  _QWORD v26[2]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v27[8]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v28[32]; // [rsp+78h] [rbp+7h] BYREF

  v5 = a3;
  updated = 0;
  memset(v27, 0, sizeof(v27));
  if ( a2 )
  {
    v9 = *((_DWORD *)a2 + 1);
    if ( (v9 & 0x80000) != 0 )
    {
      v10 = 0x80000;
      v11 = 8912896;
    }
    else
    {
      v10 = v27[1];
      v11 = 0x800000;
    }
    if ( (v9 & 0x800000) != 0 )
      v10 = v11;
    v27[1] = v10;
  }
  else
  {
    v10 = v27[1];
  }
  if ( a1 && (a1->m128i_i32[1] & 0x880000) != 0 )
  {
    v26[1] = -1LL;
    v26[0] = 0LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v26);
  }
  v12 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState((_DWORD)a1, (_DWORD)a2, 1, v5, a4)) != 0 || !a2 )
  {
LABEL_57:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_70;
  }
  v13 = *(_DWORD *)a2;
  v14 = v27[0];
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v14 = v27[0] | 0x2000000;
    qword_1403FF830 = (__int64)EtwpTraceFileIo;
    v13 = *(_DWORD *)a2;
    v27[0] |= 0x2000000u;
  }
  if ( (v13 & 0x4000000) != 0 )
  {
    v14 |= 0x4000000u;
    qword_1403FF828 = (__int64)EtwpTraceFileIo;
    v13 = *(_DWORD *)a2;
    v27[0] = v14;
  }
  if ( (v13 & 0x200) != 0 )
  {
    v14 |= 0x200u;
    qword_1403FF820 = (__int64)EtwpTraceFileName;
    v13 = *(_DWORD *)a2;
    v27[0] = v14;
  }
  if ( (v13 & 0x100) != 0 )
  {
    v14 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_1403FF810 = (__int64)EtwpTraceRedirectedIo;
    v13 = *(_DWORD *)a2;
    v27[0] = v14;
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 |= 0x400u;
    qword_1404397C0 = (__int64)EtwpTraceIoInit;
    v27[0] = v14;
  }
  v15 = *((_DWORD *)a2 + 4);
  v16 = v27[4];
  if ( (v15 & 1) != 0 )
  {
    v16 = v27[4] | 1;
    qword_1404397C8 = (__int64)EtwpTraceOpticalIo;
    v15 = *((_DWORD *)a2 + 4);
    v27[4] |= 1u;
  }
  if ( (v15 & 2) != 0 )
  {
    v16 |= 2u;
    qword_1404397D0 = (__int64)EtwpTraceOpticalIoInit;
    v27[4] = v16;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v14 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    v27[0] = v14;
  }
  v17 = *((_DWORD *)a2 + 4);
  if ( (v17 & 0x400000) != 0 )
  {
    v16 |= 0x400000u;
    qword_1403FF7F0 = (__int64)EtwpTraceFltIo;
    v17 = *((_DWORD *)a2 + 4);
    v27[4] = v16;
  }
  if ( (v17 & 0x80000) != 0 )
  {
    v16 |= 0x80000u;
    qword_1403FF7F8 = (__int64)EtwpTraceFltIo;
    v17 = *((_DWORD *)a2 + 4);
    v27[4] = v16;
  }
  if ( (v17 & 0x100000) != 0 )
  {
    v16 |= 0x100000u;
    qword_1403FF800 = (__int64)EtwpTraceFltTimedIo;
    v17 = *((_DWORD *)a2 + 4);
    v27[4] = v16;
  }
  if ( (v17 & 0x200000) != 0 )
  {
    v16 |= 0x200000u;
    qword_1403FF808 = (__int64)EtwpTraceFltTimedIo;
    v17 = *((_DWORD *)a2 + 4);
    v27[4] = v16;
  }
  if ( (v17 & 0x1000000) != 0 )
  {
    v16 |= 0x1000000u;
    qword_140405B30 = (__int64)EtwpTraceWdf;
    v17 = *((_DWORD *)a2 + 4);
    v27[4] = v16;
  }
  if ( (v17 & 0x2000000) != 0 )
  {
    v16 |= 0x2000000u;
    qword_140405B38 = (__int64)EtwpTraceWdf;
    v27[4] = v16;
  }
  if ( (*((_DWORD *)a2 + 2) & 0x8000000) != 0 )
  {
    v27[2] |= 0x8000000u;
    qword_140405B40 = (__int64)EtwpSystemTraceWdf;
  }
  v18 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v14 |= 0x20000u;
    v27[0] = v14;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (v18 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_70;
    v18 = *(_DWORD *)a2;
    v14 |= 0x100000u;
    v27[0] = v14;
  }
  if ( (v18 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v14 |= 0x10000u;
    v27[0] = v14;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_70;
    v10 |= 0x10u;
    v27[1] = v10;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
LABEL_50:
    v19 = *((_DWORD *)a2 + 1);
    if ( (v19 & 2) != 0 )
    {
      KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v19 = *((_DWORD *)a2 + 1);
      v10 |= 2u;
      v27[1] = v10;
    }
    if ( (v19 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_14040B408 + 248 * i);
      v27[1] = v10 | 0x400;
    }
    if ( (*((_DWORD *)a2 + 4) & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      v27[4] = v16 | 0x80;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_57;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    v27[0] = v14 | 0x40000;
    goto LABEL_50;
  }
LABEL_70:
  v22 = a2 - (char *)a1;
  v23 = (_BYTE *)(v28 - (_BYTE *)a1);
  do
  {
    *(const __m128i *)((char *)a1 + (_QWORD)v23) = _mm_and_si128(
                                                     _mm_andnot_si128(
                                                       _mm_loadu_si128((const __m128i *)((char *)a1 + v22)),
                                                       (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                                     _mm_loadu_si128(a1));
    ++a1;
    --v12;
  }
  while ( v12 );
  EtwpDisableKernelTrace(v28, v27, a3, a4);
  return (unsigned int)updated;
}
