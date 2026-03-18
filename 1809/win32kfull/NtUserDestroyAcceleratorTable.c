/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C01257E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 8;
  v3 = HMValidateHandle(a1, v2);
  v8 = 0LL;
  v9 = v3;
  if ( v3 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v3) )
      HMFreeObject(v9);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
