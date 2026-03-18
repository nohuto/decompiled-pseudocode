/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C020B5F0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C003EDD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C021C380 (SfnSENTDDEMSG.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C02095B8 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A264 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A4C4 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C020B380 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C02596E4 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C0259794 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  struct tagWND *v7; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 *v9; // r12
  struct tagWND *v10; // rax
  int v11; // edx
  struct tagDDECONV *DdeConv; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct tagDDECONV *v16; // r14
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct tagFREELIST *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagDDECONV *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r14
  int v30; // ebx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // edx
  int v39; // ecx
  void *v40; // rdi
  void *v41; // rdi
  __int64 v42; // [rsp+40h] [rbp-19h] BYREF
  struct tagWND *v43; // [rsp+48h] [rbp-11h]
  __int64 v44; // [rsp+50h] [rbp-9h]
  __int64 v45; // [rsp+58h] [rbp-1h] BYREF
  struct tagDDECONV *v46; // [rsp+60h] [rbp+7h]
  __int64 v47; // [rsp+68h] [rbp+Fh]
  __int64 v48; // [rsp+70h] [rbp+17h] BYREF
  __int64 v49; // [rsp+78h] [rbp+1Fh]
  __int64 v50; // [rsp+80h] [rbp+27h]
  void *v51; // [rsp+C0h] [rbp+67h] BYREF

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = *(_QWORD *)a1;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    result = ValidateHwnd(v2);
    v7 = (struct tagWND *)result;
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(v5, v4, 14, 16, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6);
    v42 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v42;
    v43 = v7;
    HMLockObject(v7);
    v9 = (__int64 *)(a1 + 16);
    v10 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v10 )
    {
      DdeConv = FindDdeConv(v7, v10);
      v16 = DdeConv;
      if ( !DdeConv )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 18;
LABEL_29:
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_(v14, v13, 14, v17, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
          return ThreadUnlock1(v14, v13, v15);
        }
        return ThreadUnlock1(v14, v13, v15);
      }
      v18 = *((unsigned int *)DdeConv + 20);
      if ( (v18 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v15);
        v45 = *(_QWORD *)(v19 + 408);
        *(_QWORD *)(v19 + 408) = &v45;
        v46 = v16;
        HMLockObject(v16);
        v21 = (struct tagFREELIST *)*((_QWORD *)v16 + 9);
        if ( v21 )
        {
          *((_QWORD *)v16 + 9) = 0LL;
          xxxFreeListFree(v21);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v16 + 20) & 1) != 0 )
            v22 = *(_QWORD *)a1;
          else
            v22 = *v9;
          if ( (*((_DWORD *)v16 + 20) & 1) == 0 )
            v9 = (__int64 *)a1;
          WPP_RECORDER_SF_qq(v22, v20, 0xEu, 0x13u, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, *v9, v22);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v16) + 25) & 1) == 0 )
          *((_QWORD *)v16 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v16 + 4));
        v26 = (struct tagDDECONV *)ThreadUnlock1(v24, v23, v25);
        if ( v26 )
          xxxFreeDdeConv(v26);
      }
      else
      {
        v11 = v18 | 8;
        *((_DWORD *)DdeConv + 20) = v11;
      }
    }
    if ( (GetAppCompatFlags2(39168LL, v11) & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v7);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 17;
      goto LABEL_29;
    }
    return ThreadUnlock1(v14, v13, v15);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v29 = result;
  if ( result )
  {
    v30 = *(_DWORD *)(result + 64);
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28);
    v48 = *(_QWORD *)(v31 + 408);
    *(_QWORD *)(v31 + 408) = &v48;
    v49 = v29;
    HMLockObject(v29);
    v34 = xxxCopyDDEOut(*(struct tagINTDDEINFO **)(v29 + 56), &v51, v32, v33);
    *(_QWORD *)(a1 + 24) = v34;
    if ( !v34 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v36, v35, v37);
    if ( result )
    {
      if ( (v30 & 0x200) != 0 )
      {
        return FreeDdeXact(v29);
      }
      else if ( *(_QWORD *)(v29 + 40) )
      {
        v41 = v51;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = WPP_RECORDER_SF_q(v39, v38, 14, 21, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, v51);
        *(_QWORD *)(v29 + 48) = v41;
      }
      else
      {
        v40 = v51;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = WPP_RECORDER_SF_q(v39, v38, 14, 20, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, v51);
        *(_QWORD *)(v29 + 40) = v40;
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
