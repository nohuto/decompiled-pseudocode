/*
 * XREFs of ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030ADC
 * Callers:
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18002B160 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030A30 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030788 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::SetCurrentStateWithOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  struct BamoControllerNavigationOverrideProxy *v4; // rcx
  struct BamoControllerNavigationOverrideProxy *v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx

  v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
  if ( v4 != a2 )
  {
    v5 = v4;
    if ( a2 )
    {
      (**(void (__fastcall ***)(struct BamoControllerNavigationOverrideProxy *, struct BamoControllerNavigationOverrideProxy *))a2)(
        a2,
        v4);
      v5 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
    }
    *((_QWORD *)this + 24) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
    }
  }
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 32LL))((__int64)v4 + 8) )
  {
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, v6);
    v7 = (_QWORD *)*((_QWORD *)this + 9);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
      ControllerProcessor::UpdateNavigationState(i[3], 1LL, 0LL);
  }
  else
  {
    ControllerNavigationManager::ResumeNavigation(this, *((struct BamoControllerNavigationOverrideProxy **)this + 24));
  }
}
