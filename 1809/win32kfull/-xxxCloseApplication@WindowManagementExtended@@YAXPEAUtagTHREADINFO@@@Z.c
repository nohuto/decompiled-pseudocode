/*
 * XREFs of ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02261E8
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C0008640 (xxxDWP_ProcessVirtKey.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C0224B00 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___.c)
 */

void __fastcall WindowManagementExtended::xxxCloseApplication(WindowManagementExtended *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 54) + 120LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 8LL);
    if ( (*(_BYTE *)(v4 + 9) & 2) == 0
      && !anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___(v3, v4) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 54) + 112LL);
      if ( !v8 || GetNonChildAncestor(v8) != v3 )
      {
        v11[0] = *((_QWORD *)this + 52);
        *((_QWORD *)this + 52) = v11;
        v11[1] = v3;
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
        xxxSetFocus((struct tagWND *)v3, v5, v6, v7);
        v3 = ThreadUnlock1(v10, v9);
      }
      if ( v3 )
        PostMessage((struct tagWND *)v3, 0x112u, 0xF060uLL, 0LL);
    }
  }
}
