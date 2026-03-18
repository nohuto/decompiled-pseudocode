/*
 * XREFs of ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00DB47C
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DB500 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     ??$Add@VDMMVIDPNSOURCEMODE@@@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCEMODE@@@Z @ 0x1C000B9E0 (--$Add@VDMMVIDPNSOURCEMODE@@@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDP.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00423C8 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AddMode(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax

  v4 = *a2;
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
    v4 = *a2;
  }
  v5 = IndexedSet<DMMVIDPNSOURCEMODE>::Add<DMMVIDPNSOURCEMODE>((_QWORD *)(a1 + 24), v4) - 1;
  if ( !v5 )
  {
    v19 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v15 = -1071774956;
    *(_QWORD *)(v19 + 24) = *a2;
    *(_QWORD *)(v19 + 32) = a1;
    goto LABEL_15;
  }
  v10 = v5 - 1;
  if ( !v10 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v18[3] = *(unsigned int *)(*a2 + 24);
    v18[4] = *a2;
    v18[5] = a1;
    WdLogEvent5_WdError(v18);
    v15 = -1071774940;
    goto LABEL_15;
  }
  if ( v10 != 1 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    WdLogEvent5_WdError(v14);
    v15 = -1073741823;
LABEL_15:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return v15;
  }
  v11 = *a2 + 32;
  if ( a1 )
  {
    if ( *(_QWORD *)(*a2 + 40) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v17);
    }
    *(_QWORD *)(v11 + 8) = a1;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = *(_QWORD *)(v11 + 8);
    WdLogEvent5_WdError(v16);
  }
  *a2 = 0LL;
  return 0LL;
}
