/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C021E580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD v29[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-98h]
  _QWORD v31[3]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v33; // [rsp+98h] [rbp-50h] BYREF
  int v34; // [rsp+A8h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29, v10);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v11, v12, v13);
    v15 = 0;
  }
  else
  {
    v16 = ValidateHmenu(a1);
    v15 = 0;
    v30 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v29, v16);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v29) )
    {
      v17 = ValidateHwnd(a5);
      if ( v17 )
      {
        v31[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v31;
        v31[1] = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v18 = v30;
        if ( !v30 )
          v18 = *(_QWORD *)v29[0];
        v32[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v32;
        v32[1] = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v19 = (__int128 *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v19 = (__int128 *)MmUserProbeAddress;
          v33 = *v19;
          v34 = *((_DWORD *)v19 + 4);
          v19 = &v33;
        }
        v15 = xxxTrackPopupMenuEx(v29, a2, a3, a4, v17, v19);
        ThreadUnlock1(v21, v20);
        ThreadUnlock1(v23, v22);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v14);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v15;
}
