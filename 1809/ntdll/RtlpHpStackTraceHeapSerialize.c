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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x1801048D8 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int Context; // eax
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // esi
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 Mapping; // rax
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int64 *, __int64, __int64); // rax
  __int64 v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h]
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int64 v20[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v16);
  v6 = v16;
  if ( Context < 0 )
    v6 = 0LL;
  v16 = v6;
  memset(v21, 0, sizeof(v21));
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  LODWORD(v21[0]) = 524290;
  v21[1] = a1;
  if ( v7 )
  {
    v21[3] = *(_QWORD *)(a1 + 128) << 12;
    v21[3] += *(_QWORD *)(a1 + 88) << 12;
    v21[2] = *(_QWORD *)(a1 + 136) << 12;
    v6 = v16;
    v21[2] += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v21[2] = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v21[3] = *(_QWORD *)(a1 + 568);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v21, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v20, 0, sizeof(v20));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8), v9, v10, v11);
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1);
    while ( (int)RtlpWalkHeapInternal(a1, (__int64)v20) >= 0 )
    {
      if ( (v20[2] & 0x10000) != 0 )
      {
        v18 = 0LL;
        v19 = v20[1];
        v17 = v20[0];
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v6, v20[0]);
          if ( Mapping )
            v18 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v18 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v17, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v13 = *(_QWORD *)(a2 + 24);
    v14 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v17 = 305450479LL;
    v19 = 0xFFFFFFFFLL;
    v18 = 0LL;
    v8 = v14(&v17, 24LL, v13);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v8;
}
