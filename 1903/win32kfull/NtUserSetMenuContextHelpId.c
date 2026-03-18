/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C0234ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v4 = 0LL;
  v13 = 0LL;
  v5 = ValidateHmenu(a1);
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v12, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v9 = v13;
    if ( !v13 )
      v9 = *(_QWORD *)v12[0];
    v4 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + 48LL) = a2;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v6, v7, v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
