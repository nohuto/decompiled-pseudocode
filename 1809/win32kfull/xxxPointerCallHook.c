/*
 * XREFs of xxxPointerCallHook @ 0x1C01DB658
 * Callers:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     IsMiPPointerMessage @ 0x1C01DB17C (IsMiPPointerMessage.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01DB1BC (PrepareSentPointerMessageForClient.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC1F8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01DC5D0 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01DC8BC (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(unsigned int a1, __int64 a2, unsigned int *a3, int a4, unsigned int a5)
{
  unsigned int *v6; // rbx
  unsigned __int16 *v9; // rdi
  void **v10; // rsi
  unsigned __int64 ThreadPointerData; // rax
  unsigned __int16 v12; // r10
  int ThreadPointerHookData; // eax
  unsigned int *v14; // rcx
  unsigned __int64 *v15; // r8
  void **v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int v19; // edi
  struct tagHOOK *Valid; // rax
  HWND *v22; // [rsp+20h] [rbp-68h]
  _OWORD v23[3]; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  v6 = a3;
  if ( a4 == 3 )
  {
    v9 = (unsigned __int16 *)(a3 + 4);
    v10 = (void **)(a3 + 2);
    if ( !(unsigned int)IsMiPPointerMessage(a3[2]) )
    {
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
                            v12,
                            0LL,
                            0LL,
                            v22);
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 == 4 )
  {
    v10 = (void **)(a3 + 2);
    v9 = (unsigned __int16 *)(a3 + 4);
    if ( !(unsigned int)IsMiPPointerMessage(a3[4]) )
    {
      ThreadPointerData = *(_QWORD *)v6;
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 != 12 )
    return a5;
  v9 = (unsigned __int16 *)(a3 + 4);
  if ( (unsigned int)IsMiPPointerMessage(a3[6]) )
    return a5;
  v10 = (void **)(v6 + 2);
  ThreadPointerData = *((_QWORD *)v6 + 1);
LABEL_10:
  if ( !ThreadPointerData || CTouchProcessor::IsPointerMsgRedirected(gpTouchProcessor, ThreadPointerData, &v24) && !v24 )
    return a5;
  switch ( a4 )
  {
    case 3:
      ThreadPointerHookData = MakeThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL), *v9);
      if ( ThreadPointerHookData )
      {
        v17 = *((_OWORD *)v6 + 1);
        v23[0] = *(_OWORD *)v6;
        v18 = *((_OWORD *)v6 + 2);
        v6 = (unsigned int *)v23;
        v23[1] = v17;
        v23[2] = v18;
      }
      goto LABEL_22;
    case 4:
      v15 = (unsigned __int64 *)v6;
      v16 = v10;
      v14 = (unsigned int *)v9;
      goto LABEL_19;
    case 12:
      v14 = v6 + 6;
      v15 = (unsigned __int64 *)v10;
      v16 = (void **)v9;
LABEL_19:
      ThreadPointerHookData = PrepareSentPointerMessageForClient(v14, v16, v15, 1);
      goto LABEL_22;
  }
  ThreadPointerHookData = 0;
LABEL_22:
  v19 = a5;
  if ( ThreadPointerHookData )
  {
    Valid = (struct tagHOOK *)PhkFirstValid(gptiCurrent, a4);
    v19 = xxxCallHook2(Valid, a1, a2, v6, 0LL, 0);
    RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
  }
  return v19;
}
