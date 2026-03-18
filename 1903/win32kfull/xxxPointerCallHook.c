/*
 * XREFs of xxxPointerCallHook @ 0x1C01F1350
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C00B4500 (PhkFirstValid.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C010F324 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     IsMiPPointerMessage @ 0x1C01F091C (IsMiPPointerMessage.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F095C (PrepareSentPointerMessageForClient.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1E9C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F227C (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(unsigned int a1, __int64 a2, _OWORD *a3, int a4, unsigned int a5)
{
  unsigned __int16 *v9; // rdi
  void **v10; // rsi
  unsigned __int64 ThreadPointerData; // rax
  unsigned int *v12; // rcx
  unsigned __int64 *v13; // r8
  void **v14; // rdx
  int ThreadPointerHookData; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v18; // edi
  struct tagHOOK *Valid; // rax
  HWND *v21; // [rsp+20h] [rbp-68h]
  _OWORD v22[3]; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+A8h] [rbp+20h] BYREF

  memset(v22, 0, sizeof(v22));
  v23 = 0;
  if ( a4 == 3 )
  {
    v9 = (unsigned __int16 *)(a3 + 1);
    v10 = (void **)a3 + 1;
    if ( !(unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 2)) )
    {
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
                            *v9,
                            0LL,
                            0LL,
                            v21);
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 == 4 )
  {
    v10 = (void **)a3 + 1;
    v9 = (unsigned __int16 *)(a3 + 1);
    if ( !(unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 4)) )
    {
      ThreadPointerData = *(_QWORD *)a3;
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 != 12 )
    return a5;
  v9 = (unsigned __int16 *)(a3 + 1);
  if ( (unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 6)) )
    return a5;
  v10 = (void **)a3 + 1;
  ThreadPointerData = *((_QWORD *)a3 + 1);
LABEL_10:
  if ( !ThreadPointerData || CTouchProcessor::IsPointerMsgRedirected(gpTouchProcessor, ThreadPointerData, &v23) && !v23 )
    return a5;
  if ( a4 == 3 )
  {
    ThreadPointerHookData = MakeThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL), *v9);
    if ( ThreadPointerHookData )
    {
      v16 = a3[1];
      v22[0] = *a3;
      v17 = a3[2];
      a3 = v22;
      v22[1] = v16;
      v22[2] = v17;
    }
  }
  else
  {
    if ( a4 == 4 )
    {
      v13 = (unsigned __int64 *)a3;
      v14 = v10;
      v12 = (unsigned int *)v9;
    }
    else
    {
      v12 = (unsigned int *)a3 + 6;
      v13 = (unsigned __int64 *)v10;
      v14 = (void **)v9;
    }
    ThreadPointerHookData = PrepareSentPointerMessageForClient(v12, v14, v13, 1);
  }
  v18 = a5;
  if ( ThreadPointerHookData )
  {
    Valid = (struct tagHOOK *)PhkFirstValid(gptiCurrent, a4);
    v18 = xxxCallHook2(Valid, a1, a2, (int *)a3, 0LL, 0);
    RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
  }
  return v18;
}
