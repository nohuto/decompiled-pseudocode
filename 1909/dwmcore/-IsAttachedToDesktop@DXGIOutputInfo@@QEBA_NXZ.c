/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180026A44
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800268E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800276C0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGIOutputInfo::IsAttachedToDesktop(DXGIOutputInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( !*((_DWORD *)this + 46) && !*((_DWORD *)this + 47) && !*((_DWORD *)this + 48) )
    return *((_DWORD *)this + 49) != 0;
  return v1;
}
