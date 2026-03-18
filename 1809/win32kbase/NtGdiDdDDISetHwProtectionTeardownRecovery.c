/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00FEA50
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C00A5C60 (DCompositionForceRender.c)
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(_QWORD *a1)
{
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  return DCompositionForceRender(0, 1, HIDWORD(*a1) == 0, 0);
}
