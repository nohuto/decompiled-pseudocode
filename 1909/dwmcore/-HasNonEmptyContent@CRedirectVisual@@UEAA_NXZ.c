/*
 * XREFs of ?HasNonEmptyContent@CRedirectVisual@@UEAA_NXZ @ 0x18019ED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectVisual::HasNonEmptyContent(CRedirectVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
    LOBYTE(v1) = (*(_DWORD *)(*(_QWORD *)(v1 + 56) + 88LL) & 0x80) != 0;
  return v1;
}
