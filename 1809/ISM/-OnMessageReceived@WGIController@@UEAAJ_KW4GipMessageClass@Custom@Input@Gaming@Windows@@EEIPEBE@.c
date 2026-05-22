/*
 * XREFs of ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x18006E280
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z @ 0x18006BF20 (-NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x18006E824 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x18006F088 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall WGIController::OnMessageReceived(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        struct _ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS *a7)
{
  struct _ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS *v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  unsigned __int8 *v13; // rdi
  unsigned __int8 v14; // r14
  _DWORD *v15; // rax
  DWORD TickCount; // eax
  _DWORD v18[4]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER v19; // [rsp+38h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+210h] [rbp+108h]
  char v22; // [rsp+22Ch] [rbp+124h]
  int v23; // [rsp+230h] [rbp+128h]
  char v24; // [rsp+234h] [rbp+12Ch]
  wil::details::in1diag3 *retaddr; // [rsp+680h] [rbp+578h]
  LARGE_INTEGER PerformanceCount; // [rsp+688h] [rbp+580h] BYREF

  WGIController::NotifyCurrentGamepadReading((WGIController *)(a1 - 16), 1);
  v10 = a7;
  if ( *(_BYTE *)(a1 + 225) )
  {
    if ( !a3 && a4 == 10 && a6 >= 0xB )
    {
      v11 = WGIRawInputProvider::NotifyExternalDeviceFault(
              *(WGIRawInputProvider **)(a1 + 96),
              a7,
              *(_QWORD *)(a1 + 128));
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v11);
        JUMPOUT(0x18006E3F2LL);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 224) && a6 >= 0x31 )
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v10 + 32;
    do
    {
      v14 = *v13;
      if ( *v13 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v18, 0, 0x640uLL);
        v15 = *(_DWORD **)(a1 + 152);
        v20 = 1600;
        v18[0] = 128;
        v18[1] = *v15;
        TickCount = GetTickCount();
        v22 = 1;
        v18[2] = TickCount;
        v19 = PerformanceCount;
        v21 = *(_QWORD *)(a1 + 128);
        v24 = 1;
        v23 = v14 + 44;
        WGIController::NotifyInputReport((WGIController *)(a1 - 16), (struct InputInfo *)v18);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 0x11 );
  }
  return 0LL;
}
