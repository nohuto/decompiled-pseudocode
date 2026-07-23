/*
 * XREFs of RtlpSubSegmentInitialize @ 0x18000ED20
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlRunOnceComplete @ 0x180077F60 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180086DFC (RtlpRunOnceWaitForInit.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x1800FE940 (RtlpInitRandomExVector.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010642C (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010A4FC (RtlpSubSegmentDebugInitialize.c)
 */

struct _PEB *__fastcall RtlpSubSegmentInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int32 v6; // ebx
  unsigned __int8 v8; // al
  __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  int v17; // ebp
  unsigned __int64 i; // rax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r12
  __int16 v22; // cx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  struct _TEB *v26; // rbp
  unsigned __int16 HeapData_high; // si
  __int16 v28; // ax
  __int16 v29; // bx
  signed __int64 Value; // rax
  NTSTATUS v31; // edi
  __int32 v32; // r8d
  unsigned int v34; // r8d
  unsigned __int64 v35; // rdi
  signed __int64 v36; // rax
  NTSTATUS v37; // esi
  __int32 v38; // r9d
  unsigned int v40; // r9d
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v43; // rcx
  int v44; // edx
  int v46; // edx
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  __int16 RandomValue32; // ax
  signed __int64 v52; // rcx
  signed __int64 v53; // rcx
  signed __int64 v54; // rcx
  signed __int64 v55; // rcx
  signed __int32 v56[8]; // [rsp+0h] [rbp-98h] BYREF
  char v57; // [rsp+40h] [rbp-58h] BYREF
  char v58[7]; // [rsp+41h] [rbp-57h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-50h]
  unsigned __int64 v60; // [rsp+50h] [rbp-48h]
  __int64 v61; // [rsp+58h] [rbp-40h]
  __int64 v62; // [rsp+60h] [rbp-38h]
  int v64; // [rsp+A8h] [rbp+10h]
  signed __int64 v65; // [rsp+A8h] [rbp+10h]
  signed __int32 v66; // [rsp+A8h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 32);
  v8 = *(_BYTE *)(a2 + 43);
  v12 = *(unsigned __int8 *)(a6 + 2);
  if ( v8 )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) + 192LL * v8 - 192;
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  v14 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v14 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v14, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v15 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v59 = v15 >> 4;
  v16 = 0;
  v17 = RtlpLFHKey;
  v60 = ((((unsigned __int64)(unsigned int)((a5 - 64) / v15) + 31) >> 3) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v60; i + v15 + 8 <= a3 + a5; i += v15 )
  {
    v19 = (unsigned __int16)v16 << 8;
    v20 = *(_DWORD *)(a1 + 24) ^ v17 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v19;
    *(_BYTE *)(i + 15) = 0x80;
    *(_DWORD *)(i + 8) = v20;
  }
  *(_QWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  memset((void *)(a3 + 48), 0, ((unsigned __int64)v16 + 7) >> 3);
  if ( (v16 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)v16 >> 6)) |= ~((1LL << (v16 & 0x3F)) - 1);
  v21 = a2;
  v22 = v59;
  *(_WORD *)(a2 + 36) = v59;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  LOWORD(v64) = v60;
  HIWORD(v64) = 16 * v22;
  *(_DWORD *)(a3 + 24) = v64 ^ v17 ^ a3 ^ a1;
  if ( *(_DWORD *)(v13 + 164) )
  {
    if ( ++*(_WORD *)(v13 + 176) <= 0x1Cu )
      goto LABEL_11;
    v47 = *(_QWORD *)v13;
    v50 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
    if ( v50 )
    {
      v49 = v50 - 4;
      goto LABEL_42;
    }
  }
  else
  {
    v47 = *(_QWORD *)v13;
    v48 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
    if ( v48 < 0x20 )
    {
      v49 = v48 + 4;
LABEL_42:
      *(_DWORD *)(v47 + 36) = v49;
    }
  }
  *(_WORD *)(v13 + 176) = 0;
  do
  {
LABEL_11:
    v23 = *(_QWORD *)(v13 + 160);
    if ( (int)v16 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v65) = v24;
    LODWORD(v65) = v23 + v16;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v65, v23) );
  v25 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v25 + 32);
  v26 = NtCurrentTeb();
  HeapData_high = (unsigned __int8)HIWORD(v26->HeapData);
  if ( HeapData_high == HIBYTE(HIWORD(v26->HeapData)) )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    v28 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v28 = (unsigned __int8)(HIWORD(v26->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v26->HeapData);
  }
  HIWORD(v26->HeapData) = v28;
  HIWORD(v66) = *((unsigned __int8 *)RtlpLowFragHeapRandomData + HeapData_high) % v16;
  LOWORD(v66) = v16;
  _InterlockedOr(v56, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(v21 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 32), v66, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v29 = HIWORD(NtCurrentTeb()->HeapData);
    if ( !dword_1801660B4
      && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_1801660B4, 4u, 0LL) < 0 )
    {
      dword_1801660B4 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    Value = RtlpRandomExInit.Value;
    v31 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_19:
      if ( v31 >= 0 )
        goto LABEL_20;
      v57 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v52 = Value & 3;
          if ( (Value & 3) == 0 )
            break;
          if ( v52 != 1 )
          {
            if ( v52 == 3 )
              v31 = -1073741584;
            goto LABEL_19;
          }
          Value = RtlpRunOnceWaitForInit(Value, &RtlpRandomExInit);
        }
        v53 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
      }
      while ( Value != v53 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v31 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v31 >= 0 )
          goto LABEL_20;
        v57 = 1;
      }
      else
      {
        v31 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v31 >= 0 )
          goto LABEL_20;
        v57 = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v31, &v57, 1LL);
LABEL_20:
    dword_1801660B4 = (2147483629 * (unsigned __int64)(unsigned int)dword_1801660B4 + 2147483587) % 0x7FFFFFFF;
    v32 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_1801660B4);
    if ( MEMORY[0x7FFE0290] )
    {
      v44 = 0;
      while ( 1 )
      {
        __asm { rdrand  rcx }
        v61 = _RCX;
        if ( _CF )
          break;
        if ( (unsigned int)++v44 >= 0xA )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      LODWORD(_RCX) = 0;
    }
    v34 = _RCX ^ v32;
    _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v34);
    v35 = (unsigned __int64)v34 << 32;
    if ( !dword_1801660B4
      && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_1801660B4, 4u, 0LL) < 0 )
    {
      dword_1801660B4 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    v36 = RtlpRandomExInit.Value;
    v37 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_24:
      if ( v37 >= 0 )
      {
LABEL_25:
        dword_1801660B4 = (2147483629 * (unsigned __int64)(unsigned int)dword_1801660B4 + 2147483587) % 0x7FFFFFFF;
        v38 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_1801660B4);
        if ( MEMORY[0x7FFE0290] )
        {
          v46 = 0;
          while ( 1 )
          {
            __asm { rdrand  rcx }
            v62 = _RCX;
            if ( _CF )
              break;
            if ( (unsigned int)++v46 >= 0xA )
              goto LABEL_26;
          }
        }
        else
        {
LABEL_26:
          LODWORD(_RCX) = 0;
        }
        v40 = _RCX ^ v38;
        _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v40);
        RtlpLowFragHeapRandomData[(unsigned __int8)v29 >> 3] = (v35 | v40) & 0x7F7F7F7F7F7F7F7FLL;
        goto LABEL_28;
      }
      v58[0] = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v54 = v36 & 3;
          if ( (v36 & 3) == 0 )
            break;
          if ( v54 != 1 )
          {
            if ( v54 == 3 )
              v37 = -1073741584;
            goto LABEL_24;
          }
          v36 = RtlpRunOnceWaitForInit(v36, &RtlpRandomExInit);
        }
        v55 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, v36);
      }
      while ( v36 != v55 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v37 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v37 >= 0 )
          goto LABEL_25;
        v58[0] = 1;
      }
      else
      {
        v37 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v37 >= 0 )
          goto LABEL_25;
        v58[0] = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v37, v58, 1LL);
    goto LABEL_25;
  }
LABEL_28:
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v43 = (__int64)result->SharedData + 550;
  }
  else
  {
    v43 = 2147353472LL;
  }
  if ( *(_BYTE *)v43 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)RtlpLogHeapSubSegmentInitialize(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(v21 + 8),
                              *(unsigned __int16 *)(v21 + 36),
                              *(unsigned __int16 *)(v21 + 40),
                              *(unsigned __int8 *)(v21 + 43));
  }
  return result;
}
