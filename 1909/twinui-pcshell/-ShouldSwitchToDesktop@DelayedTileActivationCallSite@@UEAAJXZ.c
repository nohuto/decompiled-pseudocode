/*
 * XREFs of ?ShouldSwitchToDesktop@DelayedTileActivationCallSite@@UEAAJXZ @ 0x1800ACE60
 * Callers:
 *     <none>
 * Callees:
 *     ?value@?$optional@_N@std@@QEGBAAEB_NXZ @ 0x1801D2FC0 (-value@-$optional@_N@std@@QEGBAAEB_NXZ.c)
 */

__int64 __fastcall DelayedTileActivationCallSite::ShouldSwitchToDesktop(DelayedTileActivationCallSite *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_BYTE *)this + 29) || !*(_BYTE *)std::optional<bool>::value((char *)this + 28) )
    return 1;
  return v1;
}
