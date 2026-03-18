/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C0130470
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 8;
  v5 = HMValidateHandle(a1, v2, v3, v4);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v5) )
      HMFreeObject(v8);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
