/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00CADF0
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C0142C70 (DCompositionForceRender.c)
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(_QWORD *a1)
{
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  return DCompositionForceRender(0LL, 1LL, HIDWORD(*a1) == 0, 0LL);
}
