/*
 * XREFs of ?Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013F500
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F06C (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 */

__int64 __fastcall MPCHomeGestureProcessor::Process3DInput(
        MPCHomeGestureProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 || *((_DWORD *)a2 + 16) != 9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      17LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchomegestureprocessor.cpp",
      a4);
    JUMPOUT(0x18013F54ELL);
  }
  MPCManager::SendHomeGesture(
    MPCManager::s_instance,
    **((_DWORD **)this + 3),
    *(_DWORD *)(*((_QWORD *)this + 3) + 4LL),
    *((_QWORD *)a2 + 2),
    0);
  return 0LL;
}
