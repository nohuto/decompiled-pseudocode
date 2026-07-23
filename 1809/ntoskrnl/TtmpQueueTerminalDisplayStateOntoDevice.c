/*
 * XREFs of TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087F740
 * Callers:
 *     TtmpPushTerminalState @ 0x14087F67C (TtmpPushTerminalState.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 */

void __fastcall TtmpQueueTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v5; // r8
  _QWORD *v6; // rbx
  int v7; // edx
  int v8; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    v5 = (_QWORD *)(a1 + 16 * (a3 + 8LL));
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      while ( 1 )
      {
        if ( v6[3] == *(_QWORD *)(a2 + 24) && *((_DWORD *)v6 + 8) == *(_DWORD *)(a2 + 32) )
        {
          v7 = 2755;
          v8 = -1073741270;
          goto LABEL_9;
        }
        if ( v6[2] >= v3 )
          break;
        v6 = (_QWORD *)*v6;
        if ( v6 == v5 )
          goto LABEL_11;
      }
      v6 = (_QWORD *)v6[1];
    }
LABEL_11:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x446D7454u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v10[2] = v3;
      v10[3] = *(_QWORD *)(a2 + 24);
      *((_DWORD *)v10 + 8) = *(_DWORD *)(a2 + 32);
      v11 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        __fastfail(3u);
      *v10 = v11;
      v10[1] = v6;
      *(_QWORD *)(v11 + 8) = v10;
      *v6 = v10;
    }
    else
    {
      v7 = 2790;
      v8 = -1073741670;
LABEL_9:
      TtmiLogError("TtmpQueueTerminalDisplayStateOntoDevice", v7, v8, -1);
    }
  }
}
