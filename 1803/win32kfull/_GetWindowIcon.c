/*
 * XREFs of _GetWindowIcon @ 0x1C0109E70
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C0109E00 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C01E264C (xxxSendShutdownData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  if ( (_DWORD)a2 == 1 )
    v5 = *(_QWORD *)(v2 + 272);
  else
    v5 = *(_QWORD *)(v2 + 264);
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoRip(v5, a2);
  if ( (v6
     || ((v7 = *(_QWORD *)(a1 + 112), v3 != 1) ? (v6 = *(_QWORD *)(v7 + 112)) : (v6 = *(_QWORD *)(v7 + 80)),
         v6 || (v6 = qword_1C031D8E8) != 0))
    && (v8 = DuplicateCursor(v6)) != 0 )
  {
    return *(_QWORD *)v8;
  }
  else
  {
    return 0LL;
  }
}
