/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01F8494
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C022ABA0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00167A8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx

  v7 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0, a3) )
  {
    UserSetLastError(5LL, v4, v5, v6);
  }
  else
  {
    v7 = 1;
    SetOrClrWF(1, (__int64)a1, 0xDA01u, 0);
  }
  return v7;
}
