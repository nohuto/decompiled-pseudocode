/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C016DBD0
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016CE40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016D3CC (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C016DBAC (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     IsPointerInputMessage @ 0x1C0176CAC (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, unsigned int a2)
{
  __int64 v4; // rdx
  CPointerInfoNode *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // r9d
  int v9; // r8d
  bool v10; // cf
  int v11; // edx
  int v12; // edx

  if ( !(unsigned int)IsPointerInputMessage(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  switch ( a2 )
  {
    case 0x249u:
      v7 = -__CFSHR__(*(_DWORD *)this, 27);
      v8 = -__CFSHR__(*(_DWORD *)this, 26);
      v9 = -__CFSHR__(*(_DWORD *)this, 25);
      v10 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 0x24Au:
      v7 = (2 * *(_DWORD *)this) >> 31;
      v8 = -__CFSHR__(*(_DWORD *)this, 30);
      v9 = -__CFSHR__(*(_DWORD *)this, 29);
      v10 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 0x251u:
      v7 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v8 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v9 = -(*((_DWORD *)this + 1) & 1);
      v11 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v5, v11, v9, v8, v7);
    case 0x252u:
      v12 = *((_DWORD *)this + 1);
      v7 = -__CFSHR__(v12, 7);
      v8 = -__CFSHR__(v12, 6);
      v9 = -__CFSHR__(v12, 5);
      v10 = __CFSHR__(v12, 4);
      break;
    default:
      v11 = 1;
      v7 = -__CFSHR__(*(_DWORD *)this, 23);
      v8 = -__CFSHR__(*(_DWORD *)this, 22);
      v9 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v5, v11, v9, v8, v7);
  }
  v11 = -v10;
  return CPointerInfoNode::IsMessageDelegated(v5, v11, v9, v8, v7);
}
