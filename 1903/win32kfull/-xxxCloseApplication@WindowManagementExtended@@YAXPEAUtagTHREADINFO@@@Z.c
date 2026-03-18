/*
 * XREFs of ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E670
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C000AC00 (xxxDWP_ProcessVirtKey.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___ @ 0x1C023CF90 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___.c)
 */

void __fastcall WindowManagementExtended::xxxCloseApplication(WindowManagementExtended *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 53) + 128LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
    if ( (*(_BYTE *)(v4 + 9) & 2) == 0
      && !anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___(v3, v4) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 53) + 120LL);
      if ( !v5 || GetNonChildAncestor(v5) != v3 )
      {
        v6 = *((_QWORD *)this + 51);
        v12[2] = 0LL;
        v12[0] = v6;
        *((_QWORD *)this + 51) = v12;
        v12[1] = v3;
        HMLockObject(v3);
        xxxSetFocus((struct tagWND *)v3, v7, v8);
        v3 = ThreadUnlock1(v10, v9, v11);
      }
      if ( v3 )
        PostMessage(v3, 274, 61536, 0);
    }
  }
}
