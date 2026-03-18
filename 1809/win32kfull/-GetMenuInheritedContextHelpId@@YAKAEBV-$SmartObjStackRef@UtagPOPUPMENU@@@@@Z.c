/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0209D14
 * Callers:
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, **a1);
  if ( (**(_DWORD **)v5[0] & 1) == 0 )
  {
    v2 = 0;
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v5[0] & 2) != 0 )
      {
        v1 = *(_QWORD *)v5[0];
        if ( *(_QWORD *)(*(_QWORD *)v5[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v5[0] + 8LL) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_QWORD *)(*(_QWORD *)v5[0] + 64LL));
          break;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v5[0] + 32LL) )
      {
        v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v5[0] + 32LL));
        if ( v3 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_QWORD *)(v3 + 8));
          if ( *(_QWORD *)v5[0] )
            continue;
        }
      }
      goto LABEL_12;
    }
  }
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5[0] + 40LL) + 40LL) + 48LL);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v1);
  return v2;
}
