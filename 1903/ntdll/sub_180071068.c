/*
 * XREFs of sub_180071068 @ 0x180071068
 * Callers:
 *     RtlActivateActivationContextEx @ 0x180070F40 (RtlActivateActivationContextEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180071068(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rbp
  int v9; // edx
  unsigned int v10; // ecx
  _BYTE *v11; // rax
  __int64 v12; // rdx
  _DWORD *Heap; // rax
  _DWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-D8h] BYREF

  v3 = 0;
  if ( a3 && (*a3 = 0LL, a2) )
  {
    v5 = a2 + 8;
    v6 = *(_QWORD **)(a2 + 8);
    v7 = 32LL;
    while ( v6 != (_QWORD *)v5 )
    {
      v8 = v6 - 1;
      if ( *((_DWORD *)v6 - 2) != 1953721414 )
      {
        HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1LL;
        ExceptionRecord.ExceptionInformation[1] = 1LL;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionInformation[3] = (ULONG_PTR)(v6 - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        *(_QWORD *)&ExceptionRecord.ExceptionFlags = 1LL;
        RtlRaiseException(&ExceptionRecord);
      }
      v9 = *((_DWORD *)v8 + 1);
      if ( v9 != 32 )
      {
        v10 = 0;
        v11 = v8 + 6;
        while ( (*v11 & 4) == 0 )
        {
          ++v10;
          v11 += 96;
          if ( v10 >= 0x20 )
            goto LABEL_19;
        }
        *((_DWORD *)v8 + 1) = v9 + 1;
        *((_DWORD *)v8 + 7) = ~(v9 + 1);
        v12 = (__int64)&v8[12 * v10 + 4];
        if ( v12 )
          goto LABEL_11;
      }
LABEL_19:
      v6 = (_QWORD *)*v6;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC20uLL);
    if ( Heap )
    {
      *Heap = 1953721414;
      v15 = Heap + 10;
      Heap[6] = 0;
      do
      {
        *((_QWORD *)v15 - 1) = 0LL;
        *(_QWORD *)v15 = 0LL;
        v15[2] = 12;
        *((_QWORD *)v15 + 2) = 0LL;
        v15 += 24;
        --v7;
      }
      while ( v7 );
      Heap[1] = 1;
      v12 = (__int64)(Heap + 8);
      Heap[7] = -2;
      v16 = Heap + 2;
      v17 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
        __fastfail(3u);
      *v16 = v17;
      v16[1] = v5;
      *(_QWORD *)(v17 + 8) = v16;
      *(_QWORD *)v5 = v16;
LABEL_11:
      *(_DWORD *)(v12 + 16) = 8;
      *a3 = v12;
      return v3;
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
