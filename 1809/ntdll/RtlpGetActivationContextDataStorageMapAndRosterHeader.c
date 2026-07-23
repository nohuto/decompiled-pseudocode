/*
 * XREFs of RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180033504
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x1800333E4 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180032658 (RtlpInitializeAssemblyStorageMap.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180086D4C (RtlpUninitializeAssemblyStorageMap.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpGetActivationContextDataStorageMapAndRosterHeader(
        int a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        volatile signed __int64 *a5,
        _QWORD *a6)
{
  volatile signed __int64 *v6; // r12
  wchar_t *Buffer; // rdi
  int v8; // ebx
  _QWORD *v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // r14
  volatile signed __int64 *v13; // r15
  __int64 v14; // rax
  volatile signed __int64 v15; // r8
  __int64 v17; // rax
  int *Heap; // rax
  int *v19; // rdi
  __int64 v20; // rax
  unsigned __int16 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int64 *v25; // [rsp+50h] [rbp-B0h]
  _QWORD *v26; // [rsp+58h] [rbp-A8h]
  void *Src[2]; // [rsp+60h] [rbp-A0h]
  _WORD v28[264]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a5;
  Buffer = v28;
  v8 = 0;
  v25 = a5;
  v28[0] = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v10 = a6;
  v26 = a6;
  v11 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0x20000;
  v12 = 0LL;
  UnicodeString.Buffer = v28;
  v13 = 0LL;
  if ( (_UNKNOWN *)a3 == &unk_180118318 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() passed the empty activation context\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return (unsigned int)-1073741811;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a4 || !a5 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags                : 0x%lx\n"
      "SXS:    Peb                  : %p\n"
      "SXS:    ActivationContextData: %p\n"
      "SXS:    AssemblyStorageMap   : %p\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader",
      a1,
      a2,
      a4,
      (const void *)a5);
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( a3 )
  {
    if ( a3 == -4 )
      goto LABEL_36;
    if ( (a1 & 3) == 0 )
    {
      v12 = (_QWORD *)(a3 + 24);
      v17 = *(_QWORD *)(a3 + 24);
      if ( !v17 )
        return (unsigned int)-1073741595;
      v11 = v17 + *(unsigned int *)(v17 + 24);
      v15 = a3 + 112;
      goto LABEL_20;
    }
  }
  if ( (a1 & 2) != 0 )
  {
LABEL_36:
    v12 = a2 + 97;
    v20 = a2[97];
    v13 = a2 + 98;
    if ( !v20 )
      goto LABEL_19;
    v11 = v20 + *(unsigned int *)(v20 + 24);
    goto LABEL_17;
  }
  if ( !a3 || (a1 & 1) != 0 )
  {
    v12 = a2 + 95;
    v14 = a2[95];
    v13 = a2 + 96;
    if ( v14 )
    {
      v11 = v14 + *(unsigned int *)(v14 + 24);
      if ( !*v13 )
      {
        v21 = _mm_cvtsi128_si32(*(__m128i *)(a2[4] + 96LL));
        *(_OWORD *)Src = *(_OWORD *)(a2[4] + 96LL);
        v22 = v21 + 14LL;
        if ( v22 > 0x208 )
        {
          if ( v22 > 0xFFFE )
            return (unsigned int)-1073741562;
          UnicodeString.MaximumLength = v21 + 14;
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)(v21 + 14));
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
            return (unsigned int)-1073741801;
        }
        else
        {
          Buffer = v28;
          UnicodeString.MaximumLength = 520;
          UnicodeString.Buffer = v28;
        }
        memmove(Buffer, Src[1], v21);
        v23 = (unsigned __int64)v21 >> 1;
        UnicodeString.Length = v21 + 12;
        v6 = v25;
        *(_QWORD *)&Buffer[v23] = *(_QWORD *)L".Local";
        *(_DWORD *)&Buffer[v23 + 4] = *(_DWORD *)L"al";
        Buffer[v23 + 6] = aLocal[6];
        v8 = 0;
      }
      goto LABEL_17;
    }
LABEL_19:
    v15 = *v13;
    v10 = v26;
LABEL_20:
    *v6 = v15;
    *a4 = *v12;
    if ( v10 )
      *v10 = v11;
    goto LABEL_22;
  }
LABEL_17:
  if ( !*v12 || *v13 )
    goto LABEL_19;
  if ( *(_DWORD *)(v11 + 8) > 0x1FFFFFFDu )
  {
    v8 = -1073741675;
  }
  else
  {
    Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * *(unsigned int *)(v11 + 8) + 16);
    v19 = Heap;
    if ( Heap )
    {
      v8 = RtlpInitializeAssemblyStorageMap(Heap, *(_DWORD *)(v11 + 8), Heap + 4);
      if ( v8 >= 0 )
      {
        if ( _InterlockedCompareExchange64(v13, (signed __int64)v19, 0LL) )
        {
          RtlpUninitializeAssemblyStorageMap(v19);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
        }
        Buffer = UnicodeString.Buffer;
        v8 = 0;
        goto LABEL_19;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    }
    else
    {
      v8 = -1073741801;
    }
    Buffer = UnicodeString.Buffer;
  }
LABEL_22:
  if ( Buffer && Buffer != v28 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
