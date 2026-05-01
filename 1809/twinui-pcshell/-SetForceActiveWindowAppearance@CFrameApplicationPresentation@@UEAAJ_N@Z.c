/*
 * XREFs of ?SetForceActiveWindowAppearance@CFrameApplicationPresentation@@UEAAJ_N@Z @ 0x180128070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___ @ 0x180126A20 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetForceActiveWindowAppearance(
        CFrameApplicationPresentation *this,
        char a2)
{
  char v2; // al
  char v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 1;
  v3 = *((_BYTE *)this + 550) || *((_BYTE *)this + 551);
  *((_BYTE *)this + 550) = a2;
  if ( !a2 && !*((_BYTE *)this + 551) )
    v2 = 0;
  if ( v2 == v3 )
    return 0LL;
  *(_QWORD *)v7 = this;
  LOBYTE(v7[2]) = v2;
  v4 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___(this, (__int128 *)v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x694,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
