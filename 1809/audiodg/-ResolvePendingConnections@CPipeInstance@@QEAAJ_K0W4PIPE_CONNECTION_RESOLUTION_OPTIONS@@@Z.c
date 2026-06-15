/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14003B050
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140004D00 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140039E20 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003C290 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400414C0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140003F7C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400100C4 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  CConnectionInstance *v9; // rcx
  _QWORD **v10; // rsi
  __int64 *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (__int64 *)a1[31];
  while ( v4 )
  {
    v9 = (CConnectionInstance *)v4[2];
    v10 = (_QWORD **)(v4 + 1);
    v11 = v4;
    v4 = (__int64 *)v4[1];
    if ( *((_QWORD *)v9 + 1) == a2 )
    {
      v12 = CConnectionInstance::SetHandle(v9, a3);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11C4,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12);
      if ( a4 == 1 )
      {
        v13 = a1 + 30;
        v14 = *v11;
        if ( v11 == (__int64 *)a1[30] )
          *v13 = v14;
        else
          **v10 = v14;
        v15 = *v10;
        if ( v11 == (__int64 *)a1[31] )
          a1[31] = v15;
        else
          *(_QWORD *)(*v11 + 8) = v15;
        *v11 = a1[34];
        v16 = a1[32]-- == 1LL;
        a1[34] = v11;
        if ( v16 )
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)v13);
      }
    }
  }
  return 0LL;
}
