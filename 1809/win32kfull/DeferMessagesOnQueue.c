/*
 * XREFs of DeferMessagesOnQueue @ 0x1C0004A60
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0004AF0 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     IsHiddenByInputService @ 0x1C00386F0 (IsHiddenByInputService.c)
 */

struct tagQMSG *__fastcall DeferMessagesOnQueue(struct tagMLIST *a1, struct tagQMSG *a2)
{
  int v2; // r10d
  struct tagMLIST *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  struct tagQMSG *v10; // r9
  int v11; // r10d
  int v12; // ecx

  v2 = 0;
  v3 = a1;
  if ( a2 )
  {
    do
    {
      v4 = *((_QWORD *)a2 + 13);
      if ( !v4 || (*(_DWORD *)(v4 + 488) & 0x10000) == 0 )
        break;
      v5 = (_QWORD *)*((_QWORD *)a2 + 1);
      v6 = *(_QWORD *)a2;
      if ( v5 )
        *v5 = v6;
      else
        *(_QWORD *)v3 = v6;
      v7 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      else
        *((_QWORD *)v3 + 1) = v7;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
      DeferMessage(v3, a2);
      v9 = IsHiddenByInputService(v8);
      v12 = v11 + 1;
      a2 = v10;
      if ( v9 )
        v12 = v11;
      v2 = v12;
    }
    while ( v10 );
  }
  *((_DWORD *)v3 + 4) -= v2;
  return a2;
}
