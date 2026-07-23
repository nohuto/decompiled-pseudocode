/*
 * XREFs of PipMergeDependencyEdgeList @ 0x14082518C
 * Callers:
 *     PipMergeDependencyNodes @ 0x140825310 (PipMergeDependencyNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140287AA0 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x140287CA8 (PipFreeDependencyEdge.c)
 *     PipMoveListEntries @ 0x140287E70 (PipMoveListEntries.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PipDeleteDependencyNode @ 0x14075EA9C (PipDeleteDependencyNode.c)
 *     PipAddRequestToEdge @ 0x140824D7C (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x140825388 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  int v5; // esi
  __int64 *v6; // r14
  _QWORD **v7; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // r13
  bool v15; // bp
  __int64 v16; // rdx
  __int64 v17; // rcx
  UNICODE_STRING *v18; // rsi
  PCUNICODE_STRING *v19; // rdx
  bool v20; // zf
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+20h]

  P[0] = 0LL;
  v3 = a2;
  v5 = a3;
  v6 = (__int64 *)((a3 != 0 ? 0x10 : 0) + a1 + 16);
  v24 = v6;
  v7 = (_QWORD **)(a2 + 16 + (a3 != 0 ? 0x10 : 0));
  PiPnpRtlBeginOperation(P);
  v8 = *v7;
  if ( *v7 == v7 )
    goto LABEL_22;
  do
  {
    v9 = PiListEntryToDependencyEdge((__int64)v8, v5);
    v10 = *v6;
    v11 = v9;
    v8 = (_QWORD *)*v8;
    if ( (__int64 *)*v6 == v6 )
      goto LABEL_10;
    while ( 1 )
    {
      v12 = PiListEntryToDependencyEdge(v10, v5);
      v10 = *v13;
      v14 = v12;
      if ( !v5 )
      {
        v15 = *(_QWORD *)(v11 + 32) == *(_QWORD *)(v12 + 32);
        goto LABEL_7;
      }
      if ( *(_QWORD *)(v11 + 40) == *(_QWORD *)(v12 + 40) )
        break;
      v15 = 0;
LABEL_7:
      if ( v15 )
        goto LABEL_13;
      if ( (__int64 *)v10 == v6 )
      {
        v3 = a2;
        goto LABEL_10;
      }
    }
    v15 = 1;
LABEL_13:
    v18 = *(UNICODE_STRING **)(v11 + 56);
    while ( v18 != (UNICODE_STRING *)(v11 + 56) )
    {
      v19 = (PCUNICODE_STRING *)v18;
      v18 = *(UNICODE_STRING **)&v18->Length;
      PipAddRequestToEdge(v14, v19 + 2);
    }
    PipFreeDependencyEdge((_DWORD *)v11, v14);
    v5 = a3;
    v11 = 0LL;
    v20 = !v15;
    v3 = a2;
    if ( v20 )
    {
LABEL_10:
      if ( v5 )
      {
        v17 = *(_QWORD *)(v11 + 40);
        v16 = a1;
        *(_QWORD *)(v11 + 32) = a1;
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 32);
        v17 = a1;
        *(_QWORD *)(v11 + 40) = a1;
      }
      PipNotifyDependenciesChanged(v17, v16);
      ++*(_DWORD *)(a1 + 88);
      v20 = (*(_DWORD *)(v3 + 88))-- == 1;
      if ( v20 )
        PipDeleteDependencyNode((_QWORD *)v3);
    }
    v6 = v24;
  }
  while ( v8 != v7 );
LABEL_22:
  PipMoveListEntries(v6, (__int64)v7);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
}
