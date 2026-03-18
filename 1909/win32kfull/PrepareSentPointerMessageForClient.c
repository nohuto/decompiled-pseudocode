/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01F07DC
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01F11D0 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1E30 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int128 v18; // xmm6
  __int128 v19; // xmm7
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  __int64 result; // rax
  unsigned __int64 v24; // rcx
  HWND v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v28[7]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-20h]
  _DWORD v30[40]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 v31; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int v32; // [rsp+1E0h] [rbp+D8h] BYREF
  int v33; // [rsp+1E8h] [rbp+E0h] BYREF

  v4 = *a3;
  v6 = *a1;
  if ( !MakePointerMessage(*a3, *a1, *a2, &v26, &v27, &v31, &v32, &v33, &v25) )
    return 0LL;
  LOBYTE(v10) = 1;
  v12 = HMValidateHandleNoSecure((unsigned __int64)v25, v10, v11);
  v13 = INPUTDEST_FROM_PWND(v30, v12);
  v14 = *((_OWORD *)v13 + 1);
  v15 = *((_OWORD *)v13 + 2);
  v16 = *((_OWORD *)v13 + 3);
  v17 = *((_OWORD *)v13 + 4);
  v18 = *((_OWORD *)v13 + 5);
  v19 = *((_OWORD *)v13 + 6);
  v20 = *((_QWORD *)v13 + 14);
  v28[0] = *(_OWORD *)v13;
  v28[1] = v14;
  v28[2] = v15;
  v21 = gptiCurrent + 1080LL;
  v28[3] = v16;
  v28[4] = v17;
  v28[5] = v18;
  v28[6] = v19;
  v29 = v20;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, v21, v31, v32, v4, v6, v28)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(gpTouchProcessor, v21, v31, v32, v4, v6, v28, 0)) )
    return 0LL;
  v24 = v26;
  result = 1LL;
  *a1 = v6;
  *a2 = (void *)v24;
  *a3 = v27;
  return result;
}
