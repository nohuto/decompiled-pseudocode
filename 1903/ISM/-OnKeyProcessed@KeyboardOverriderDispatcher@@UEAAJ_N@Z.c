/*
 * XREFs of ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800C0BA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x18003570C (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?ShouldSendToNarrator@KeyboardOverriderDispatcher@@AEBA_NAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800357B0 (-ShouldSendToNarrator@KeyboardOverriderDispatcher@@AEBA_NAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BBB40 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800C0D28 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?pop@?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAAXXZ @ 0x1800C164C (-pop@-$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MES.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::OnKeyProcessed(KeyboardOverriderDispatcher *this, char a2, __int64 a3)
{
  char *v3; // rdi
  _QWORD *v4; // rax
  _OWORD *v6; // rdx
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  char v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v25; // rsi
  const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD v31[92]; // [rsp+20h] [rbp-188h] BYREF

  v3 = (char *)this + 24;
  LOBYTE(a3) = a2;
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v6 = *(_OWORD **)(v4[1] + 8 * (*((_QWORD *)this + 6) & (v4[2] - 1LL)));
  v7 = 2LL;
  v8 = v31;
  do
  {
    v9 = v6[1];
    *v8 = *v6;
    v10 = v6[2];
    v8[1] = v9;
    v11 = v6[3];
    v8[2] = v10;
    v12 = v6[4];
    v8[3] = v11;
    v13 = v6[5];
    v8[4] = v12;
    v14 = v6[6];
    v8[5] = v13;
    v15 = v6[7];
    v6 += 8;
    v8[6] = v14;
    v8 += 8;
    *(v8 - 1) = v15;
    --v7;
  }
  while ( v7 );
  v16 = v6[1];
  *v8 = *v6;
  v17 = v6[2];
  v8[1] = v16;
  v18 = v6[3];
  v8[2] = v17;
  v19 = v6[4];
  v8[3] = v18;
  v20 = v6[5];
  v8[4] = v19;
  v21 = v6[6];
  v8[5] = v20;
  v8[6] = v21;
  std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop(v3, v6, a3, 128LL);
  if ( !v22 )
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
      this,
      (const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *)v31);
  *((_BYTE *)this + 360) = 0;
  while ( *((_QWORD *)this + 7) )
  {
    v23 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 )
      v23 = (_QWORD *)*v23;
    v24 = *((_QWORD *)v3 + 3) & (v23[2] - 1LL);
    v25 = *(const struct _MIT_KEYBOARD_INPUT_MESSAGE **)(v23[1] + 8 * v24);
    if ( KeyboardOverriderDispatcher::ShouldSendToNarrator((KeyboardOverriderDispatcher *)v24, v25) )
    {
      Win32kInterop::CreateKeyboardInputInfo(v31, (__int64)v26);
      KeyboardOverriderDispatcher::SendMessageToNarrator(this, v25, (const struct KeyboardInputInfo *)v31);
      return 0LL;
    }
    KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(this, v26);
    std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop(v3, v27, v28, v29);
  }
  return 0LL;
}
