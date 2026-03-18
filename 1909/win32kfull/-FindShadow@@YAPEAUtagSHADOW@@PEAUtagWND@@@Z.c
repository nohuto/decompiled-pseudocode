/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858
 * Callers:
 *     WindowHasShadow @ 0x1C001A824 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146F18 (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023ABA8 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023ACB8 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023AD60 (zzzMoveShadow.c)
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
