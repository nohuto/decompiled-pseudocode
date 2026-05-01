/*
 * XREFs of ?GetSizeConstraintOverridesLogical@CImmersiveApp@@UEAAJPEAUtagSIZE@@0@Z @ 0x180081900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetSizeConstraintOverridesLogical(
        CImmersiveApp *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 724);
  *a3 = *(struct tagSIZE *)((char *)this + 732);
  return 0LL;
}
