/*
 * XREFs of ?v_WndProc@JointResizeAcc@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803F1890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall JointResizeAcc::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
  if ( a3 == 61 && a5 == -25 )
    return UiaReturnRawElementProvider(this[1], a4, -25LL, (IRawElementProviderSimple *)this - 4);
  else
    return DefWindowProcW(this[1], a3, a4, a5);
}
