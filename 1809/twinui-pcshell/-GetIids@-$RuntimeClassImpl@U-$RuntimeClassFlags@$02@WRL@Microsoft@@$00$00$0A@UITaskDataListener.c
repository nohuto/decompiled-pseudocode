/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveShellHookNotification@@UIAppViewTitleChangeListener@56789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801ACB90
 * Callers:
 *     ?GetIids@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0180 (-GetIids@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
    v6[3] = GUID_53e25018_05eb_4e37_9feb_24e2e00658d3;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
