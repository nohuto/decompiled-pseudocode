/*
 * XREFs of PspConvertJobNotificationLimitFromV2 @ 0x1406E6480
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobNotificationLimitFromV2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 40);
  result = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a2 + 36) = result;
  return result;
}
