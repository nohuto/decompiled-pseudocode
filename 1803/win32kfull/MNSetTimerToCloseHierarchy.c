/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C01E54D4
 * Callers:
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 * Callees:
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_DWORD ***a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, 0LL);
  v2 = **a1;
  if ( (*v2 & 0x20) == 0 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  if ( (***a1 & 0x4000) != 0 )
  {
LABEL_9:
    v3 = 1;
    goto LABEL_10;
  }
  v4 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 3));
  v3 = 0;
  if ( v4 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, *(_QWORD *)(v4 + 8));
    if ( *(_QWORD *)v6[0] )
    {
      if ( !InternalSetTimer(*((_QWORD *)**a1 + 2), 0xFFFFLL, gdtMNDropDown, 0LL, 0, 16) )
      {
        v3 = -1;
        goto LABEL_10;
      }
      ***a1 |= 0x4000u;
      **(_DWORD **)v6[0] |= 0x1000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6, (__int64)v2);
  return v3;
}
