/*
 * XREFs of ?GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x180087370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetSizeConstraintOverridesPhysical(
        ApplicationViewOperation *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 220);
  *a3 = *(struct tagSIZE *)((char *)this + 228);
  return 0LL;
}
