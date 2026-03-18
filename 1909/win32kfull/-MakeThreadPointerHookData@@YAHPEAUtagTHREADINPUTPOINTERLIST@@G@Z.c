/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F20FC
 * Callers:
 *     xxxPointerCallHook @ 0x1C01F11D0 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F1CAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // [rsp+20h] [rbp-128h]
  int v18; // [rsp+28h] [rbp-120h]
  _OWORD v19[7]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-98h]
  _DWORD v21[32]; // [rsp+C0h] [rbp-88h] BYREF

  result = FindThreadPointerData(a1, a2);
  v7 = (__int64)result;
  if ( result )
  {
    LOBYTE(v5) = 1;
    v8 = HMValidateHandleNoSecure((unsigned __int64)result[2].Blink, v5, v6);
    v9 = INPUTDEST_FROM_PWND(v21, v8);
    v10 = *(unsigned int *)(v7 + 20);
    v11 = *((_OWORD *)v9 + 1);
    v19[0] = *(_OWORD *)v9;
    v12 = *((_OWORD *)v9 + 2);
    v19[1] = v11;
    v13 = *((_OWORD *)v9 + 3);
    v19[2] = v12;
    v14 = *((_OWORD *)v9 + 4);
    v19[3] = v13;
    v15 = *((_OWORD *)v9 + 5);
    v19[4] = v14;
    v16 = *((_OWORD *)v9 + 6);
    v19[5] = v15;
    *(_QWORD *)&v15 = *((_QWORD *)v9 + 14);
    v18 = *(_DWORD *)(v7 + 32);
    v17 = *(_QWORD *)(v7 + 24);
    v19[6] = v16;
    v20 = v15;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, a1, a2, v10, v17, v18, v19);
  }
  return result;
}
