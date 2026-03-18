/*
 * XREFs of NtUserDestroyMenu @ 0x1C0101A20
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v2 = 0;
  v10 = 0LL;
  v3 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v10;
    if ( !v10 )
      v6 = *(_QWORD *)v9[0];
    v2 = DestroyMenu(v6);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v4, v5);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
