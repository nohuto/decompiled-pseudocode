/*
 * XREFs of sub_1801052B0 @ 0x1801052B0
 * Callers:
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

BOOLEAN __fastcall sub_1801052B0(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3, PVOID *a4, PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // si
  char v10; // r14
  ULONG v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18015FA38)(HeapHandle);
  if ( sub_180019C74(HeapHandle, "RtlGetUserInfoHeap") )
  {
    v12 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v10 = 1;
      v12 |= 1u;
    }
    sub_1801061B8((_DWORD)HeapHandle);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( sub_1800704A4((unsigned __int64)HeapHandle, v13, "RtlGetUserInfoHeap") )
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
