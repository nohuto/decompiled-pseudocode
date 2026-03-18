/*
 * XREFs of _GetWindowIcon @ 0x1C015C7E4
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C015C760 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C021F914 (xxxSendShutdownData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015C85C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  bool v7; // dl
  __int64 v8; // rax
  struct tagCURSOR *v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( a2 == 1 )
    v5 = *(_QWORD *)(v2 + 272);
  else
    v5 = *(_QWORD *)(v2 + 264);
  v6 = (struct tagCURSOR *)HMValidateHandleNoRip(v5, 3);
  if ( (v6
     || ((v8 = *(_QWORD *)(a1 + 136), a2 != 1)
       ? (v6 = *(struct tagCURSOR **)(v8 + 112))
       : (v6 = *(struct tagCURSOR **)(v8 + 80)),
         v6 || (v6 = (struct tagCURSOR *)qword_1C0320F90) != 0LL))
    && (v9 = _DuplicateCursor(v6, v7)) != 0LL )
  {
    return *(_QWORD *)v9;
  }
  else
  {
    return 0LL;
  }
}
