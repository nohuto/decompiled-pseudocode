/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A8568
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _CreateMenu @ 0x1C00A8550 (_CreateMenu.c)
 *     _CreatePopupMenu @ 0x1C0134080 (_CreatePopupMenu.c)
 * Callees:
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C00A8624 (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *(_QWORD *)(gptiCurrent + 592LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 4LL) )
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
