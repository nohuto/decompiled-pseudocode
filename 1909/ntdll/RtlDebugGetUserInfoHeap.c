/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x1801053E8
 * Callers:
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlGetUserInfoHeap @ 0x18006E580 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800706F4 (RtlpValidateHeapEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  char UserInfoHeap; // si
  char v10; // r14
  int v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18015FA38)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap(a1, 0LL);
    v13 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry(a1, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(a1, v12, a3, a4, a5);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return UserInfoHeap;
}
