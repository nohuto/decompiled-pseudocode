/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E924
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007EACC (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4C70 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // cl
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct _TEB *v7; // rdx
  __int64 v8; // r15
  unsigned __int8 v9; // bl
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // r11
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int8 *v17; // r8
  unsigned __int8 v18; // r10
  unsigned int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 Slot; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-88h]
  _BYTE v25[64]; // [rsp+30h] [rbp-78h] BYREF

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
  if ( BYTE1(v7->HeapData) != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return;
  }
  memset(v25, 0, sizeof(v25));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v10 = *(unsigned __int8 **)(a2 + 88);
  v11 = &v10[v8];
  if ( v9 != v10[v8] )
    goto LABEL_14;
  v12 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v12 )
  {
    v13 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v14 = *v10++;
      ++v25[v14];
      --v13;
    }
    while ( v13 );
  }
  if ( v25[v9] == 1 )
    goto LABEL_14;
  v15 = v9 + 1;
  v16 = v15;
  if ( v15 < v12 )
  {
    v17 = &v25[v15];
    do
    {
      v18 = *v17;
      v19 = v16;
      if ( !*v17 )
        break;
      ++v16;
      ++v17;
      if ( v18 >= v25[v15] )
        v19 = v15;
      v15 = v19;
    }
    while ( v16 < v12 );
  }
  if ( v25[v15] )
  {
    *v11 = v15;
    goto LABEL_14;
  }
  v20 = *(unsigned __int8 *)(a2 + 77);
  if ( v20 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v20 + 1;
LABEL_14:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
    return;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v24 = 0LL;
  v21 = *(_QWORD *)(a2 + 96);
  LOWORD(v24) = 2;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v15), 2LL, 0LL) )
  {
    Slot = RtlpHpLfhBucketAllocateSlot(a1, a2, v15);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v15) = Slot;
    if ( Slot )
    {
      _InterlockedOr(v23, 0);
      *(_BYTE *)(a2 + 2) = v15 + 1;
      *(_BYTE *)(v8 + *(_QWORD *)(a2 + 88)) = v15;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
}
