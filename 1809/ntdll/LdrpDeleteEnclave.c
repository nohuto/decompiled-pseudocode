/*
 * XREFs of LdrpDeleteEnclave @ 0x1800CF2BC
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A39B0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = NtTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[13] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823);
    a1[8] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(a1);
    return 0LL;
  }
  return result;
}
