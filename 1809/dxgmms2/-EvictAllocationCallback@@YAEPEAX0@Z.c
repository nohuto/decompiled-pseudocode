/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C00BC9C8
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C00C5A6C (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, char *a2)
{
  char v2; // bl
  char *v5; // rdx
  char *i; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r9
  char result; // al
  __int64 v12; // rax

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 63) + 12LL)
    || (**((_DWORD **)a2 + 63) & 0x20000) != 0
    || (*((_DWORD *)a2 + 19) & 0x100) != 0 )
  {
    if ( *((_QWORD *)a2 + 17) )
    {
      v12 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v12 + 24) = a2;
      WdLogEvent5_WdWarning(v12);
      result = 0;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !*((_QWORD *)a2 + 17) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v5 = (char *)*((_QWORD *)a2 + 37);
LABEL_18:
  if ( v5 == a2 + 296 )
  {
    v2 = 1;
  }
  else
  {
    for ( i = (char *)*((_QWORD *)v5 - 2); ; i = *(char **)i )
    {
      if ( i == v5 - 16 )
      {
        v5 = *(char **)v5;
        goto LABEL_18;
      }
      v7 = (_QWORD *)*((_QWORD *)i - 4);
      if ( !v7[3] || (*(_DWORD *)(v7[1] + 88LL) & 2) != 0 )
        break;
      v8 = v7 + 22;
      if ( !v7[22] )
      {
        v9 = *(_QWORD *)a1;
        v10 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v10 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v8 = v9;
        v8[1] = v10;
        *v10 = v8;
        *(_QWORD *)(v9 + 8) = v8;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  return v2;
}
