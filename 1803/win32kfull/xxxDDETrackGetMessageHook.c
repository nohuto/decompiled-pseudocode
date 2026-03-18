/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01D04B0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0048DF0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C01DF490 (SfnSENTDDEMSG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01CEF2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01CF7A4 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01CFC84 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01D0380 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1C01E14B4 (xxxClientCopyDDEOut1.c)
 *     HMValidateCatHandleNoSecure @ 0x1C022B11C (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C022B1E0 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v6; // rax
  __int64 v7; // rdx
  struct tagDDECONV *DdeConv; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagDDECONV *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct tagFREELIST *v15; // rcx
  __int64 v16; // rcx
  struct tagDDECONV *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  _QWORD v28[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v29[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v30[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    result = ValidateHwnd(*(_QWORD *)a1);
    v4 = result;
    if ( !result )
      return result;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v28[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v28;
    v28[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v6 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v6 )
    {
      DdeConv = FindDdeConv((struct tagWND *)v4, v6);
      v11 = DdeConv;
      if ( !DdeConv )
        return ThreadUnlock1(v9, v7, v10);
      if ( (*((_DWORD *)DdeConv + 20) & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
        v29[0] = *(_QWORD *)(v12 + 408);
        *(_QWORD *)(v12 + 408) = v29;
        v29[1] = v11;
        _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
        v15 = (struct tagFREELIST *)*((_QWORD *)v11 + 9);
        if ( v15 )
        {
          *((_QWORD *)v11 + 9) = 0LL;
          xxxFreeListFree(v15);
        }
        v16 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v11;
        LOBYTE(v16) = *(_BYTE *)(v16 + gSharedInfo[1] + 25);
        if ( (v16 & 1) == 0 )
          xxxFreeDdeConv(*((struct tagDDECONV **)v11 + 4));
        v17 = (struct tagDDECONV *)ThreadUnlock1(v16, v13, v14);
        if ( v17 )
          xxxFreeDdeConv(v17);
      }
    }
    if ( (GetAppCompatFlags2(0x9900u, v7) & 0x2000) != 0 )
      xxxCleanupDdeConv((struct tagWND *)v4);
    return ThreadUnlock1(v9, v7, v10);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v19 = result;
  if ( result )
  {
    v20 = *(_DWORD *)(result + 64);
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
    v30[0] = *(_QWORD *)(v21 + 408);
    *(_QWORD *)(v21 + 408) = v30;
    v30[1] = v19;
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v22 = *(_QWORD *)(v19 + 56);
    v23 = xxxClientCopyDDEOut1(v22);
    if ( v23 )
      v27 = *(_QWORD *)(v22 + 24);
    else
      v27 = v31;
    *(_QWORD *)(a1 + 24) = v23;
    if ( !v23 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v25, v24, v26);
    if ( result )
    {
      if ( (v20 & 0x200) != 0 )
      {
        return FreeDdeXact(v19);
      }
      else if ( *(_QWORD *)(v19 + 40) )
      {
        *(_QWORD *)(v19 + 48) = v27;
      }
      else
      {
        *(_QWORD *)(v19 + 40) = v27;
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
