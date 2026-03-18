/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01E2174
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C0212E00 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL, v2, v3, v4);
  }
  else
  {
    v5 = 1;
    SetOrClrWF(1, (__int64)a1, 0xDA01u, 0);
  }
  return v5;
}
