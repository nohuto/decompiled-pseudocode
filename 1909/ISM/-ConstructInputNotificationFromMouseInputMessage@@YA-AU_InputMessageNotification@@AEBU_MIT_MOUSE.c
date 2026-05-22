/*
 * XREFs of ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BB774
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDE04 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstructInputNotificationFromMouseInputMessage(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  int v5; // eax
  __int128 v6; // xmm0
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // ecx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int64 result; // rax

  v2 = *(_OWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v4 = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 244) = 0;
  v5 = *(_DWORD *)(a2 + 188);
  *(_OWORD *)a1 = v2;
  *(_DWORD *)(a1 + 120) = v5;
  v6 = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 192);
  v7 = *(unsigned __int16 *)(a2 + 48);
  *(_OWORD *)(a1 + 16) = v4;
  v8 = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 32) = v6;
  v9 = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 48) = v8;
  v10 = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 64) = v9;
  v11 = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 80) = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 96) = v11;
  v12 = *(_OWORD *)(a2 + 200);
  *(_QWORD *)(a1 + 112) = v10;
  v13 = *(_OWORD *)(a2 + 216);
  v14 = *(unsigned __int16 *)(a2 + 52);
  *(_OWORD *)(a1 + 176) = v12;
  v15 = *(_OWORD *)(a2 + 232);
  *(_QWORD *)(a1 + 136) = (v14 << 16) | v7;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)a2;
  v16 = *(_QWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 192) = v13;
  *(_QWORD *)(a1 + 168) = v16;
  v17 = *(_OWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 264);
  result = a1;
  *(_OWORD *)(a1 + 208) = v15;
  *(_OWORD *)(a1 + 224) = v17;
  return result;
}
