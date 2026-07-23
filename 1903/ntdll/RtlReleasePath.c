/*
 * XREFs of RtlReleasePath @ 0x180032330
 * Callers:
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_180081880 @ 0x180081880 (sub_180081880.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

void __cdecl RtlReleasePath(PWSTR Path)
{
  PWSTR v2; // rdi

  RtlAcquireSRWLockExclusive(&stru_1801664A0);
  --*((_QWORD *)Path - 4);
  v2 = Path - 56;
  if ( *((_QWORD *)Path - 4) )
    v2 = 0LL;
  RtlReleaseSRWLockExclusive(&stru_1801664A0);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
