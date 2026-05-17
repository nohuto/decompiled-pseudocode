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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF100 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D20DC (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 */

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r14
  _QWORD *v7; // rsi
  int PendingEnclaveModule; // ebx
  _QWORD *i; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v15[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+CCh] [rbp-34h]
  int v17; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v18; // [rsp+D8h] [rbp-28h]
  __int16 v19; // [rsp+E0h] [rbp-20h] BYREF

  v5 = LdrpObtainLockedEnclave(a1, 1);
  if ( !v5 )
    return 3221225632LL;
  LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a2, v15);
  if ( v5[10] || (v7 = v5 + 11, (_QWORD *)*v7 != v7) )
  {
    PendingEnclaveModule = -1073741800;
  }
  else
  {
    v17 = 0x1000000;
    v18 = &v19;
    v19 = 0;
    v13 = 0x800000;
    PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v17, 0, &v13);
    if ( PendingEnclaveModule >= 0 )
    {
      v14[0] = 0;
      PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                               (_DWORD)v5,
                               (unsigned int)&v17,
                               v13,
                               7,
                               (__int64)v15,
                               0LL,
                               0LL,
                               (__int64)v14);
      if ( PendingEnclaveModule >= 0 )
      {
        for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
        {
          PendingEnclaveModule = LdrpLoadEnclaveModule(i[22]);
          if ( PendingEnclaveModule < 0 )
            goto LABEL_13;
        }
        PendingEnclaveModule = v14[0];
      }
    }
  }
LABEL_13:
  LdrpCleanupEnclaveLoadState(v5, (unsigned int)PendingEnclaveModule);
  RtlLeaveCriticalSection((__int64)(v5 + 2));
  LdrpDereferenceEnclave(v5);
  if ( v16 )
    RtlReleasePath(v15[0], v10, v11, v12);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PendingEnclaveModule);
  return (unsigned int)PendingEnclaveModule;
}
