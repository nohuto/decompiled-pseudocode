/*
 * XREFs of ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800073AC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180007658 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18006818C (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x1800154EC (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180015598 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 */

int __fastcall HampAppInfoValidateAndCapture(
        const unsigned __int16 *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  int result; // eax

  result = HampAppInfoValidate(a1, a2, a3, a4);
  if ( result >= 0 )
  {
    HampAppInfoInitialize(a1, a2, a3, a4, a5);
    return 0;
  }
  return result;
}
