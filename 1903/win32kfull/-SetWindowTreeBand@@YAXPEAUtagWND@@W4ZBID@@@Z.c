/*
 * XREFs of ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C00888C4
 * Callers:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C00888C4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 * Callees:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C00888C4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     DwmAsyncChildZBandChange @ 0x1C0088934 (DwmAsyncChildZBandChange.c)
 */

__int64 __fastcall SetWindowTreeBand(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rax
  __int64 i; // rbx

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) = a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v8 = (void *)ReferenceDwmApiPort(v6, v5, v7);
    result = DwmAsyncChildZBandChange(v8);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
    result = SetWindowTreeBand(i, a2);
  return result;
}
