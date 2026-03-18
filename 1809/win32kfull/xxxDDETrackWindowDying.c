/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01F5200
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F4358 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01F53A8 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  BOOL v15; // eax
  struct tagFREELIST *v16; // rdi
  int v17; // ecx
  __int64 v18; // rcx
  struct tagDDECONV *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v25[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v24[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v24;
      v24[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v25[0] = *(_QWORD *)(v6 + 416);
      *(_QWORD *)(v6 + 416) = v25;
      v25[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      if ( (*(_DWORD *)(v2 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(1024LL, v7) & 0x20) == 0
          || (v8 = *(_QWORD *)(v2 + 48)) == 0
          || ((v9 = *(_QWORD *)(v8 + 16), *(_DWORD *)(v9 + 632) <= 0x400u)
            ? (v10 = *(_DWORD *)(v9 + 648))
            : (LOBYTE(v10) = 0),
              (v10 & 0x20) == 0) )
        {
          v11 = *(unsigned __int64 **)(v2 + 40);
          if ( v11 )
            v12 = *v11;
          else
            v12 = 0LL;
          PostMessage(*(struct tagWND **)(v2 + 48), 0x3E1u, v12, 0LL);
        }
      }
      v13 = *(_QWORD *)(v2 + 32);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 80);
        *(_DWORD *)(v13 + 80) = v14 | 6;
        v15 = (v14 & 0xA) != 0;
      }
      else
      {
        v15 = 1;
      }
      v16 = *(struct tagFREELIST **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0LL;
      v17 = *(_DWORD *)(v2 + 80);
      if ( (v17 & 2) != 0 && v15 || (v17 & 4) != 0 )
      {
        v18 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v2;
        LOBYTE(v18) = *(_BYTE *)(v18 + gSharedInfo[1] + 25);
        if ( (v18 & 1) == 0 )
          *(_QWORD *)(v2 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v2 + 32));
        v19 = (struct tagDDECONV *)ThreadUnlock1(v18, v13);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2);
        ThreadUnlock1(v21, v20);
      }
      xxxFreeListFree(v16);
      v2 = ThreadUnlock1(v23, v22);
    }
    while ( v2 );
  }
}
