/*
 * XREFs of ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800AA4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::Opacity(
        CAccentTransitionAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 8) == 1 )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 3);
    v3[98] = *((_DWORD *)a2 + 5);
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0x2000LL);
  }
  else if ( *((int *)this + 8) <= 1 || *((int *)this + 8) > 6 )
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
