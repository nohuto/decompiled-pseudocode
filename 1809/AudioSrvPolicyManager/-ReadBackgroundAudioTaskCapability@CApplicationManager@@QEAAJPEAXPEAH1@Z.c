/*
 * XREFs of ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18001E060
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundAudioTaskCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  HRESULT v7; // ebx
  int v8; // esi
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  ppv = this;
  *a3 = 0;
  *a4 = 0;
  v7 = CoInitializeEx(0LL, 0);
  if ( v7 < 0 )
    goto LABEL_13;
  v7 = CoCreateInstance(&CLSID_BackgroundTaskCapability, 0LL, 1u, &GUID_d54e68c2_54cd_48b3_ad9a_3f4a4503ba80, &ppv);
  if ( v7 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(LPVOID, void *, __int64, int *))(*(_QWORD *)ppv + 48LL))(ppv, a2, 1LL, a3);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( *a3 )
      *a4 = 1;
    if ( v8 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v8);
    }
  }
  CoUninitialize();
  if ( v7 < 0 )
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v7);
    }
    AudPolicyLogError("CApplicationManager::ReadBackgroundAudioTaskCapability", 1290, v7);
  }
  return (unsigned int)v7;
}
