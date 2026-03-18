/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0117234 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxClientCopyImage @ 0x1C00B4D58 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C00B5A14 (xxxClientLoadImage.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00B88BC (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C0117548 (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C01175F4 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01CC034 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01CC230 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  struct tagCURSOR *v5; // rbx
  INT v6; // r14d
  int v7; // r15d
  unsigned int i; // esi
  INT v9; // edx
  INT v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 Image; // rax
  struct tagCURSOR *v14; // rdi
  __int64 v15; // rdx
  __int64 b; // [rsp+78h] [rbp+10h] BYREF

  v5 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    b = 0LL;
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v6 = *((_DWORD *)a1 + 35);
      v7 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v7 = HIDWORD(b);
      v6 = b;
    }
    for ( i = 0; i < 5; ++i )
    {
      LODWORD(b) = 0;
      if ( CCursorSizes::GetSizeForIndex(a1, i, (unsigned int *)&b) && !FindDPICursor(v5, b) )
      {
        v10 = EngMulDiv(v6, v9, *((_DWORD *)v5 + 19));
        v11 = EngMulDiv(v7 / 2, b, *((_DWORD *)v5 + 19));
        v12 = a3;
        if ( a2 )
        {
          LODWORD(v12) = a3 | 0x40000;
          Image = (__int64)xxxClientLoadImage((char **)a2, v12, 2u, v10, v11, a3 | 0x40000);
        }
        else
        {
          Image = xxxClientCopyImage(*(_QWORD *)v5, 2LL, v10, v11, a3 | 0x40000);
        }
        v14 = (struct tagCURSOR *)Image;
        if ( Image )
        {
          if ( *(_QWORD *)(Image + 40)
            || *(_QWORD *)(Image + 48) != Image
            || (*(_DWORD *)(Image + 80) & 0x2000) != 0
            || FindDPICursor(v5, b) )
          {
            _DestroyCursor(v14, 0);
          }
          else
          {
            v15 = *((_QWORD *)v5 + 3);
            if ( v15 )
            {
              if ( (*((_DWORD *)v5 + 20) & 0x200) == 0 )
                HMChangeOwnerProcess(v14, *(_QWORD *)(v15 + 320));
            }
            LinkDpiCursor(v5, v14, b);
            InputTraceLogging::Cursor::EnsureDpiCursor(v14);
            zzzFixupGlobalCursorWhenChanged((struct tagCURSOR **)v5);
          }
        }
      }
    }
  }
}
