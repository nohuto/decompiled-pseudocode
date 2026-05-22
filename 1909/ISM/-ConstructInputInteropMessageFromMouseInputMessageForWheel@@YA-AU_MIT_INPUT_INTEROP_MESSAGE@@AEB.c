/*
 * XREFs of ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BB668
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDE04 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

__int64 __fastcall ConstructInputInteropMessageFromMouseInputMessageForWheel(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  memset_0((void *)(a1 + 4), 0, 0x11CuLL);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = 1;
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 184);
  v4 = -1LL;
  if ( *(_QWORD *)a2 )
    v4 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 64) = v4;
  *(_DWORD *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 116) = 1;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(a1 + 60) = (*(_WORD *)(a2 + 12) & 0x400) != 0 ? 0x80000 : 0x100000;
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 120) = *(__int16 *)(a2 + 14);
  return a1;
}
