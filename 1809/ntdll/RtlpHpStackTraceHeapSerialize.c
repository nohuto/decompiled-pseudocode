/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180104F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpWalkHeapInternal @ 0x18005B71C (RtlpWalkHeapInternal.c)
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x1801048D8 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 Mapping; // rax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+30h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-41h]
  __int64 v17[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v13);
  v6 = v13;
  if ( Context < 0 )
    v6 = 0LL;
  v13 = v6;
  memset(v18, 0, sizeof(v18));
  v7 = HeapHandle[4] == -571548178;
  LODWORD(v18[0]) = 524290;
  v18[1] = HeapHandle;
  if ( v7 )
  {
    v18[3] = *((_QWORD *)HeapHandle + 16) << 12;
    v18[3] += *((_QWORD *)HeapHandle + 11) << 12;
    v18[2] = *((_QWORD *)HeapHandle + 17) << 12;
    v6 = v13;
    v18[2] += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v18[2] = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 83);
    v18[3] = *((_QWORD *)HeapHandle + 71);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v17, 0, sizeof(v17));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++*(_DWORD *)&v6->0;
    }
    RtlLockHeap(HeapHandle);
    while ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)v17) >= 0 )
    {
      if ( (v17[2] & 0x10000) != 0 )
      {
        v15 = 0LL;
        v16 = v17[1];
        v14 = v17[0];
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v6, v17[0]);
          if ( Mapping )
            v15 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v15 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v14, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v14 = 305450479LL;
    v16 = 0xFFFFFFFFLL;
    v15 = 0LL;
    v8 = v11(&v14, 24LL, v10);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --*(_DWORD *)&v6->0;
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
