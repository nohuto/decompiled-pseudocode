/*
 * XREFs of xxxLoadHmodIndex @ 0x1C00B29DC
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00AF344 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00B4030 (xxxLoadUserApiHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ClientLoadLibrary @ 0x1C00B1B60 (ClientLoadLibrary.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B2CD4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientFreeLibrary @ 0x1C0126D08 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0126DE4 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C01389B0 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0240174 (--1-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 ThreadWin32Thread; // r15
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const WCHAR *v10; // rdx
  __int64 Library; // rsi
  int AtomNameFromAtomTable; // ebx
  tagDomLock *v13; // rcx
  __int64 v14; // r8
  _BYTE *v15; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  tagDomLock *v20; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v26[264]; // [rsp+290h] [rbp+190h] BYREF

  v4 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = 1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
  if ( (int)v4 < 0 || (int)v4 >= catomSysTableEntries )
  {
    UserSetLastError(87LL, v7, v8, v9);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v4 + 408) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v4),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v4 == gihmodUserApiHook )
    {
      v10 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v4 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v18, 0LL);
        v6 = 0;
LABEL_10:
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
        Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v18);
        if ( !Library )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError() != 1655
            && (unsigned int)UserGetLastError() != 577 )
          {
            return Library;
          }
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v23);
          v15 = v23;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v4 + 408) = -1LL;
LABEL_25:
          CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v15);
          return Library;
        }
        CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v22);
        *(_QWORD *)&String1.Length = 0LL;
        String1.Buffer = 0LL;
        if ( v6
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v4),
                                         v26,
                                         260LL),
               RtlInitUnicodeString(&String1, v26),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v20);
          ClientFreeLibrary(Library);
          v13 = v20;
          Library = 0LL;
        }
        else
        {
          v14 = *(_QWORD *)(ThreadWin32Thread + 416);
          if ( ((1 << v4) & *(_DWORD *)(v14 + 404)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v4);
            *(_QWORD *)(v14 + 8 * v4 + 408) = Library;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL) |= 1 << v4;
LABEL_19:
            v15 = v22;
            goto LABEL_25;
          }
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v21);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v4 + 408));
          v13 = v21;
        }
        tagDomLock::LockExclusive(v13);
        goto LABEL_19;
      }
      v10 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v18, v10);
    goto LABEL_10;
  }
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v17);
  return 0LL;
}
