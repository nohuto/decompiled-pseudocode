/*
 * XREFs of RtlReleasePrivilege @ 0x18007FB70
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x18009CF00 (ZwAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(_QWORD *a1)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v5; // rcx

  v2 = *((_DWORD *)a1 + 8);
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
    v2 = *((_DWORD *)a1 + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread(-2LL, 5LL, a1 + 1);
    v5 = a1[1];
    if ( v5 )
      ZwClose(v5);
  }
  v3 = a1[2];
  if ( (_QWORD *)v3 != (_QWORD *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  ZwClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
