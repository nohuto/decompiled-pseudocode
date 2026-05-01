/*
 * XREFs of ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x180003BA8
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180002FB4 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(PVOID P)
{
  BOOLEAN result; // al

  if ( P )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
