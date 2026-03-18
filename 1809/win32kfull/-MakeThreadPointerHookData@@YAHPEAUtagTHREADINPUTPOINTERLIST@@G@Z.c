/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01DC5D0
 * Callers:
 *     xxxPointerCallHook @ 0x1C01DB658 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01DC188 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  int v20; // [rsp+28h] [rbp-180h]
  _OWORD v21[11]; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v22[44]; // [rsp+F0h] [rbp-B8h] BYREF

  result = FindThreadPointerData(a1, a2);
  v6 = (__int64)result;
  if ( result )
  {
    LOBYTE(v5) = 1;
    v7 = HMValidateHandleNoSecure((unsigned __int64)result[2].Blink, v5);
    v8 = INPUTDEST_FROM_PWND(v22, v7);
    v9 = *(unsigned int *)(v6 + 20);
    v10 = v8[1];
    v21[0] = *v8;
    v11 = v8[2];
    v21[1] = v10;
    v12 = v8[3];
    v21[2] = v11;
    v13 = v8[4];
    v21[3] = v12;
    v14 = v8[5];
    v21[4] = v13;
    v15 = v8[6];
    v21[5] = v14;
    v16 = v8[8];
    v21[6] = v15;
    v21[7] = v8[7];
    v17 = v8[9];
    v21[8] = v16;
    v18 = v8[10];
    LODWORD(v8) = *(_DWORD *)(v6 + 32);
    v21[9] = v17;
    v20 = (int)v8;
    v19 = *(_QWORD *)(v6 + 24);
    v21[10] = v18;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, a1, a2, v9, v19, v20, v21);
  }
  return result;
}
