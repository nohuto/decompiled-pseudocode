/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221274
 * Callers:
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, **a1);
  if ( (**(_DWORD **)v6[0] & 1) == 0 )
  {
    v3 = 0;
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v6[0] & 2) != 0 )
      {
        v1 = *(_QWORD *)v6[0];
        if ( *(_QWORD *)(*(_QWORD *)v6[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v6[0] + 8LL) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, *(_QWORD *)(*(_QWORD *)v6[0] + 64LL));
          break;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v6[0] + 32LL) )
      {
        v4 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v6[0] + 32LL));
        if ( v4 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, *(_QWORD *)(v4 + 8));
          if ( *(_QWORD *)v6[0] )
            continue;
        }
      }
      goto LABEL_12;
    }
  }
  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6[0] + 40LL) + 40LL) + 48LL);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6, v1, v2);
  return v3;
}
