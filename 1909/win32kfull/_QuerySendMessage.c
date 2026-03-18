/*
 * XREFs of _QuerySendMessage @ 0x1C020CD18
 * Callers:
 *     NtUserQuerySendMessage @ 0x1C0232D80 (NtUserQuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002AC4C (IsPointerInputMessageWithState.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01F0974 (TranslateSentPointerMessageForClient.c)
 */

_BOOL8 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned __int64 *v7; // r9
  unsigned __int64 *v8; // r10

  v2 = *(_QWORD *)(a1 + 504);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD **)(v2 + 112);
  if ( v3 )
    v3 = (_QWORD *)*v3;
  *(_QWORD *)a2 = v3;
  v4 = *(unsigned int *)(v2 + 104);
  *(_DWORD *)(a2 + 8) = v4;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  v5 = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 32) = v5;
  if ( !(unsigned int)IsPointerInputMessageWithState(v4) && (v6 != 528 || *(_WORD *)v7 != 582) )
    return 1LL;
  return TranslateSentPointerMessageForClient(v6, v7, v8);
}
