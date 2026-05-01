/*
 * XREFs of ?CreateSplashScreenEvents@CSplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801293E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::CreateSplashScreenEvents(
        __int64 (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        void **a3)
{
  return (**(this - 2))((char *)this - 16, a2, a3);
}
