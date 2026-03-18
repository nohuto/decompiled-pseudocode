/*
 * XREFs of xxxLoadHmodIndex @ 0x1C00B5F5C
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B544 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00B5140 (xxxLoadUserApiHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B61D8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientLoadLibrary @ 0x1C00B622C (ClientLoadLibrary.c)
 *     ClientFreeLibrary @ 0x1C00B80BC (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B8198 (--0-$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C0131108 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 ThreadWin32Thread; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  const WCHAR *v8; // rdx
  __int64 v9; // r15
  int AtomNameFromAtomTable; // ebx
  __int64 v11; // r8
  tagObjLock *v12; // rcx
  tagObjLock *v14; // rcx
  tagObjLock *v15; // [rsp+20h] [rbp-E0h] BYREF
  tagObjLock *v16; // [rsp+28h] [rbp-D8h] BYREF
  tagObjLock *v17; // [rsp+30h] [rbp-D0h] BYREF
  tagObjLock *v18; // [rsp+38h] [rbp-C8h] BYREF
  tagObjLock *v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v24[264]; // [rsp+290h] [rbp+190h] BYREF

  v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = 1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v15);
  if ( (int)v2 < 0 || (int)v2 >= catomSysTableEntries )
  {
    UserSetLastError(87LL, v5, v6, v7);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v2 + 416) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v2),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v2 == gihmodUserApiHook )
    {
      v8 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v2 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v20, 0LL);
        v4 = 0;
LABEL_7:
        tagObjLock::UnLock(v15);
        v9 = ClientLoadLibrary(&DestinationString, &v20);
        if ( !v9 )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError() != 1655
            && (unsigned int)UserGetLastError() != 577
            || !*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 884LL) )
          {
            return v9;
          }
          CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v19);
          v12 = v19;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v2 + 416) = -1LL;
LABEL_14:
          tagObjLock::UnLock(v12);
          return v9;
        }
        CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v18);
        if ( v4
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v2),
                                         v24,
                                         260LL),
               RtlInitUnicodeString(&String1, v24),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v16);
          ClientFreeLibrary(v9);
          v14 = v16;
          v9 = 0LL;
        }
        else
        {
          v11 = *(_QWORD *)(ThreadWin32Thread + 424);
          if ( ((1 << v2) & *(_DWORD *)(v11 + 412)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v2);
            *(_QWORD *)(v11 + 8 * v2 + 416) = v9;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 412LL) |= 1 << v2;
LABEL_13:
            v12 = v18;
            goto LABEL_14;
          }
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v17);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 8 * v2 + 416));
          v14 = v17;
        }
        tagObjLock::LockExclusive(v14);
        goto LABEL_13;
      }
      v8 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v20, v8);
    goto LABEL_7;
  }
  tagObjLock::UnLock(v15);
  return 0LL;
}
