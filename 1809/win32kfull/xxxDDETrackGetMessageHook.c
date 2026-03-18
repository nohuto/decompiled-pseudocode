/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01F4BC0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C0204C90 (SfnSENTDDEMSG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F35B0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F3E54 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F4358 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01F4A70 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01F53A8 (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0207020 (xxxClientCopyDDEOut1.c)
 *     HMValidateCatHandleNoSecure @ 0x1C0241068 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C0241130 (HMValidateHandleNoRipNoIL.c)
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
  struct tagDDECONV *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  struct tagFREELIST *v14; // rcx
  __int64 v15; // rcx
  struct tagDDECONV *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  _QWORD v26[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+80h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    result = ValidateHwnd(*(_QWORD *)a1);
    v4 = result;
    if ( !result )
      return result;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v26;
    v26[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v6 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v6 )
    {
      DdeConv = FindDdeConv((struct tagWND *)v4, v6);
      v10 = DdeConv;
      if ( !DdeConv )
        return ThreadUnlock1(v9, v7);
      v11 = *((_DWORD *)DdeConv + 20);
      if ( (v11 & 2) != 0 && (v7 = *(unsigned int *)(*((_QWORD *)v10 + 4) + 80LL), (v7 & 2) != 0) )
      {
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
        v27[0] = *(_QWORD *)(v12 + 416);
        *(_QWORD *)(v12 + 416) = v27;
        v27[1] = v10;
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
        v14 = (struct tagFREELIST *)*((_QWORD *)v10 + 9);
        if ( v14 )
        {
          *((_QWORD *)v10 + 9) = 0LL;
          xxxFreeListFree(v14);
        }
        v15 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v10;
        LOBYTE(v15) = *(_BYTE *)(v15 + gSharedInfo[1] + 25);
        if ( (v15 & 1) == 0 )
          *((_QWORD *)v10 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v10 + 4));
        v16 = (struct tagDDECONV *)ThreadUnlock1(v15, v13);
        if ( v16 )
          xxxFreeDdeConv(v16);
      }
      else
      {
        *((_DWORD *)v10 + 20) = v11 | 8;
      }
    }
    if ( (GetAppCompatFlags2(39168LL, v7) & 0x2000) != 0 )
      xxxCleanupDdeConv((struct tagWND *)v4);
    return ThreadUnlock1(v9, v7);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v18 = result;
  if ( result )
  {
    v19 = *(_DWORD *)(result + 64);
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
    v28[0] = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = v28;
    v28[1] = v18;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v21 = *(_QWORD *)(v18 + 56);
    v22 = xxxClientCopyDDEOut1(v21);
    if ( v22 )
      v25 = *(_QWORD *)(v21 + 24);
    else
      v25 = v29;
    *(_QWORD *)(a1 + 24) = v22;
    if ( !v22 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v24, v23);
    if ( result )
    {
      if ( (v19 & 0x200) != 0 )
      {
        return FreeDdeXact(v18);
      }
      else if ( *(_QWORD *)(v18 + 40) )
      {
        *(_QWORD *)(v18 + 48) = v25;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v25;
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
