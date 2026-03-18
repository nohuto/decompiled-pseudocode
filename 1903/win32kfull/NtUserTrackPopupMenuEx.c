/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C0236880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6)
{
  __int128 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  _QWORD v32[2]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B0h]
  __int128 *v34; // [rsp+50h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-98h] BYREF
  __int64 v36; // [rsp+68h] [rbp-90h]
  __int64 v37; // [rsp+70h] [rbp-88h]
  __int64 v38; // [rsp+78h] [rbp-80h] BYREF
  __int64 v39; // [rsp+80h] [rbp-78h]
  __int64 v40; // [rsp+88h] [rbp-70h]
  __int128 v41; // [rsp+98h] [rbp-60h] BYREF
  int v42; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v34 = a6;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32, v11, v12, v13);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v14, v15, v16);
    v20 = 0;
  }
  else
  {
    v21 = ValidateHmenu(a1);
    v20 = 0;
    v33 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v32, v21);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v32) )
    {
      v22 = ValidateHwnd(a5);
      if ( v22 )
      {
        v35 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v35;
        v36 = v22;
        HMLockObject(v22);
        v23 = v33;
        if ( !v33 )
        {
          v23 = *(_QWORD *)v32[0];
          v10 = v34;
        }
        v38 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v38;
        v39 = v23;
        HMLockObject(v23);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v41 = *v10;
          v42 = *((_DWORD *)v10 + 4);
          v10 = &v41;
          v34 = &v41;
        }
        v20 = xxxTrackPopupMenuEx(v32, a2, a3, a4, v22, v10);
        ThreadUnlock1(v25, v24, v26);
        ThreadUnlock1(v28, v27, v29);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v17, v18, v19);
  UserSessionSwitchLeaveCrit(v30);
  return v20;
}
