/*
 * XREFs of sub_1800351D0 @ 0x1800351D0
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 * Callees:
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x18009C820 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18009CAE0 (ZwReleaseMutant.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_1800351D0(unsigned __int64 *a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned __int64 v4; // r14
  char v5; // r15
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned int v12; // r10d
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  int v20; // eax
  ULONG_PTR v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  ULONG_PTR v25; // rbx
  ULONG_PTR v26; // rax
  signed __int64 v27; // [rsp+20h] [rbp-89h]
  signed __int64 v28; // [rsp+20h] [rbp-89h]
  _DWORD v29[2]; // [rsp+28h] [rbp-81h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF

  sub_180035510(a1);
  v2 = *((_DWORD *)a1 + 36);
  if ( !v2 )
  {
LABEL_14:
    memset(a1, 0, 0x90uLL);
    return;
  }
  while ( 1 )
  {
    _BitScanForward((unsigned int *)&v3, v2);
    v29[1] = v3;
    *((_DWORD *)a1 + 36) = v2 ^ (1 << v3);
    if ( v3 != 9 )
      break;
    v10 = a1[23];
    a1[23] = 0LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)(v10 + 8) + 8LL))(
      v10,
      0xFFFFFFFFFFFFFFFLL,
      0x180000000uLL);
LABEL_13:
    v2 = *((_DWORD *)a1 + 36);
    if ( !v2 )
      goto LABEL_14;
  }
  if ( v3 == 6 )
  {
    v4 = a1[23];
    v5 = 0;
    _m_prefetchw((const void *)(v4 + 56));
    v6 = *(_QWORD *)(v4 + 56);
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive(v4 + 64);
        v5 = 0;
      }
      v7 = v6;
      v8 = (v6 ^ (v6 - 1)) & 0xFFFFFFFFFFFFFFFLL ^ v6;
      if ( (v8 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v7 >> 60) & 8) != 0 )
      {
        v8 &= ~0x8000000000000000uLL;
        v5 = 1;
        RtlAcquireSRWLockExclusive(v4 + 64);
      }
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 56), v8, v7);
    }
    while ( v7 != v6 );
    if ( v5 )
    {
      v9 = *(_QWORD *)(v4 + 72);
      *(_QWORD *)(v4 + 72) = 0LL;
      RtlReleaseSRWLockExclusive(v4 + 64);
      sub_180066D3C(v9);
    }
    goto LABEL_13;
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(a1[24]);
      a1[24] = 0LL;
      goto LABEL_13;
    case 1:
      v23 = ZwReleaseMutant(*((unsigned int *)a1 + 38), 0LL, 0x180000000uLL);
      v21 = v23;
      if ( v23 >= 0 )
      {
        *((_DWORD *)a1 + 38) = 0;
        goto LABEL_13;
      }
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      v26 = *((unsigned int *)a1 + 38);
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_40:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v26;
      ExceptionRecord.ExceptionInformation[3] = v21;
LABEL_41:
      ExceptionRecord.ExceptionInformation[0] = a1[11];
      ExceptionRecord.ExceptionInformation[1] = a1[12];
      memset(a1, 0, 0xF8uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v22 = ZwSetEvent(*((unsigned int *)a1 + 37), 0LL);
      v21 = v22;
      if ( v22 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v26 = *((unsigned int *)a1 + 37);
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_40;
      }
      *((_DWORD *)a1 + 37) = 0;
      goto LABEL_13;
    case 3:
      v24 = ZwReleaseSemaphore(*((unsigned int *)a1 + 39), *((unsigned int *)a1 + 40), 0LL);
      v25 = v24;
      if ( v24 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[2] = *((unsigned int *)a1 + 39);
        ExceptionRecord.ExceptionInformation[3] = *((unsigned int *)a1 + 40);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v25;
        goto LABEL_41;
      }
      *(unsigned __int64 *)((char *)a1 + 156) = 0LL;
      goto LABEL_13;
    case 4:
      v11 = a1[16];
      v12 = *((_DWORD *)a1 + 18);
      v13 = a1[23];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 420));
        _m_prefetchw((const void *)(v11 + 8));
        v18 = *(_QWORD *)(v11 + 8);
        HIDWORD(v28) = HIDWORD(v18);
        do
        {
          LODWORD(v28) = v18 ^ (unsigned __int16)(v18 ^ (v18 - 1));
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v28, v18);
          HIDWORD(v28) = HIDWORD(v18);
        }
        while ( v19 != v18 );
        v17 = *(_QWORD *)(v11 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 420LL));
        v14 = *(_QWORD *)(v13 + 144);
        _m_prefetchw((const void *)(v14 + 8));
        v15 = *(_QWORD *)(v14 + 8);
        HIDWORD(v27) = HIDWORD(v15);
        do
        {
          LODWORD(v27) = v15 ^ (unsigned __int16)(v15 ^ (v15 - 1));
          v16 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v27, v15);
          HIDWORD(v27) = HIDWORD(v15);
        }
        while ( v16 != v15 );
        v17 = *(_QWORD *)(*(_QWORD *)(v13 + 144) + 56LL);
      }
      if ( v12 == 2 )
      {
        v29[0] = 0;
        ZwSetInformationWorkerFactory(v17, 9LL, v29);
      }
      goto LABEL_13;
    case 5:
      sub_180066BBC(a1[22] + 32, 0xFFFFFFFFLL);
      a1[22] = 0LL;
      goto LABEL_13;
    case 7:
      v20 = LdrUnloadDll(a1[25]);
      v21 = v20;
      if ( v20 < 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v26 = a1[25];
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_40;
      }
      a1[25] = 0LL;
      goto LABEL_13;
    case 8:
      LdrUnloadDll(a1[21]);
      a1[21] = 0LL;
      goto LABEL_13;
    default:
      goto LABEL_13;
  }
}
