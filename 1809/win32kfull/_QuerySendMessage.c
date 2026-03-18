/*
 * XREFs of _QuerySendMessage @ 0x1C01F6024
 * Callers:
 *     NtUserQuerySendMessage @ 0x1C021B2C0 (NtUserQuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01DB3C4 (TranslateSentPointerMessageForClient.c)
 */

_BOOL8 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  int v4; // eax
  unsigned int v5; // ecx
  __int16 v6; // r9
  unsigned __int64 *v7; // r10
  unsigned __int64 *v8; // r11

  v2 = *(_QWORD *)(a1 + 512);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD **)(v2 + 112);
  if ( v3 )
    v3 = (_QWORD *)*v3;
  *(_QWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 + 104);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  v4 = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 32) = v4;
  if ( !(unsigned int)IsPointerInputMessageWithState() && (v5 != 528 || v6 != 582) )
    return 1LL;
  return TranslateSentPointerMessageForClient(v5, v7, v8);
}
