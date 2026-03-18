/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C0079DF8 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C0222B78 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C0222C6C (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C0222CF8 (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0222DBC (zzzUpdateShadowAlpha.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
