/*
 * XREFs of PpmUpdateTargetProcessorPolicy @ 0x1401B5C38
 * Callers:
 *     PpmUpdateProcessorPolicyCallback @ 0x140177BD0 (PpmUpdateProcessorPolicyCallback.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PpmEventAutonomousModeChange @ 0x1402E54F0 (PpmEventAutonomousModeChange.c)
 */

__int64 (__fastcall *__fastcall PpmUpdateTargetProcessorPolicy(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD)
{
  void (__fastcall *v5)(__int64, _QWORD); // rax
  void (__fastcall *v10)(__int64, _QWORD); // rax
  void (__fastcall *v11)(__int64, _QWORD); // rax
  void (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v5 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 232);
  if ( v5 && (*a3 & 0x20) != 0 )
    v5(a2, *(unsigned int *)(a4 + 52));
  v10 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 240);
  if ( v10 && (*a3 & 0x40) != 0 )
    v10(a2, *(unsigned int *)(a4 + 56));
  v11 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 248);
  if ( v11 && (PpmAllowedActions & 0x100) != 0 )
    v11(a2, *(unsigned int *)(a4 + 72));
  v12 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 256);
  if ( v12 )
  {
    if ( (*a3 & 0x80u) != 0 )
    {
      *(_BYTE *)(a1 + 351) = *(_BYTE *)(a4 + 76);
      v12(a2, *(unsigned __int8 *)(a4 + 76));
      if ( a5 )
        PpmEventAutonomousModeChange(a5, *(unsigned __int8 *)(a1 + 351));
    }
  }
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 224);
  if ( result )
  {
    if ( (*a3 & 0x200) != 0 )
      return (__int64 (__fastcall *)(__int64, _QWORD))result(a2, (unsigned int)PpmPerfTimeWindow);
  }
  return result;
}
