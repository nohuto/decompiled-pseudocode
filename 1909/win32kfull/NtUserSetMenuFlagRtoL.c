/*
 * XREFs of NtUserSetMenuFlagRtoL @ 0x1C0234990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v2 = 0LL;
  v10 = 0LL;
  v3 = ValidateHmenu(a1);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    v6 = v10;
    if ( !v10 )
      v6 = *(_QWORD *)v9[0];
    v2 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) |= 0x20u;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v4, v5);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
