/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E914
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007EABC (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4C50 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // cl
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct _TEB *v7; // rdx
  __int64 v8; // r15
  unsigned __int8 v9; // bl
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // r11
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int8 *v21; // r8
  unsigned __int8 v22; // r10
  unsigned int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // r8
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-88h]
  _BYTE v28[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)((unsigned int)v6 - v5 - 1 + *(_QWORD *)(a1 + 48));
  }
  v7 = NtCurrentTeb();
  v8 = (unsigned int)v6;
  v9 = *(_BYTE *)(v6 + *(_QWORD *)(a2 + 88));
  result = BYTE1(v7->HeapData);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return result;
  }
  memset(v28, 0, sizeof(v28));
  RtlAcquireSRWLockExclusive(a2 + 80, v11, v12, v13);
  v14 = *(unsigned __int8 **)(a2 + 88);
  v15 = &v14[v8];
  if ( v9 != v14[v8] )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v16 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v16 )
  {
    v17 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v18 = *v14++;
      ++v28[v18];
      --v17;
    }
    while ( v17 );
  }
  if ( v28[v9] == 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v19 = v9 + 1;
  v20 = v19;
  if ( v19 < v16 )
  {
    v21 = &v28[v19];
    do
    {
      v22 = *v21;
      v23 = v20;
      if ( !*v21 )
        break;
      ++v20;
      ++v21;
      if ( v22 >= v28[v19] )
        v23 = v19;
      v19 = v23;
    }
    while ( v20 < v16 );
  }
  if ( v28[v19] )
  {
    *v15 = v19;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v24 = *(unsigned __int8 *)(a2 + 77);
  if ( v24 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v24 + 1;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v27 = 0LL;
  v25 = *(_QWORD *)(a2 + 96);
  LOWORD(v27) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8LL * v19), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(a1, a2, v19);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v19) = result;
    if ( result )
    {
      _InterlockedOr(v26, 0);
      *(_BYTE *)(a2 + 2) = v19 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v8 + result) = v19;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
