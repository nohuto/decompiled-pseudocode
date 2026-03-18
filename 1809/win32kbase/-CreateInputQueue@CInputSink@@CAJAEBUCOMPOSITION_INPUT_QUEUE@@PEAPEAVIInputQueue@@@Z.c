/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C0072E00
 * Callers:
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0072C34 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C0072D40 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C0072E88 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(const struct COMPOSITION_INPUT_QUEUE *a1, struct IInputQueue **a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  struct IInputQueue *v9; // rcx
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  struct IInputQueue *v12; // [rsp+60h] [rbp+8h] BYREF

  result = 0LL;
  *a2 = 0LL;
  v5 = *(unsigned int *)a1;
  if ( !(_DWORD)v5 )
  {
    v9 = 0LL;
    if ( g_pInputManager )
      v9 = (CInputManager *)((char *)g_pInputManager + 96);
    goto LABEL_5;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v9 = 0LL;
    if ( g_pInputManager )
      v9 = (CInputManager *)((char *)g_pInputManager + 104);
    goto LABEL_5;
  }
  if ( (unsigned int)(v5 - 2) <= 2 )
  {
    v6 = *((_OWORD *)a1 + 2);
    v10[0] = *((_OWORD *)a1 + 1);
    v7 = *((_QWORD *)a1 + 6);
    v8 = *((_QWORD *)a1 + 1);
    v11 = v7;
    v10[1] = v6;
    result = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, struct IInputQueue **))CInputQueue::Create)(
               v5,
               v8,
               v10,
               &v12);
    v9 = v12;
LABEL_5:
    *a2 = v9;
    return result;
  }
  return 3221225485LL;
}
