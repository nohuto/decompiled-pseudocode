/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x18005F970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_DWORD *)this + 110) & 1;
}
