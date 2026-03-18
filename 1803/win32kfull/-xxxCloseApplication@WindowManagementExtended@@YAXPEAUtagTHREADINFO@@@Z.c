/*
 * XREFs of ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C01FF8B0 (xxxDWP_ProcessVirtKey.c)
 * Callees:
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C01FC080 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___.c)
 */

void __fastcall WindowManagementExtended::xxxCloseApplication(WindowManagementExtended *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 53) + 120LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 8LL);
    if ( (*(_BYTE *)(v4 + 9) & 2) == 0
      && !anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___(v3, v4) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 53) + 112LL);
      if ( !v6 || GetNonChildAncestor(v6) != v3 )
      {
        v10[0] = *((_QWORD *)this + 51);
        *((_QWORD *)this + 51) = v10;
        v10[1] = v3;
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
        xxxSetFocus((struct tagWND *)v3, 0LL, v5);
        v3 = ThreadUnlock1(v8, v7, v9);
      }
      if ( v3 )
        PostMessage((struct tagWND *)v3, 0x112u, 0xF060uLL, 0LL);
    }
  }
}
