/*
 * XREFs of LdrpLoadForwardedDll @ 0x180021EC0
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800220EC (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x180025240 (LdrpPreprocessDllName.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v10[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-2B8h] BYREF
  int v12; // [rsp+58h] [rbp-2B0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v14; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v15; // [rsp+A8h] [rbp-260h]
  _WORD v16[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v17; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v18[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v17.Buffer = v18;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v14, a1);
  if ( appended >= 0 )
  {
    v11 = 72LL;
    v12 = 1;
    memset(v13, 0, sizeof(v13));
    RtlActivateActivationContextUnsafeFast(&v11, *(_QWORD *)(a4 + 136));
    v10[0] = 0;
    appended = LdrpPreprocessDllName(&v14, &v17, a4, v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v17, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v11);
  }
  if ( v16 != v15 )
    NtdllpFreeStringRoutine(v15);
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
  if ( v18 != v17.Buffer )
    NtdllpFreeStringRoutine(v17.Buffer);
  return (unsigned int)appended;
}
