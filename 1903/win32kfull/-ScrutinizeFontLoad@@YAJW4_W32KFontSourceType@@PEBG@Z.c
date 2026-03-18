/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C013FB2C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C007DF1C (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C027018C (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C027036C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C02706FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007DB28 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007E538 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C026FE7C (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  struct UmfdTls *v14; // rax
  __int64 v15; // rcx
  const WCHAR *v16; // r8
  const WCHAR *v17; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v19 = 0;
  v5 = a1;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(a1, a2, a3, a4)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v14 = UmfdTls::EnsureTls(v7, v6, v8, v9);
    if ( !v14 )
      return -1073741801;
    v15 = *((_QWORD *)v14 + 3);
    if ( !v15 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v15 + 16);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
  if ( result >= 0 )
  {
    v13 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v13 >= 0 )
    {
      if ( (v19 & 1) != 0 )
      {
        v16 = &word_1C02DAB68;
        if ( a2 )
          v16 = (const WCHAR *)a2;
        LogFontLoadAttempt(ProcessHandle, v5, v16);
        v13 = -1073741790;
      }
      else if ( (v19 & 2) != 0 )
      {
        v17 = &word_1C02DAB68;
        if ( a2 )
          v17 = (const WCHAR *)a2;
        LogFontLoadAttempt(ProcessHandle, v5, v17);
      }
    }
    ZwClose(ProcessHandle);
    return v13;
  }
  return result;
}
