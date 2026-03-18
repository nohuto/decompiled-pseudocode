/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01BF6EC
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01ECB10 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v3 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL, v2);
  }
  else
  {
    v3 = 1;
    SetOrClrWF(1, (__int64)a1, 55809, 0);
  }
  return v3;
}
