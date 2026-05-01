/*
 * XREFs of ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x18023C328
 * Callers:
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x18023C21C (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LightweightPropertySet::s_MangleName(const unsigned __int16 *a1, unsigned __int16 *a2)
{
  _o_wcscpy_s(a2, 256LL, L"LightweightProperty_");
  _o_wcscat_s(a2, 256LL, a1);
}
