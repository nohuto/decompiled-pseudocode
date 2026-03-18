/*
 * XREFs of ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0143504
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::QueryNodeMetadata(DXGADAPTER *this, __int64 a2, struct _DXGK_NODEMETADATA *a3)
{
  unsigned __int16 v3; // si
  unsigned int v4; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int16 *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax

  v3 = a2;
  v4 = WORD1(a2);
  v6 = 1;
  if ( *((int *)this + 546) >= 0x2000 )
    v7 = *((unsigned int *)this + 64);
  else
    v7 = 1LL;
  v8 = v4;
  if ( v4 >= (unsigned int)v7 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3);
    v12[3] = this;
    v12[4] = v8;
    if ( *((int *)this + 546) >= 0x2000 )
      v6 = *((_DWORD *)this + 64);
    v12[5] = v6;
    goto LABEL_12;
  }
  v9 = (unsigned __int16 *)(*((_QWORD *)this + 305) + 352LL * v4);
  if ( (unsigned __int16)a2 >= *v9 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3);
    v13[4] = v3;
    v13[3] = this;
    v13[5] = *v9;
    v12 = v13;
LABEL_12:
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)v9 + 3);
  if ( v10 )
  {
    *a3 = *(struct _DXGK_NODEMETADATA *)(74LL * v3 + v10);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v7, 0LL, a3);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdWarning(v14);
    return 3221225659LL;
  }
}
