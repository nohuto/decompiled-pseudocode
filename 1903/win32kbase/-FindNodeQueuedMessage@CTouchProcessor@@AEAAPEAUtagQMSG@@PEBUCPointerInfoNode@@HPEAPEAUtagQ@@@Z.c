/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0166A28
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0162ABC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0039248 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C019BF38 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagQMSG *result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v18[7]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+90h] [rbp-18h]

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  result = (struct tagQMSG *)CInputDest::GetQueue((const struct CPointerInfoNode *)((char *)a2 + 360), 2LL);
  if ( result )
  {
    v11 = *((_QWORD *)a2 + 2);
    v12 = *(_OWORD *)((char *)a2 + 376);
    v18[0] = *(_OWORD *)((char *)a2 + 360);
    v13 = *(_OWORD *)((char *)a2 + 392);
    v18[1] = v12;
    v14 = *(_OWORD *)((char *)a2 + 408);
    v18[2] = v13;
    v15 = *(_OWORD *)((char *)a2 + 424);
    v18[3] = v14;
    v16 = *(_OWORD *)((char *)a2 + 440);
    v18[4] = v15;
    v17 = *(_OWORD *)((char *)a2 + 456);
    v18[5] = v16;
    *(_QWORD *)&v16 = *((_QWORD *)a2 + 59);
    v18[6] = v17;
    v19 = v16;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v18,
                               v11,
                               v10,
                               a4);
  }
  return result;
}
