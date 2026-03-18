/*
 * XREFs of NtUserCheckMenuItem @ 0x1C01306C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _CheckMenuItem @ 0x1C01307A0 (_CheckMenuItem.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v17 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
LABEL_8:
    v10 = -1;
    goto LABEL_7;
  }
  v7 = ValidateHmenu(a1);
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v16, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v16)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v17;
  if ( !v17 )
    v9 = *(_QWORD *)v16[0];
  v10 = CheckMenuItem(v9, a2, a3);
LABEL_7:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v10;
}
