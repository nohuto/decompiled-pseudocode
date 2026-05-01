/*
 * XREFs of ?BelongsToPackageInternal@CImmersiveApp@@UEBA_NPEBG_N@Z @ 0x18011AB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CImmersiveApp::BelongsToPackageInternal(CImmersiveApp *this, const unsigned __int16 *a2, char a3)
{
  const WCHAR *v3; // rax
  char v4; // bl

  v3 = (const WCHAR *)*((_QWORD *)this + 63);
  if ( !v3 )
    return 0;
  v4 = 1;
  if ( (*((_BYTE *)this + 440) & 1) == 0 && !a3 )
    return 0;
  if ( CompareStringOrdinal(v3, -1, a2, -1, 1) != 2 )
    return 0;
  return v4;
}
