/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02217B4
 * Callers:
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, **a1);
  if ( (**(_DWORD **)v7[0] & 1) == 0 )
  {
    v4 = 0;
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v7[0] & 2) != 0 )
      {
        v1 = *(_QWORD *)v7[0];
        if ( *(_QWORD *)(*(_QWORD *)v7[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v7[0] + 8LL) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *(_QWORD *)(*(_QWORD *)v7[0] + 64LL));
          break;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v7[0] + 32LL) )
      {
        v5 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v7[0] + 32LL));
        if ( v5 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *(_QWORD *)(v5 + 8));
          if ( *(_QWORD *)v7[0] )
            continue;
        }
      }
      goto LABEL_12;
    }
  }
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7[0] + 40LL) + 40LL) + 48LL);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, v1, v2, v3);
  return v4;
}
