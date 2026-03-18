/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0077D8C
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0076DEC (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  int v2; // eax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 2140LL;
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_DWORD *)this + 4);
  }
  *((_DWORD *)this + 4) = v2 - 1;
  v5 = a2 + 3;
  v6 = a2[3];
  if ( *(_QWORD **)(v6 + 8) != a2 + 3
    || (v7 = (_QWORD *)a2[4], (_QWORD *)*v7 != v5)
    || (*v7 = v6,
        v8 = (char *)this + 56,
        *(_QWORD *)(v6 + 8) = v7,
        v9 = *(_QWORD *)v8,
        *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
  {
    __fastfail(3u);
  }
  a2[4] = v8;
  *v5 = v9;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)v8 = v5;
  *((_BYTE *)a2 + 56) = 3;
}
