/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C007CCEC (WindowHasShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0119E48 (zzzUpdateShadowAlpha.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C01FABB4 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C01FACA4 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C01FAD2C (zzzMoveShadow.c)
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
