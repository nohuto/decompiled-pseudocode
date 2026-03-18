/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211F50
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C012E190 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0200654 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, int a2)
{
  __int64 v2; // rax
  InputTransform *v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // r8
  _BOOL8 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rax
  __int128 *v14; // r10
  __int64 v15; // rax
  __int128 *v16; // r9
  __int64 v17; // rax
  __int128 *v18; // r8
  __int64 v19; // xmm1_8
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  struct tagQ *v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int64 v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  InputTransform *v38; // [rsp+98h] [rbp-68h] BYREF
  __int128 *v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v41[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+130h] [rbp+30h]
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  __int128 v45; // [rsp+160h] [rbp+60h]
  __int128 v46; // [rsp+170h] [rbp+70h]
  __int128 v47; // [rsp+180h] [rbp+80h]
  __int128 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]

  v2 = *((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = *((_QWORD *)a1 + 2);
  v38 = a1;
  v6 = *(_QWORD *)(v2 + 328);
  v40 = v4;
  v7 = a2 && a2 != 10;
  v8 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v4 + 424) != *(_QWORD *)(v8 + 424) )
    *(_DWORD *)(v8 + 480) |= 0x20u;
  if ( v7 )
  {
    v9 = INPUTDEST_FROM_PWND(v41, v6);
    v42 = *(_OWORD *)v9;
    v43 = *((_OWORD *)v9 + 1);
    v44 = *((_OWORD *)v9 + 2);
    v45 = *((_OWORD *)v9 + 3);
    v46 = *((_OWORD *)v9 + 4);
    v47 = *((_OWORD *)v9 + 5);
    v48 = *((_OWORD *)v9 + 6);
    v49 = *((_QWORD *)v9 + 14);
    ForceCapture(1LL);
    v37 = 0LL;
    SetSystemInputSource(&v37);
    v10 = *(unsigned __int16 *)(v4 + 760);
    v11 = *(unsigned __int16 *)(v4 + 756);
    v34 = 0;
    v39 = *(__int128 **)(v4 + 424);
    v12 = v11 | (v10 << 16);
    if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                         (__int64 *)&v39,
                         (__int64 *)&v38,
                         (struct tagTHREADINFO **)&v40,
                         0x202u,
                         &v37,
                         &v34) )
    {
      v13 = *((_QWORD *)v39 + 16);
      if ( v13 )
        v13 = *(_QWORD *)(v13 + 16);
      v14 = (__int128 *)gObjDummyLock;
      if ( v13 )
        v14 = (__int128 *)(v13 + 384);
      v15 = *((_QWORD *)v39 + 12);
      v16 = (__int128 *)gObjDummyLock;
      if ( v15 )
        v16 = (__int128 *)(v15 + 384);
      v17 = *((_QWORD *)v39 + 13);
      v18 = (__int128 *)gObjDummyLock;
      if ( v17 )
        v18 = (__int128 *)(v17 + 384);
      v3 = v38;
      v19 = *((_QWORD *)&gpsiLock + 2);
      v35 = gpsiLock;
      v20 = *(_OWORD *)((char *)v38 + 56);
      v36 = v19;
      v21 = *((_QWORD *)v38 + 9);
      v35 = v20;
      v22 = *(_OWORD *)(v40 + 384);
      v36 = v21;
      v23 = *(_QWORD *)(v40 + 400);
      v24 = *(struct tagQ **)(v40 + 424);
      v35 = v22;
      v25 = *v39;
      v36 = v23;
      v26 = *((_QWORD *)v39 + 2);
      v35 = v25;
      v27 = *v18;
      v36 = v26;
      v28 = *((_QWORD *)v18 + 2);
      v35 = v27;
      v29 = *v16;
      v36 = v28;
      v30 = *((_QWORD *)v16 + 2);
      v35 = v29;
      v31 = *v14;
      v36 = v30;
      v32 = *((_QWORD *)v14 + 2);
      v35 = v31;
      v36 = v32;
      PostInputMessage(
        v24,
        v38,
        0x202u,
        0LL,
        v12,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v37,
        0LL,
        0LL,
        v34,
        v40);
    }
    else
    {
      v3 = v38;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v33) = a2;
    WPP_RECORDER_SF_qd(v8, v7, v6, 0xCu, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, v3, v33);
  }
  anonymous_namespace_::NotifyShellSimplePayload();
}
