/*
 * XREFs of xxxLoadHmodIndex @ 0x1C005383C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C0050164 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C0054D80 (xxxLoadUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ClientLoadLibrary @ 0x1C00529C0 (ClientLoadLibrary.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0053B34 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ClientFreeLibrary @ 0x1C0102438 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0102514 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C01129B0 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C023FB54 (--1-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  __int64 v1; // r14
  __int64 ThreadWin32Thread; // r15
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // rdx
  __int64 Library; // rsi
  int AtomNameFromAtomTable; // ebx
  tagDomLock *v10; // rcx
  __int64 v11; // r8
  _BYTE *v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  tagDomLock *v17; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v23[264]; // [rsp+290h] [rbp+190h] BYREF

  v1 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = 1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v14);
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL, v4, v5, v6);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v1),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v1 == gihmodUserApiHook )
    {
      v7 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v1 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v15, 0LL);
        v3 = 0;
LABEL_10:
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v14);
        Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v15);
        if ( !Library )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError() != 1655
            && (unsigned int)UserGetLastError() != 577 )
          {
            return Library;
          }
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v20);
          v12 = v20;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408) = -1LL;
LABEL_25:
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v12);
          return Library;
        }
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v19);
        *(_QWORD *)&String1.Length = 0LL;
        String1.Buffer = 0LL;
        if ( v3
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v1),
                                         v23,
                                         260LL),
               RtlInitUnicodeString(&String1, v23),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v17);
          ClientFreeLibrary(Library);
          v10 = v17;
          Library = 0LL;
        }
        else
        {
          v11 = *(_QWORD *)(ThreadWin32Thread + 416);
          if ( ((1 << v1) & *(_DWORD *)(v11 + 404)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v1);
            *(_QWORD *)(v11 + 8 * v1 + 408) = Library;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL) |= 1 << v1;
LABEL_19:
            v12 = v19;
            goto LABEL_25;
          }
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v18);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v1 + 408));
          v10 = v18;
        }
        tagDomLock::LockExclusive(v10);
        goto LABEL_19;
      }
      v7 = gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v15, v7);
    goto LABEL_10;
  }
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v14);
  return 0LL;
}
