/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C01F6A80
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        ULONG64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD v28[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-98h]
  _QWORD v30[3]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v31[3]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v32; // [rsp+98h] [rbp-50h] BYREF
  int v33; // [rsp+A8h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v10);
    v12 = 0;
  }
  else
  {
    v13 = ValidateHmenu(a1);
    v12 = 0;
    v29 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v28, v13);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
    {
      v14 = ValidateHwnd(a5);
      if ( v14 )
      {
        v30[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v30;
        v30[1] = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v15 = v29;
        if ( !v29 )
          v15 = *(_QWORD *)v28[0];
        v31[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v31;
        v31[1] = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v16 = (__int128 *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v16 = (__int128 *)MmUserProbeAddress;
          v32 = *v16;
          v33 = *((_DWORD *)v16 + 4);
          v16 = &v32;
        }
        v12 = xxxTrackPopupMenuEx(v28, a2, a3, a4, v14, v16);
        ThreadUnlock1(v18, v17, v19);
        ThreadUnlock1(v21, v20, v22);
      }
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v28, v11);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return v12;
}
