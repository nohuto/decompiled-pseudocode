/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01F095C
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A0070 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01F1350 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1FB0 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // rcx
  HWND v26; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v29[7]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-20h]
  _DWORD v31[40]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 v32; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int v33; // [rsp+1E0h] [rbp+D8h] BYREF
  int v34; // [rsp+1E8h] [rbp+E0h] BYREF

  v4 = *a3;
  v6 = *a1;
  if ( !MakePointerMessage(*a3, *a1, *a2, &v27, &v28, &v32, &v33, &v34, &v26) )
    return 0LL;
  LOBYTE(v10) = 1;
  v13 = HMValidateHandleNoSecure((unsigned __int64)v26, v10, v11, v12);
  v14 = INPUTDEST_FROM_PWND(v31, v13);
  v15 = *((_OWORD *)v14 + 1);
  v16 = *((_OWORD *)v14 + 2);
  v17 = *((_OWORD *)v14 + 3);
  v18 = *((_OWORD *)v14 + 4);
  v19 = *((_OWORD *)v14 + 5);
  v20 = *((_OWORD *)v14 + 6);
  v21 = *((_QWORD *)v14 + 14);
  v29[0] = *(_OWORD *)v14;
  v29[1] = v15;
  v29[2] = v16;
  v22 = gptiCurrent + 1080LL;
  v29[3] = v17;
  v29[4] = v18;
  v29[5] = v19;
  v29[6] = v20;
  v30 = v21;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, v22, v32, v33, v4, v6, v29)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(gpTouchProcessor, v22, v32, v33, v4, v6, v29, 0)) )
    return 0LL;
  v25 = v27;
  result = 1LL;
  *a1 = v6;
  *a2 = (void *)v25;
  *a3 = v28;
  return result;
}
