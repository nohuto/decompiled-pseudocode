/*
 * XREFs of IoMmuUpdatePfn @ 0x1C0050464
 * Callers:
 *     IoMmuReferenceMdl @ 0x1C0050170 (IoMmuReferenceMdl.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0024AF4 (IoMmuDeletePage.c)
 *     IoMmuAllocatePage @ 0x1C004FD24 (IoMmuAllocatePage.c)
 *     IoMmuCompareIoMmuPagePfn @ 0x1C004FED8 (IoMmuCompareIoMmuPagePfn.c)
 *     IoMmuStampPage @ 0x1C00502E4 (IoMmuStampPage.c)
 */

__int64 __fastcall IoMmuUpdatePfn(_DWORD **a1, __int64 a2, char a3, __int64 a4)
{
  _DWORD *Page; // rbx
  unsigned int v9; // edi
  int v10; // eax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  Page = *a1;
  v13 = a2;
  v9 = 0;
  while ( Page )
  {
    v10 = IoMmuCompareIoMmuPagePfn(&v13, (__int64)Page);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      Page = (_DWORD *)*((_QWORD *)Page + 1);
    }
    else
    {
      Page = *(_DWORD **)Page;
    }
  }
  if ( a3 )
  {
    if ( !Page )
    {
      Page = IoMmuAllocatePage((__int64)a1, a2);
      if ( !Page )
        return 3221225495LL;
      v9 = 259;
    }
    ++Page[6];
    IoMmuStampPage((__int64)Page, a4);
  }
  else
  {
    if ( !Page )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v12[3] = 275LL;
      v12[4] = 45LL;
      v12[5] = a2;
      v12[6] = a4;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    --Page[6];
    IoMmuStampPage((__int64)Page, a4);
    if ( !Page[6] )
    {
      RtlAvlRemoveNode(a1, Page);
      IoMmuDeletePage((__int64)a1, Page);
      return 259;
    }
  }
  return v9;
}
