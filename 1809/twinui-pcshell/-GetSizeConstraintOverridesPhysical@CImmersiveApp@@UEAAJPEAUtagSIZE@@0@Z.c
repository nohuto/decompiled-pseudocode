/*
 * XREFs of ?GetSizeConstraintOverridesPhysical@CImmersiveApp@@UEAAJPEAUtagSIZE@@0@Z @ 0x180081920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetSizeConstraintOverridesPhysical(
        CImmersiveApp *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 692);
  *a3 = *(struct tagSIZE *)((char *)this + 700);
  return 0LL;
}
