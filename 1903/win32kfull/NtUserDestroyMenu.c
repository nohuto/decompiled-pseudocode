/*
 * XREFs of NtUserDestroyMenu @ 0x1C01252A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v2 = 0;
  v11 = 0LL;
  v3 = ValidateHmenu(a1);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v10, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v7 = v11;
    if ( !v11 )
      v7 = *(_QWORD *)v10[0];
    v2 = DestroyMenu(v7);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v4, v5, v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
