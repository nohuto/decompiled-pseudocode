/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x18016E360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetSizeConstraintOverridesPhysical(
        ApplicationViewOperation *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = 0LL;
  if ( a2 )
    v4 = (__int64)*a2;
  else
    v4 = 0LL;
  *(_QWORD *)((char *)this + 220) = v4;
  if ( a3 )
    v3 = (__int64)*a3;
  *(_QWORD *)((char *)this + 228) = v3;
  return 0LL;
}
