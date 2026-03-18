/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0111E94
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF82C (-bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C023F434 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C023F958 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007F2BC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00815C8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C023F134 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  struct UmfdTls *v10; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // r8
  const WCHAR *v13; // r8
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+64h] [rbp+1Ch]
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  v3 = a1;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(a1, a2)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v10 = UmfdTls::EnsureTls(v5, v4);
    if ( !v10 )
      return -1073741801;
    v11 = *((_QWORD *)v10 + 3);
    if ( !v11 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v11 + 16);
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
    v9 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v9 >= 0 )
    {
      if ( (v15 & 1) != 0 )
      {
        v12 = &pwsz;
        if ( a2 )
          v12 = (const WCHAR *)a2;
        LogFontLoadAttempt(ProcessHandle, v3, v12);
        v9 = -1073741790;
      }
      else if ( (v15 & 2) != 0 )
      {
        v13 = &pwsz;
        if ( a2 )
          v13 = (const WCHAR *)a2;
        LogFontLoadAttempt(ProcessHandle, v3, v13);
      }
    }
    ZwClose(ProcessHandle);
    return v9;
  }
  return result;
}
