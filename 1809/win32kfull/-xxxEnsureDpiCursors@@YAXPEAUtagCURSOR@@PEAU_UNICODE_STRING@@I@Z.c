/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00DEBF0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxClientCopyImage @ 0x1C00B468C (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D92A4 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForCursorOrFrame@@YA?AUtagSIZE@@PEAUtagCURSOR@@@Z @ 0x1C00DEDF8 (-GetSizeForCursorOrFrame@@YA-AUtagSIZE@@PEAUtagCURSOR@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01B847C (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  CCursorSizes *v8; // rbp
  CPushLock *v9; // rbx
  unsigned int v10; // ebp
  INT v11; // edx
  INT v12; // ebx
  INT v13; // eax
  __int64 v14; // rdx
  ULONG_PTR Image; // rax
  struct tagCURSOR *v16; // rbx
  __int64 v17; // rdx
  struct tagSIZE SizeForCursorOrFrame; // [rsp+88h] [rbp+10h]

  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    v5 = 0;
    v6 = 0LL;
    SizeForCursorOrFrame = GetSizeForCursorOrFrame(a1);
    v7 = 5LL;
    do
    {
      v8 = gpCursorSizes;
      v9 = (CCursorSizes *)((char *)gpCursorSizes + 64);
      CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
      if ( *(_DWORD *)((char *)v8 + v6 + 20) )
        v10 = *(_DWORD *)((char *)v8 + v6 + 24);
      else
        v10 = 0;
      CPushLock::ReleaseLock(v9);
      if ( v10 )
      {
        if ( !FindDPICursor(a1, v10) )
        {
          v12 = EngMulDiv(SizeForCursorOrFrame.cx, v11, *((_DWORD *)a1 + 19));
          v13 = EngMulDiv(SizeForCursorOrFrame.cy / 2, v10, *((_DWORD *)a1 + 19));
          v14 = a3;
          if ( a2 )
          {
            LODWORD(v14) = a3 | 0x40000;
            Image = xxxClientLoadImage(&a2->Length, v14, 2u, v12, v13, a3 | 0x40000);
          }
          else
          {
            Image = xxxClientCopyImage(*(_QWORD *)a1, 2LL, v12, v13, a3 | 0x40000);
          }
          v16 = (struct tagCURSOR *)Image;
          if ( Image )
          {
            if ( *(_QWORD *)(Image + 40) || *(_QWORD *)(Image + 48) != Image || (*(_DWORD *)(Image + 80) & 0x2000) != 0 )
            {
              _DestroyCursor((struct tagCURSOR *)Image, 0LL);
            }
            else
            {
              v17 = *((_QWORD *)a1 + 3);
              if ( v17 && (*((_DWORD *)a1 + 20) & 0x200) == 0 )
                HMChangeOwnerPheProcess(
                  gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Image,
                  *(_QWORD *)(v17 + 328));
              LinkDpiCursor(a1, v16, v10);
              v5 = 1;
            }
          }
        }
      }
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
    if ( v5 )
      zzzFixupGlobalCursorWhenChanged((struct tagCURSOR **)a1);
  }
}
