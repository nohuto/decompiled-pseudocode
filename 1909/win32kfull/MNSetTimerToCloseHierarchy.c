/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C02229F0
 * Callers:
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_DWORD ***a1)
{
  __int64 v2; // r8
  _DWORD *v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0LL);
  v3 = **a1;
  if ( (*v3 & 0x20) == 0 )
  {
    v4 = 0;
    goto LABEL_10;
  }
  if ( (***a1 & 0x4000) != 0 )
  {
LABEL_9:
    v4 = 1;
    goto LABEL_10;
  }
  v5 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 3));
  v4 = 0;
  if ( v5 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *(_QWORD *)(v5 + 8));
    if ( *(_QWORD *)v7[0] )
    {
      if ( !InternalSetTimer(*((_QWORD *)**a1 + 2), 0xFFFFLL, LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1), 0LL, 0, 16) )
      {
        v4 = -1;
        goto LABEL_10;
      }
      ***a1 |= 0x4000u;
      **(_DWORD **)v7[0] |= 0x1000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, (__int64)v3, v2);
  return v4;
}
