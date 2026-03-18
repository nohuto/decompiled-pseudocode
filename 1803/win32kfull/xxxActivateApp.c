/*
 * XREFs of xxxActivateApp @ 0x1C005A9D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxActivateApp(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8

  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(_DWORD *)(a2 + 12) & 1;
    if ( (*(_DWORD *)(a2 + 12) & 2) != 0 )
    {
      QueueNotifyTransformableMessage((struct tagWND *)a1, 0x1Cu, v4, v3, 0, 0);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((__int64 *)a1, 0x1Cu, (HWND)v4, v3, 0, 0, 0LL, 1, 1);
    }
  }
  return 1LL;
}
