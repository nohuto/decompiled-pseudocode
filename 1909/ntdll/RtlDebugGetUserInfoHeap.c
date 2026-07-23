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

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        char *a3,
        PVOID *a4,
        PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // si
  char v10; // r14
  ULONG v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18015FA38)(HeapHandle);
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlGetUserInfoHeap") )
  {
    v12 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap((_DWORD)HeapHandle);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap(HeapHandle, v12, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return UserInfoHeap;
}
