/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01D0AC4
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01CF298 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01CFC84 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r8
  struct tagFREELIST *v14; // rdi
  __int64 v15; // rcx
  struct tagDDECONV *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v23[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v23[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v23;
      v23[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v24[0] = *(_QWORD *)(v6 + 408);
      *(_QWORD *)(v6 + 408) = v24;
      v24[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      if ( (*(_DWORD *)(v2 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u, v7) & 0x20) == 0
          || (v9 = *(_QWORD *)(v2 + 48)) == 0
          || ((v10 = *(_QWORD *)(v9 + 16), *(_DWORD *)(v10 + 624) <= 0x400u)
            ? (v11 = *(_DWORD *)(v10 + 640))
            : (LOBYTE(v11) = 0),
              (v11 & 0x20) == 0) )
        {
          v12 = *(unsigned __int64 **)(v2 + 40);
          if ( v12 )
            v13 = *v12;
          else
            v13 = 0LL;
          PostMessage(*(struct tagWND **)(v2 + 48), 0x3E1u, v13, 0LL);
        }
      }
      *(_DWORD *)(*(_QWORD *)(v2 + 32) + 80LL) |= 6u;
      v14 = *(struct tagFREELIST **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0LL;
      if ( (*(_DWORD *)(v2 + 80) & 4) != 0 )
      {
        v15 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v2;
        LOBYTE(v15) = *(_BYTE *)(v15 + gSharedInfo[1] + 25);
        if ( (v15 & 1) == 0 )
          xxxFreeDdeConv(*(struct tagDDECONV **)(v2 + 32));
        v16 = (struct tagDDECONV *)ThreadUnlock1(v15, v7, v8);
        if ( v16 )
          xxxFreeDdeConv(v16);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2);
        ThreadUnlock1(v18, v17, v19);
      }
      xxxFreeListFree(v14);
      v2 = ThreadUnlock1(v21, v20, v22);
    }
    while ( v2 );
  }
}
