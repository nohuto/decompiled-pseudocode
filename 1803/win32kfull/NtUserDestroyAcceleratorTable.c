/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C0109CA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi

  EnterCrit(0LL, 1LL);
  v2 = HMValidateHandle(a1, 8);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v2) )
      HMFreeObject(v8);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
