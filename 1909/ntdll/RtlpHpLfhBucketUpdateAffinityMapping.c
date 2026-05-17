/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007A200
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007A3AC (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1920 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A3DC0 (memset.c)
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
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // r11
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int8 *v18; // r8
  unsigned __int8 v19; // r10
  unsigned int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // r8
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
  result = BYTE1(v7->HeapData);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return result;
  }
  memset(v25, 0, sizeof(v25));
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v11 = *(unsigned __int8 **)(a2 + 88);
  v12 = &v11[v8];
  if ( v9 != v11[v8] )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v13 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v13 )
  {
    v14 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v15 = *v11++;
      ++v25[v15];
      --v14;
    }
    while ( v14 );
  }
  if ( v25[v9] == 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v16 = v9 + 1;
  v17 = v16;
  if ( v16 < v13 )
  {
    v18 = &v25[v16];
    do
    {
      v19 = *v18;
      v20 = v17;
      if ( !*v18 )
        break;
      ++v17;
      ++v18;
      if ( v19 >= v25[v16] )
        v20 = v16;
      v16 = v20;
    }
    while ( v17 < v13 );
  }
  if ( v25[v16] )
  {
    *v12 = v16;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v21 = *(unsigned __int8 *)(a2 + 77);
  if ( v21 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v21 + 1;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v24 = 0LL;
  v22 = *(_QWORD *)(a2 + 96);
  LOWORD(v24) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8LL * v16), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(a1, a2, v16);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v16) = result;
    if ( result )
    {
      _InterlockedOr(v23, 0);
      *(_BYTE *)(a2 + 2) = v16 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v8 + result) = v16;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
