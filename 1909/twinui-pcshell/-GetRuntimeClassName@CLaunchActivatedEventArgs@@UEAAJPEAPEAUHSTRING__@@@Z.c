/*
 * XREFs of ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180086960
 * Callers:
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4310 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4320 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4330 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4340 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WII@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4350 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WII@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WJA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4360 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WJA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WMA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4370 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WMA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4380 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WOA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E4390 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WOA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E43A0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::GetRuntimeClassName(CLaunchActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs", 0x3Cu, a2);
}
