/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C0236260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD v30[2]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h]
  __int128 *v32; // [rsp+50h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-98h] BYREF
  __int64 v34; // [rsp+68h] [rbp-90h]
  __int64 v35; // [rsp+70h] [rbp-88h]
  __int64 v36; // [rsp+78h] [rbp-80h] BYREF
  __int64 v37; // [rsp+80h] [rbp-78h]
  __int64 v38; // [rsp+88h] [rbp-70h]
  __int128 v39; // [rsp+98h] [rbp-60h] BYREF
  int v40; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v32 = a6;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v30, v11, v12);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v13, v14, v15);
    v18 = 0;
  }
  else
  {
    v19 = ValidateHmenu(a1);
    v18 = 0;
    v31 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v30, v19);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
    {
      v20 = ValidateHwnd(a5);
      if ( v20 )
      {
        v33 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v33;
        v34 = v20;
        HMLockObject(v20);
        v21 = v31;
        if ( !v31 )
        {
          v21 = *(_QWORD *)v30[0];
          v10 = v32;
        }
        v36 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v36;
        v37 = v21;
        HMLockObject(v21);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v39 = *v10;
          v40 = *((_DWORD *)v10 + 4);
          v10 = &v39;
          v32 = &v39;
        }
        v18 = xxxTrackPopupMenuEx(v30, a2, a3, a4, v20, v10);
        ThreadUnlock1(v23, v22, v24);
        ThreadUnlock1(v26, v25, v27);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v16, v17);
  UserSessionSwitchLeaveCrit(v28);
  return v18;
}
