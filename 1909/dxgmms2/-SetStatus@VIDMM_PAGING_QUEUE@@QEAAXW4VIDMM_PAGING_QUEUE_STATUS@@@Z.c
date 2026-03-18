/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C007D7C4
 * Callers:
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0001AC0 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C007D5F8 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C007D73C (-Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B6BB8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, int a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdi
  int v5; // edi
  __int64 **v6; // rcx
  __int64 *v7; // rax
  __int64 **v8; // rcx
  struct _KEVENT *v9; // rcx
  __int64 *v10; // rax
  __int64 **v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 **v17; // rcx

  LODWORD(v2) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = (__int64 *)WdLogNewEntry5_WdTrace(a1);
    v2[3] = (__int64)a1;
    v2[4] = *((int *)a1 + 28);
    v2[5] = v4;
  }
  if ( !(_DWORD)v4 )
  {
    v7 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_24;
    v8 = (__int64 **)a1[1];
    if ( *v8 != a1 )
      goto LABEL_24;
    *v8 = v7;
    v7[1] = (__int64)v8;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    v9 = (struct _KEVENT *)a1[15];
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( *((_DWORD *)a1 + 28) == 2 )
    {
      v10 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        goto LABEL_24;
      v11 = (__int64 **)a1[1];
      if ( *v11 != a1 )
        goto LABEL_24;
      *v11 = v10;
      v10[1] = (__int64)v11;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v12 = *((_BYTE *)a1 + 128) == 0;
    v13 = a1[10];
    *((_DWORD *)a1 + 28) = 1;
    if ( v12 )
    {
      if ( *((_BYTE *)a1 + 129) )
      {
        v14 = v13 + 80;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)a1 + 29) != 3 )
    {
      v14 = v13 + 96;
      goto LABEL_21;
    }
    v14 = v13 + 64;
LABEL_21:
    v15 = *(__int64 ***)(v14 + 8);
    if ( *v15 != (__int64 *)v14 )
      goto LABEL_24;
    *a1 = v14;
    a1[1] = (__int64)v15;
    *v15 = a1;
    *(_QWORD *)(v14 + 8) = a1;
    v9 = *(struct _KEVENT **)(a1[10] + 152);
LABEL_13:
    LODWORD(v2) = KeSetEvent(v9, 0, 0);
    return (int)v2;
  }
  if ( v5 == 1 )
  {
    if ( *((_DWORD *)a1 + 28) == 1 )
    {
      v16 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        goto LABEL_24;
      v17 = (__int64 **)a1[1];
      if ( *v17 != a1 )
        goto LABEL_24;
      *v17 = v16;
      v16[1] = (__int64)v17;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v2 = (__int64 *)(a1[10] + 112);
    v6 = *(__int64 ***)(a1[10] + 120);
    if ( *v6 == v2 )
    {
      *a1 = (__int64)v2;
      a1[1] = (__int64)v6;
      *v6 = a1;
      v2[1] = (__int64)a1;
      *((_DWORD *)a1 + 28) = 2;
      return (int)v2;
    }
LABEL_24:
    __fastfail(3u);
  }
  return (int)v2;
}
