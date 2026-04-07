/*
 * XREFs of ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800422FC
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180042380 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall OpenComposedEvent(int a1, __int64 a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax
  void *v8; // [rsp+28h] [rbp-50h]
  WCHAR Name[28]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  if ( StringCchPrintfW(Name, 0x1AuLL, L"%s%x", L"DwmComposedEvent_", a1) >= 0 )
  {
    v5 = OpenEventW(0x100000u, 0, Name);
    *a3 = v5;
    if ( !v5 )
    {
      v4 = -2144980991;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C44B8, 1u, -2144980991, 0x2Eu, v8);
    }
  }
  return v4;
}
