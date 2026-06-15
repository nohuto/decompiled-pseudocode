/*
 * XREFs of ?HasAuxiliaryInputStreamOnEndpoint@CSharedStreamGroupProxy@@UEAA_NPEBG@Z @ 0x1800E45B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSharedStreamGroupProxy::HasAuxiliaryInputStreamOnEndpoint(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *lpString2)
{
  const WCHAR *v2; // r8
  char v3; // bl

  v2 = (const WCHAR *)*((_QWORD *)this + 53);
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( CompareStringW(0x7Fu, 1u, v2, -1, lpString2, -1) != 2 )
    return 0;
  return v3;
}
