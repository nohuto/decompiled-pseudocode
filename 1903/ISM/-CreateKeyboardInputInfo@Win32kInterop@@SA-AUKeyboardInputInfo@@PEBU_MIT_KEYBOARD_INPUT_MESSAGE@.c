/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BBB40
 * Callers:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x1800BBA40 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800C0BA0 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18002C4C6 (_invalid_parameter_noinfo.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800520B4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_DWORD *__fastcall Win32kInterop::CreateKeyboardInputInfo(_DWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1

  memset_0(a1, 0, 0x160uLL);
  *a1 = 4;
  v4 = (_DWORD *)(a2 + 344);
  a1[6] = 352;
  if ( *(_QWORD *)a2 )
    v4 = (_DWORD *)a2;
  a1[1] = *v4;
  *((_QWORD *)a1 + 42) = *(_QWORD *)(a2 + 336);
  a1[2] = *(_DWORD *)(a2 + 312);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 320);
  *((_BYTE *)a1 + 344) = *(_DWORD *)(a2 + 328) != 0;
  *((_WORD *)a1 + 16) = *(_WORD *)(a2 + 8);
  *((_WORD *)a1 + 17) = *(_WORD *)(a2 + 10);
  *((_WORD *)a1 + 18) = *(_WORD *)(a2 + 12);
  *((_WORD *)a1 + 35) = *(_WORD *)(a2 + 270);
  a1[82] = *(_DWORD *)(a2 + 272);
  StringCchCopyW((unsigned __int16 *)a1 + 19, 0x10uLL, (size_t *)(a2 + 276));
  v8 = a1 + 18;
  v9 = (_OWORD *)(a2 + 14);
  if ( a1 == (_DWORD *)-72LL )
    goto LABEL_9;
  if ( a2 == -14 )
  {
    memset_0(v8, 0, 0x100uLL);
LABEL_9:
    *(_DWORD *)_o__errno(v8, v5, v6, v7) = 22;
    invalid_parameter_noinfo();
    return a1;
  }
  v10 = 2LL;
  do
  {
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[3] = v9[3];
    v8[4] = v9[4];
    v8[5] = v9[5];
    v8[6] = v9[6];
    v8 += 8;
    v11 = v9[7];
    v9 += 8;
    *(v8 - 1) = v11;
    --v10;
  }
  while ( v10 );
  return a1;
}
