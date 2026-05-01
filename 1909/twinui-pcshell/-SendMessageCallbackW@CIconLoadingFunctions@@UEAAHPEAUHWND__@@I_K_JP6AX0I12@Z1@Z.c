/*
 * XREFs of ?SendMessageCallbackW@CIconLoadingFunctions@@UEAAHPEAUHWND__@@I_K_JP6AX0I12@Z1@Z @ 0x1803670B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CIconLoadingFunctions::SendMessageCallbackW(
        CIconLoadingFunctions *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam,
        void (*lpResultCallBack)(HWND, unsigned int, unsigned __int64, __int64),
        ULONG_PTR dwData)
{
  return SendMessageCallbackW(a2, a3, a4, lParam, lpResultCallBack, dwData);
}
