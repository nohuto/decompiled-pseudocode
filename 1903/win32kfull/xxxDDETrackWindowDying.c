/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C020C0EC
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209D54 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AD2C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C304 (xxxFreeDdeConv.c)
 */

_UNKNOWN **__fastcall xxxDDETrackWindowDying(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rbx
  _UNKNOWN **result; // rax
  __int64 v6; // rax
  void *v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // r8
  _DWORD *v21; // rdx
  int v22; // ecx
  BOOL v23; // eax
  struct tagFREELIST *v24; // rdi
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct tagDDECONV *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  void *v40; // [rsp+48h] [rbp-28h]
  __int64 v41; // [rsp+50h] [rbp-20h]
  __int64 v42; // [rsp+58h] [rbp-18h] BYREF
  _UNKNOWN **v43; // [rsp+60h] [rbp-10h]
  __int64 v44; // [rsp+68h] [rbp-8h]

  v4 = (_UNKNOWN **)a2;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v6 = *a1;
    else
      v6 = 0LL;
    result = (_UNKNOWN **)WPP_RECORDER_SF_qq(
                            (__int64)a1,
                            a2,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
                            v6,
                            a2);
  }
  if ( v4 )
  {
    do
    {
      v7 = v4[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      v39 = v11;
      *(_QWORD *)(ThreadWin32Thread + 408) = &v39;
      v40 = v7;
      if ( v7 )
        HMLockObject(v7);
      v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v9, v10);
      v42 = *(_QWORD *)(v12 + 408);
      *(_QWORD *)(v12 + 408) = &v42;
      v43 = v4;
      HMLockObject(v4);
      if ( ((_DWORD)v4[10] & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(1024LL, v13, v14, v15) & 0x20) == 0
          || (v16 = v4[6]) == 0LL
          || ((v17 = v16[2], *(_DWORD *)(v17 + 624) <= 0x400u) ? (v18 = *(_DWORD *)(v17 + 640)) : (LOBYTE(v18) = 0),
              (v18 & 0x20) == 0) )
        {
          v19 = (__int64 *)v4[5];
          if ( v19 )
            v20 = *v19;
          else
            LODWORD(v20) = 0;
          PostMessage((int)v4[6], 993, v20, 0);
        }
      }
      v21 = v4[4];
      if ( v21 )
      {
        v22 = v21[20];
        v21[20] = v22 | 6;
        v23 = (v22 & 0xA) != 0;
      }
      else
      {
        v23 = 1;
      }
      v24 = (struct tagFREELIST *)v4[9];
      v4[9] = 0LL;
      v25 = *((_DWORD *)v4 + 20);
      if ( (v25 & 2) != 0 && v23 || (v25 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v4) + 25) & 1) == 0 )
          v4[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)v4[4]);
        v29 = (struct tagDDECONV *)ThreadUnlock1(v27, v26, v28);
        if ( v29 )
          xxxFreeDdeConv(v29);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v4, (int)v21);
        ThreadUnlock1(v34, v33, v35);
      }
      xxxFreeListFree(v24, v30, v31, v32);
      result = (_UNKNOWN **)ThreadUnlock1(v37, v36, v38);
      v4 = result;
    }
    while ( result );
  }
  return result;
}
