/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14000DAB0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000D6F0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DA10 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A34 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140037420 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003DD30 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140010560 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032A10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  __int64 v10; // rcx
  _QWORD **v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(__int64 **)(a1 + 256);
  while ( v4 )
  {
    v10 = v4[2];
    v11 = (_QWORD **)(v4 + 1);
    v12 = v4;
    v4 = (__int64 *)v4[1];
    if ( *(_QWORD *)(v10 + 8) == a2 )
    {
      if ( *(_QWORD *)(v10 + 8) == -1LL || a3 == -1 )
        *(_QWORD *)(v10 + 8) = a3;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11C5,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)0x80070006LL,
          v15);
      if ( a4 == 1 )
      {
        v13 = *v12;
        if ( v12 == *(__int64 **)(a1 + 248) )
          *(_QWORD *)(a1 + 248) = v13;
        else
          **v11 = v13;
        v14 = *v11;
        if ( v12 == *(__int64 **)(a1 + 256) )
          *(_QWORD *)(a1 + 256) = v14;
        else
          *(_QWORD *)(*v12 + 8) = v14;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(a1 + 248, v12);
      }
    }
  }
  return 0LL;
}
