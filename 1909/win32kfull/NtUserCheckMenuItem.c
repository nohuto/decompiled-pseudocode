/*
 * XREFs of NtUserCheckMenuItem @ 0x1C0159A40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _CheckMenuItem @ 0x1C0159B34 (_CheckMenuItem.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v17 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7, v8);
LABEL_8:
    v13 = -1;
    goto LABEL_7;
  }
  v9 = ValidateHmenu(a1);
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v16, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v16)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v12 = v17;
  if ( !v17 )
    v12 = *(_QWORD *)v16[0];
  v13 = CheckMenuItem(v12, a2, a3);
LABEL_7:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v10, v11);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
