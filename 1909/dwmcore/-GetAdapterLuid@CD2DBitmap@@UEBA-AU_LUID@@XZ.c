/*
 * XREFs of ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x1800DAB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD2DBitmap::GetAdapterLuid(CD2DBitmap *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) + 712LL);
  return (struct _LUID)a2;
}
