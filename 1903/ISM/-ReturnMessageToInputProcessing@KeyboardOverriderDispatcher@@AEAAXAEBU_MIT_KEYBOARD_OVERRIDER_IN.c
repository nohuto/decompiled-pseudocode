/*
 * XREFs of ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x18003570C
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800C033C (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800C0738 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800C0BA0 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

void __fastcall KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  __int64 v2; // r8
  __int128 v3; // [rsp+30h] [rbp-58h]
  int v4; // [rsp+40h] [rbp-48h]
  __int128 v5; // [rsp+48h] [rbp-40h] BYREF
  int v6; // [rsp+58h] [rbp-30h]
  __int128 v7; // [rsp+60h] [rbp-28h]

  v2 = *(_QWORD *)a2;
  LOWORD(v3) = *((_WORD *)a2 + 176);
  DWORD1(v3) = *((_DWORD *)a2 + 89);
  WORD4(v3) = *((_WORD *)a2 + 180);
  HIDWORD(v3) = *((_DWORD *)a2 + 91);
  LOWORD(v4) = *((_WORD *)a2 + 4);
  v5 = v3;
  v6 = v4;
  v7 = *((_OWORD *)a2 + 21);
  NtMITSynthesizeKeyboardInput(4LL, &v5, v2);
}
