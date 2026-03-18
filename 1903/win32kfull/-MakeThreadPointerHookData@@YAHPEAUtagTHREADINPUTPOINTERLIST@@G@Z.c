/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F227C
 * Callers:
 *     xxxPointerCallHook @ 0x1C01F1350 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F1E2C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // [rsp+20h] [rbp-128h]
  int v19; // [rsp+28h] [rbp-120h]
  _OWORD v20[7]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-98h]
  _DWORD v22[32]; // [rsp+C0h] [rbp-88h] BYREF

  result = FindThreadPointerData(a1, a2);
  v8 = (__int64)result;
  if ( result )
  {
    LOBYTE(v5) = 1;
    v9 = HMValidateHandleNoSecure((unsigned __int64)result[2].Blink, v5, v6, v7);
    v10 = INPUTDEST_FROM_PWND(v22, v9);
    v11 = *(unsigned int *)(v8 + 20);
    v12 = *((_OWORD *)v10 + 1);
    v20[0] = *(_OWORD *)v10;
    v13 = *((_OWORD *)v10 + 2);
    v20[1] = v12;
    v14 = *((_OWORD *)v10 + 3);
    v20[2] = v13;
    v15 = *((_OWORD *)v10 + 4);
    v20[3] = v14;
    v16 = *((_OWORD *)v10 + 5);
    v20[4] = v15;
    v17 = *((_OWORD *)v10 + 6);
    v20[5] = v16;
    *(_QWORD *)&v16 = *((_QWORD *)v10 + 14);
    v19 = *(_DWORD *)(v8 + 32);
    v18 = *(_QWORD *)(v8 + 24);
    v20[6] = v17;
    v21 = v16;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, a1, a2, v11, v18, v19, v20);
  }
  return result;
}
