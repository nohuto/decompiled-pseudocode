/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248
 * Callers:
 *     WindowHasShadow @ 0x1C008C214 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146168 (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023B1C8 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023B2D8 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023B380 (zzzMoveShadow.c)
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
