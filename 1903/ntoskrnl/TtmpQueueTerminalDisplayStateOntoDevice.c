/*
 * XREFs of TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408BC004
 * Callers:
 *     TtmpPushTerminalState @ 0x1408BBF40 (TtmpPushTerminalState.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

void __fastcall TtmpQueueTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v5; // r8
  _QWORD *v6; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    v5 = (_QWORD *)(a1 + 16 * (a3 + 8LL));
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      while ( v6[3] != *(_QWORD *)(a2 + 24) || *((_DWORD *)v6 + 8) != *(_DWORD *)(a2 + 32) )
      {
        if ( v6[2] >= v3 )
        {
          v6 = (_QWORD *)v6[1];
          goto LABEL_10;
        }
        v6 = (_QWORD *)*v6;
        if ( v6 == v5 )
          goto LABEL_10;
      }
      goto LABEL_8;
    }
LABEL_10:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x446D7454u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_8:
      TtmiLogError("TtmpQueueTerminalDisplayStateOntoDevice");
      return;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = v3;
    PoolWithTag[3] = *(_QWORD *)(a2 + 24);
    *((_DWORD *)PoolWithTag + 8) = *(_DWORD *)(a2 + 32);
    v9 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      __fastfail(3u);
    *v8 = v9;
    v8[1] = v6;
    *(_QWORD *)(v9 + 8) = v8;
    *v6 = v8;
  }
}
