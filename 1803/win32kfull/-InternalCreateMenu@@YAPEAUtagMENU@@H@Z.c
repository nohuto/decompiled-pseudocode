/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005E3D8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _CreateMenu @ 0x1C005E3C0 (_CreateMenu.c)
 *     _CreatePopupMenu @ 0x1C01134A0 (_CreatePopupMenu.c)
 * Callees:
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C005E490 (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( *(_QWORD *)(gptiCurrent + 584LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 880LL), 4LL) )
  {
    return 0LL;
  }
  LOBYTE(a3) = 2;
  v5 = HMAllocObject(gptiCurrent, v4, a3, 160LL);
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
