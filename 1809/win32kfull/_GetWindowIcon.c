/*
 * XREFs of _GetWindowIcon @ 0x1C02214D8
 * Callers:
 *     xxxSendShutdownData @ 0x1C0208490 (xxxSendShutdownData.c)
 *     NtUserInternalGetWindowIcon @ 0x1C0218F10 (NtUserInternalGetWindowIcon.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  char v7; // dl
  __int64 v8; // rax
  struct tagCURSOR *v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  if ( (_DWORD)a2 == 1 )
    v5 = *(_QWORD *)(v2 + 272);
  else
    v5 = *(_QWORD *)(v2 + 264);
  LOBYTE(a2) = 3;
  v6 = (struct tagCURSOR *)HMValidateHandleNoRip(v5, a2);
  if ( (v6
     || ((v8 = *(_QWORD *)(a1 + 112), v3 != 1)
       ? (v6 = *(struct tagCURSOR **)(v8 + 112))
       : (v6 = *(struct tagCURSOR **)(v8 + 80)),
         v6 || (v6 = (struct tagCURSOR *)qword_1C030E080) != 0LL))
    && (v9 = _DuplicateCursor(v6, v7)) != 0LL )
  {
    return *(_QWORD *)v9;
  }
  else
  {
    return 0LL;
  }
}
