/*
 * XREFs of _GetWindowIcon @ 0x1C015B834
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C015B7B0 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C021FE54 (xxxSendShutdownData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // rcx
  struct tagCURSOR *v8; // rax
  bool v9; // dl
  __int64 v10; // rax
  struct tagCURSOR *v11; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a2;
  if ( (_DWORD)a2 == 1 )
    v7 = *(_QWORD *)(v4 + 272);
  else
    v7 = *(_QWORD *)(v4 + 264);
  LOBYTE(a2) = 3;
  v8 = (struct tagCURSOR *)HMValidateHandleNoRip(v7, a2, a3, a4);
  if ( (v8
     || ((v10 = *(_QWORD *)(a1 + 136), v5 != 1)
       ? (v8 = *(struct tagCURSOR **)(v10 + 112))
       : (v8 = *(struct tagCURSOR **)(v10 + 80)),
         v8 || (v8 = (struct tagCURSOR *)qword_1C0322F90) != 0LL))
    && (v11 = _DuplicateCursor(v8, v9)) != 0LL )
  {
    return *(_QWORD *)v11;
  }
  else
  {
    return 0LL;
  }
}
