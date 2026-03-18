/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C011B6F8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _CreatePopupMenu @ 0x1C011B6C0 (_CreatePopupMenu.c)
 *     _CreateMenu @ 0x1C011B6E0 (_CreateMenu.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C011B7B4 (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( *(_QWORD *)(gptiCurrent + 584LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 4u) )
    return 0LL;
  LOBYTE(a3) = 2;
  v5 = HMAllocObject(gptiCurrent, v4, a3);
  v6 = v5;
  if ( v5 )
  {
    if ( !(unsigned __int8)InitLookAsideRef<tagMENU>(v5) )
    {
      HMFreeObject(v6);
      v6 = 0LL;
    }
    if ( v6 )
    {
      if ( a1 )
      {
        *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) = 1;
        *(_QWORD *)(v6 + 128) = 0LL;
        *(_QWORD *)(v6 + 136) = 0LL;
        *(_DWORD *)(v6 + 144) = 0;
      }
    }
  }
  return (struct tagMENU *)v6;
}
