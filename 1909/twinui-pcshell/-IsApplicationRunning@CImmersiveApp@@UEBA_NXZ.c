/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180065FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_DWORD *)this + 118) & 1;
}
