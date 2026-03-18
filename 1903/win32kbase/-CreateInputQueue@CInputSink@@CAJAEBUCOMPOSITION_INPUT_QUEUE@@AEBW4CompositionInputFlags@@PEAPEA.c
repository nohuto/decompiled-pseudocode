/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C00C01E4
 * Callers:
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C007D014 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C0092C38 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00C0288 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(
        const struct COMPOSITION_INPUT_QUEUE *a1,
        const enum CompositionInputFlags *a2,
        struct IInputQueue **a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  struct IInputQueue *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  struct IInputQueue *v15; // [rsp+70h] [rbp+8h] BYREF

  result = 0LL;
  *a3 = 0LL;
  v7 = *(unsigned int *)a1;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v12 = 0LL;
      if ( g_pInputManager )
        v12 = (CInputManager *)((char *)g_pInputManager + 96);
    }
    else
    {
      if ( (unsigned int)(v7 - 2) > 2 )
        return 3221225485LL;
      v8 = *(unsigned int *)a2;
      v9 = *((_OWORD *)a1 + 2);
      v13[0] = *((_OWORD *)a1 + 1);
      v10 = *((_QWORD *)a1 + 6);
      v11 = *((_QWORD *)a1 + 1);
      v14 = v10;
      v13[1] = v9;
      result = CInputQueue::Create(v7, v11, v13, v8, &v15);
      v12 = v15;
    }
  }
  else
  {
    v12 = 0LL;
    if ( g_pInputManager )
      v12 = (CInputManager *)((char *)g_pInputManager + 88);
  }
  *a3 = v12;
  return result;
}
