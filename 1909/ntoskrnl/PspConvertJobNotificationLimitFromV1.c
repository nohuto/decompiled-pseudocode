/*
 * XREFs of PspConvertJobNotificationLimitFromV1 @ 0x1406F03EC
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobNotificationLimitFromV1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a2 + 36) = result;
  return result;
}
