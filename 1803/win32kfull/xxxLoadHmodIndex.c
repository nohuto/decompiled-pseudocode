/*
 * XREFs of xxxLoadHmodIndex @ 0x1C00D86B0
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B448 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C003B220 (xxxLoadUserApiHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientLoadLibrary @ 0x1C00D8938 (ClientLoadLibrary.c)
 *     ClientFreeLibrary @ 0x1C00D8C60 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D8D28 (--0-$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1C00D8FA4 (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C00D8FE0 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 ThreadWin32Thread; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  const WCHAR *v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r9
  int AtomNameFromAtomTable; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  tagObjLock *v14; // rcx
  tagObjLock *v16; // rcx
  tagObjLock *v17; // [rsp+20h] [rbp-E0h] BYREF
  tagObjLock *v18; // [rsp+28h] [rbp-D8h] BYREF
  tagObjLock *v19; // [rsp+30h] [rbp-D0h] BYREF
  tagObjLock *v20; // [rsp+38h] [rbp-C8h] BYREF
  tagObjLock *v21; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v26[264]; // [rsp+290h] [rbp+190h] BYREF

  v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = 1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v17);
  if ( (int)v2 < 0 || (int)v2 >= catomSysTableEntries )
  {
    UserSetLastError(87LL, v5);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v2 + 408) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v2),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v2 == gihmodUserApiHook )
    {
      v6 = &gszFunctionUserApiHook;
    }
    else
    {
      if ( (_DWORD)v2 != gihmodUserApiHookWOW )
      {
        RtlInitUnicodeString(&v22, 0LL);
        v4 = 0;
LABEL_7:
        tagObjLock::UnLock(v17);
        v7 = ClientLoadLibrary(&DestinationString, &v22);
        if ( !v7 )
        {
          if ( (unsigned int)UserGetLastStatus() != -1073740284
            && (unsigned int)UserGetLastStatus() != -1073740760
            && (unsigned int)UserGetLastError() != 1655
            && (unsigned int)UserGetLastError() != 577
            || !*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 876LL) )
          {
            return v7;
          }
          CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v21);
          v14 = v21;
          *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v2 + 408) = -1LL;
LABEL_14:
          tagObjLock::UnLock(v14);
          return v7;
        }
        CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v20);
        if ( v4
          && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                         UserLibmgmtAtomTableHandle,
                                         *((unsigned __int16 *)&aatomSysLoaded + v2),
                                         v26,
                                         260LL),
               RtlInitUnicodeString(&String1, v26),
               !AtomNameFromAtomTable)
           || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
        {
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v18, v10, v11, v8);
          ClientFreeLibrary(v7);
          v16 = v18;
          v7 = 0LL;
        }
        else
        {
          v12 = *(_QWORD *)(ThreadWin32Thread + 416);
          v13 = (unsigned int)(1 << v2);
          if ( ((unsigned int)v13 & *(_DWORD *)(v12 + 404)) == 0 )
          {
            ++*((_DWORD *)&acatomSysUse + v2);
            *(_QWORD *)(v12 + 8 * v2 + 408) = v7;
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL) |= v13;
LABEL_13:
            v14 = v20;
            goto LABEL_14;
          }
          CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v19, v13, v12, v8);
          ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 8 * v2 + 408));
          v16 = v19;
        }
        tagObjLock::LockExclusive(v16);
        goto LABEL_13;
      }
      v6 = &gszFunctionUserApiHookWOW;
    }
    RtlInitUnicodeString(&v22, v6);
    goto LABEL_7;
  }
  tagObjLock::UnLock(v17);
  return 0LL;
}
