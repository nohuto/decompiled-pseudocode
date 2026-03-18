/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C01F5480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  SmartObjStackRefBase<tagMENU>::Init(v13, 0LL);
  v4 = 0LL;
  v14 = 0LL;
  v5 = ValidateHmenu(a1);
  v14 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v13, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v13)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v7 = v14;
    if ( !v14 )
      v7 = *(_QWORD *)v13[0];
    v4 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v7 + 40) + 48LL) = a2;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
