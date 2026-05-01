/*
 * XREFs of ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x180134828
 * Callers:
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x18012A1E8 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x180134524 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x180134648 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18013476C (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::Initialize(PHKEY phkResult)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int Key; // eax
  __int64 v6; // rcx
  HKEY v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v10; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  LODWORD(v10) = CreateShellSessionKey((__int64)phkResult, &hKey);
  if ( (int)v10 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v2,
      (__int64)&v10);
    v3 = (unsigned int)v10;
    if ( (int)v10 >= 0 )
      goto LABEL_11;
    v4 = 15LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v3);
    goto LABEL_11;
  }
  Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  if ( Key > 0 )
    Key = (unsigned __int16)Key | 0x80070000;
  LODWORD(v10) = Key;
  if ( Key < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v6,
      (__int64)&v10);
    v3 = (unsigned int)v10;
    if ( (int)v10 >= 0 )
      goto LABEL_11;
    v4 = 32LL;
    goto LABEL_9;
  }
  v3 = 0;
LABEL_11:
  v7 = hKey;
  hKey = 0LL;
  if ( v7 )
    RegCloseKey(v7);
  return v3;
}
