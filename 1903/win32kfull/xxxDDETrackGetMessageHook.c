/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C020B8A0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C021C8C0 (SfnSENTDDEMSG.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A514 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A774 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AD2C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C020B630 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C020C304 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C0259E24 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C0259ED4 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagWND *v8; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 *v10; // r12
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagDDECONV *DdeConv; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagDDECONV *v18; // r14
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagFREELIST *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagDDECONV *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  int v35; // ebx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  int v44; // ecx
  void *v45; // rdi
  void *v46; // rdi
  __int64 v47; // [rsp+40h] [rbp-19h] BYREF
  struct tagWND *v48; // [rsp+48h] [rbp-11h]
  __int64 v49; // [rsp+50h] [rbp-9h]
  __int64 v50; // [rsp+58h] [rbp-1h] BYREF
  struct tagDDECONV *v51; // [rsp+60h] [rbp+7h]
  __int64 v52; // [rsp+68h] [rbp+Fh]
  __int64 v53; // [rsp+70h] [rbp+17h] BYREF
  __int64 v54; // [rsp+78h] [rbp+1Fh]
  __int64 v55; // [rsp+80h] [rbp+27h]
  void *v56; // [rsp+C0h] [rbp+67h] BYREF

  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = *(_QWORD *)a1;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    result = ValidateHwnd(v2);
    v8 = (struct tagWND *)result;
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(v5, v4, 14, 16, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6, v7);
    v47 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
    v48 = v8;
    HMLockObject(v8);
    v10 = (__int64 *)(a1 + 16);
    v11 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v11 )
    {
      DdeConv = FindDdeConv(v8, v11);
      v18 = DdeConv;
      if ( !DdeConv )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 18;
LABEL_29:
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_(v17, v16, 14, v19, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
          return ThreadUnlock1(v17, v16, v13);
        }
        return ThreadUnlock1(v17, v16, v13);
      }
      v20 = *((unsigned int *)DdeConv + 20);
      if ( (v20 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v13, v14);
        v50 = *(_QWORD *)(v21 + 408);
        *(_QWORD *)(v21 + 408) = &v50;
        v51 = v18;
        HMLockObject(v18);
        v25 = (struct tagFREELIST *)*((_QWORD *)v18 + 9);
        if ( v25 )
        {
          *((_QWORD *)v18 + 9) = 0LL;
          xxxFreeListFree(v25, v22, v23, v24);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v18 + 20) & 1) != 0 )
            v26 = *(_QWORD *)a1;
          else
            v26 = *v10;
          if ( (*((_DWORD *)v18 + 20) & 1) == 0 )
            v10 = (__int64 *)a1;
          WPP_RECORDER_SF_qq(
            v26,
            v22,
            0xEu,
            0x13u,
            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
            *v10,
            v26);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v18) + 25) & 1) == 0 )
          *((_QWORD *)v18 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v18 + 4));
        v30 = (struct tagDDECONV *)ThreadUnlock1(v28, v27, v29);
        if ( v30 )
          xxxFreeDdeConv(v30);
      }
      else
      {
        v12 = (unsigned int)v20 | 8;
        *((_DWORD *)DdeConv + 20) = v12;
      }
    }
    if ( (GetAppCompatFlags2(39168LL, v12, v13, v14) & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v8);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 17;
      goto LABEL_29;
    }
    return ThreadUnlock1(v17, v16, v13);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v34 = result;
  if ( result )
  {
    v35 = *(_DWORD *)(result + 64);
    v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33);
    v53 = *(_QWORD *)(v36 + 408);
    *(_QWORD *)(v36 + 408) = &v53;
    v54 = v34;
    HMLockObject(v34);
    v39 = xxxCopyDDEOut(*(struct tagINTDDEINFO **)(v34 + 56), &v56, v37, v38);
    *(_QWORD *)(a1 + 24) = v39;
    if ( !v39 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v41, v40, v42);
    if ( result )
    {
      if ( (v35 & 0x200) != 0 )
      {
        return FreeDdeXact(v34);
      }
      else if ( *(_QWORD *)(v34 + 40) )
      {
        v46 = v56;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = WPP_RECORDER_SF_q(
                     v44,
                     v43,
                     0xEu,
                     0x15u,
                     (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
                     v56);
        *(_QWORD *)(v34 + 48) = v46;
      }
      else
      {
        v45 = v56;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = WPP_RECORDER_SF_q(
                     v44,
                     v43,
                     0xEu,
                     0x14u,
                     (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
                     v56);
        *(_QWORD *)(v34 + 40) = v45;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
