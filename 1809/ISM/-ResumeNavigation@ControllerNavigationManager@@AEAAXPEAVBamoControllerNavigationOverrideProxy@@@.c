/*
 * XREFs of ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030788
 * Callers:
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18002B220 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180030ADC (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 * Callees:
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x1800341D0 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::ResumeNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  unsigned int v2; // ebp
  struct tagPOINT v3; // rsi
  char *v5; // rbx
  struct tagRECT v6; // xmm6
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  ControllerProcessor *v9; // rcx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  *(_QWORD *)&v10.left = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v10.right = 0LL;
  if ( a2 )
  {
    v5 = (char *)a2 + 8;
    v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
    v6 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))(v5);
    v3 = *(struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 56LL))(v5);
  }
  else
  {
    v6 = v10;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (ControllerProcessor *)i[3];
    v10 = v6;
    ControllerProcessor::NavigationResume(v9, v2, &v10, v3);
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 0LL);
}
