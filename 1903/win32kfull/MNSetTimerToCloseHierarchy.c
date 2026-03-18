/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C0222F30
 * Callers:
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_DWORD ***a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _DWORD *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  v4 = **a1;
  if ( (*v4 & 0x20) == 0 )
  {
    v5 = 0;
    goto LABEL_10;
  }
  if ( (***a1 & 0x4000) != 0 )
  {
LABEL_9:
    v5 = 1;
    goto LABEL_10;
  }
  v6 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 3));
  v5 = 0;
  if ( v6 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, *(_QWORD *)(v6 + 8));
    if ( *(_QWORD *)v8[0] )
    {
      if ( !InternalSetTimer(*((_QWORD *)**a1 + 2), 0xFFFFLL, LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1), 0LL, 0, 16) )
      {
        v5 = -1;
        goto LABEL_10;
      }
      ***a1 |= 0x4000u;
      **(_DWORD **)v8[0] |= 0x1000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, (__int64)v4, v2, v3);
  return v5;
}
