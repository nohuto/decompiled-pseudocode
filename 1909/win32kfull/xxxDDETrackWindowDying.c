/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C020BE3C
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209AA4 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 */

_UNKNOWN **__fastcall xxxDDETrackWindowDying(__int64 *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rbx
  _UNKNOWN **result; // rax
  __int64 v5; // rax
  void *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // rdx
  int v18; // ecx
  BOOL v19; // eax
  struct tagFREELIST *v20; // rdi
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct tagDDECONV *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  void *v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+50h] [rbp-20h]
  __int64 v35; // [rsp+58h] [rbp-18h] BYREF
  _UNKNOWN **v36; // [rsp+60h] [rbp-10h]
  __int64 v37; // [rsp+68h] [rbp-8h]

  v3 = (_UNKNOWN **)a2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v5 = *a1;
    else
      v5 = 0LL;
    result = (_UNKNOWN **)WPP_RECORDER_SF_qq(
                            (__int64)a1,
                            a2,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
                            v5,
                            a2);
  }
  if ( v3 )
  {
    do
    {
      v6 = v3[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
      v9 = *(_QWORD *)(ThreadWin32Thread + 408);
      v32 = v9;
      *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
      v33 = v6;
      if ( v6 )
        HMLockObject(v6);
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v8);
      v35 = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = &v35;
      v36 = v3;
      HMLockObject(v3);
      if ( ((_DWORD)v3[10] & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(1024LL, v11) & 0x20) == 0
          || (v12 = v3[6]) == 0LL
          || ((v13 = v12[2], *(_DWORD *)(v13 + 624) <= 0x400u) ? (v14 = *(_DWORD *)(v13 + 640)) : (LOBYTE(v14) = 0),
              (v14 & 0x20) == 0) )
        {
          v15 = (__int64 *)v3[5];
          if ( v15 )
            v16 = *v15;
          else
            LODWORD(v16) = 0;
          PostMessage((int)v3[6], 993, v16, 0);
        }
      }
      v17 = v3[4];
      if ( v17 )
      {
        v18 = v17[20];
        v17[20] = v18 | 6;
        v19 = (v18 & 0xA) != 0;
      }
      else
      {
        v19 = 1;
      }
      v20 = (struct tagFREELIST *)v3[9];
      v3[9] = 0LL;
      v21 = *((_DWORD *)v3 + 20);
      if ( (v21 & 2) != 0 && v19 || (v21 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) == 0 )
          v3[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)v3[4]);
        v25 = (struct tagDDECONV *)ThreadUnlock1(v23, v22, v24);
        if ( v25 )
          xxxFreeDdeConv(v25);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v3, (int)v17);
        ThreadUnlock1(v27, v26, v28);
      }
      xxxFreeListFree(v20);
      result = (_UNKNOWN **)ThreadUnlock1(v30, v29, v31);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
