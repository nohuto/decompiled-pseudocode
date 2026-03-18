/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01DB1BC
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C002D410 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01DB658 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC30C (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // rcx
  HWND v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v29[11]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+120h] [rbp+20h]
  __int128 v31; // [rsp+130h] [rbp+30h]
  __int128 v32; // [rsp+140h] [rbp+40h]
  __int128 v33; // [rsp+150h] [rbp+50h]
  __int128 v34; // [rsp+160h] [rbp+60h]
  __int128 v35; // [rsp+170h] [rbp+70h]
  __int128 v36; // [rsp+180h] [rbp+80h]
  __int128 v37; // [rsp+190h] [rbp+90h]
  __int128 v38; // [rsp+1A0h] [rbp+A0h]
  __int128 v39; // [rsp+1B0h] [rbp+B0h]
  __int128 v40; // [rsp+1C0h] [rbp+C0h]
  _DWORD v41[56]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 v42; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v43; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v44; // [rsp+2D0h] [rbp+1D0h] BYREF

  v4 = *a3;
  v5 = *a1;
  if ( !MakePointerMessage(*a3, *a1, *a2, &v27, &v28, &v42, &v43, &v44, &v26) )
    return 0LL;
  LOBYTE(v10) = 1;
  v11 = HMValidateHandleNoSecure((unsigned __int64)v26, v10);
  v12 = (__int128 *)INPUTDEST_FROM_PWND(v41, v11);
  v13 = v12[1];
  v30 = *v12;
  v14 = v12[2];
  v31 = v13;
  v15 = v12[3];
  v32 = v14;
  v16 = v12[4];
  v33 = v15;
  v17 = v12[5];
  v34 = v16;
  v18 = v12[6];
  v35 = v17;
  v19 = v12[8];
  v36 = v18;
  v37 = v12[7];
  v20 = v12[9];
  v38 = v19;
  v21 = v12[10];
  v39 = v20;
  v40 = v21;
  v29[0] = v30;
  v29[1] = v31;
  v29[2] = v32;
  v29[3] = v33;
  v29[4] = v34;
  v29[5] = v35;
  v29[6] = v36;
  v29[7] = v37;
  v29[8] = v38;
  v29[9] = v20;
  v29[10] = v21;
  v22 = gptiCurrent + 1080LL;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, v22, v42, v43, v4, v5, v29)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(gpTouchProcessor, v22, v42, v43, v4, v5, v29, 0)) )
    return 0LL;
  v25 = v27;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v25;
  *a3 = v28;
  return result;
}
