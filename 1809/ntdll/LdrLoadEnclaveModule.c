/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800CEEC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF100 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D20DC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  __int64 *v5; // r14
  _QWORD *v7; // rsi
  NTSTATUS EnclaveModule; // ebx
  _QWORD *i; // rdi
  unsigned int v10; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR Path[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+CCh] [rbp-34h]
  int v14; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v15; // [rsp+D8h] [rbp-28h]
  __int16 v16; // [rsp+E0h] [rbp-20h] BYREF

  v5 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  if ( !v5 )
    return -1073741664;
  LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
  if ( v5[10] || (v7 = v5 + 11, (_QWORD *)*v7 != v7) )
  {
    EnclaveModule = -1073741800;
  }
  else
  {
    v14 = 0x1000000;
    v15 = &v16;
    v16 = 0;
    v10 = 0x800000;
    EnclaveModule = LdrpPreprocessDllName(&DllName->Length, (unsigned __int16 *)&v14, 0LL, (int *)&v10);
    if ( EnclaveModule >= 0 )
    {
      v11[0] = 0;
      EnclaveModule = LdrpCreatePendingEnclaveModule(v5, &v14, v10, 7LL, Path, 0LL, 0LL, v11);
      if ( EnclaveModule >= 0 )
      {
        for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
        {
          EnclaveModule = LdrpLoadEnclaveModule(i[22]);
          if ( EnclaveModule < 0 )
            goto LABEL_13;
        }
        EnclaveModule = v11[0];
      }
    }
  }
LABEL_13:
  LdrpCleanupEnclaveLoadState(v5, (unsigned int)EnclaveModule);
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v5 + 2));
  LdrpDereferenceEnclave(v5);
  if ( v13 )
    RtlReleasePath(Path[0]);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)EnclaveModule);
  return EnclaveModule;
}
