/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C000C938
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0006580 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     IsHiddenByInputService @ 0x1C000F944 (IsHiddenByInputService.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v1; // r11
  int v2; // edi
  __int64 v4; // r10
  __int64 v5; // rbx
  int v6; // eax
  struct tagQMSG *v7; // r10
  __int64 v8; // r11
  __int64 *v9; // r9
  __int64 v10; // rbx
  int v11; // ecx
  _QWORD *v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  struct tagQMSG *v17; // r10
  __int64 v18; // r11
  int v19; // ecx
  _QWORD *v20; // rdx
  _QWORD *v21; // r9

  v1 = *(_QWORD *)(a1 + 424);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 48);
  v5 = *(_QWORD *)(v1 + 32);
  if ( v4 )
  {
    do
    {
      if ( !v5 )
        break;
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( *(_DWORD *)(v5 + 48) < *(_DWORD *)(v4 + 48) )
        {
          v16 = IsHiddenByInputService(v4);
          v19 = v2 + 1;
          if ( v16 )
            v19 = v2;
          v2 = v19;
          RemoveQMsgFromDeferList((struct tagMLIST *)(v18 + 24), v17);
          *v20 = *(_QWORD *)v5;
          *v21 = v5;
          if ( v5 == *(_QWORD *)(v1 + 32) )
            *(_QWORD *)(v1 + 32) = v20;
          else
            *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v20;
          *(_QWORD *)v5 = v20;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    while ( v4 );
    while ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        v6 = IsHiddenByInputService(v4);
        v10 = *v9;
        v11 = v2 + 1;
        if ( v6 )
          v11 = v2;
        v2 = v11;
        RemoveQMsgFromDeferList((struct tagMLIST *)(v8 + 24), v7);
        *v13 = *(_QWORD *)(v1 + 24);
        v14 = *(_QWORD *)(v1 + 24);
        if ( v14 )
          *(_QWORD *)(v14 + 8) = v13;
        v15 = *(_QWORD *)(v1 + 32) == 0LL;
        *(_QWORD *)(v1 + 24) = v13;
        if ( v15 )
          *(_QWORD *)(v1 + 32) = v13;
        *v12 = 0LL;
        v4 = v10;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
  }
  *(_DWORD *)(v1 + 40) += v2;
}
