/*
 * XREFs of ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0177C9C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C0177B68 (--0CPTPProcessor@@AEAA@XZ.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0178A8C (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall CPTPProcessorFactory::AddProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  CPTPProcessor *v2; // rax
  CPTPProcessor *v3; // rbx
  __int64 result; // rax

  v2 = (CPTPProcessor *)Win32AllocPoolZInit(0x990uLL, 1919964227LL);
  if ( v2 )
    v3 = CPTPProcessor::CPTPProcessor(v2);
  else
    v3 = 0LL;
  if ( !v3 )
    return 3221225495LL;
  result = CPTPProcessor::InitState(v3, a1);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 125) = v3;
    return 0LL;
  }
  return result;
}
