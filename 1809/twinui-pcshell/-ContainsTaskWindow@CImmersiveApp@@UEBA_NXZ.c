/*
 * XREFs of ?ContainsTaskWindow@CImmersiveApp@@UEBA_NXZ @ 0x18011B050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::ContainsTaskWindow(CImmersiveApp *this)
{
  return *((_QWORD *)this + 41) != 0LL;
}
