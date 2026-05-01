/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180063E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_DWORD *)this + 118) & 1;
}
