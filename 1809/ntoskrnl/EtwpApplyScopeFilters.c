/*
 * XREFs of EtwpApplyScopeFilters @ 0x1405C52D0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140658DA8 (EtwpUpdateRegEntryEnableMask.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x140584694 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1408C2E00 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v8 = *(_QWORD *)(v8 + 400);
    v9 = 0LL;
    do
    {
      v10 = (unsigned int)v9;
      if ( *(_DWORD *)(32 * (v9 + 4) + v8)
        && (!a4 || (*(_DWORD *)(32LL * (unsigned int)v9 + v8 + 136) & 0x400) != 0)
        && (!a2 || *(_WORD *)(32LL * (unsigned int)v9 + v8 + 134) == *(_WORD *)(v8 + 88)) )
      {
        v11 = *(_QWORD *)(v8 + 384);
        v12 = 1;
        if ( !v11 )
          goto LABEL_31;
        v13 = 104LL * (unsigned int)v9;
        v14 = v13 + v11;
        if ( (*(_DWORD *)(v13 + v11) & 0x80000004) != 0x80000004 )
          goto LABEL_30;
        v15 = *(unsigned int **)(v14 + 8);
        v12 = 0;
        v16 = 0LL;
        v10 = *v15;
        if ( (_DWORD)v10 )
        {
          while ( v15[v16 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 736LL) )
          {
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= (unsigned int)v10 )
              goto LABEL_20;
          }
          v12 = 1;
        }
LABEL_20:
        if ( v12 )
        {
LABEL_30:
          if ( (*(_DWORD *)(104LL * (unsigned int)v9 + v11) & 0x80000008) == 0x80000008 )
            v12 = EtwpApplyExeFilter(a1, *(_QWORD *)(v14 + 16), v10);
          if ( v12 )
          {
            v17 = *(_QWORD *)(v8 + 384);
            if ( (*(_DWORD *)(v17 + 104LL * (unsigned int)v9) & 0x80000010) == 0x80000010
              || (*(_DWORD *)(v17 + 104LL * (unsigned int)v9) & 0x80000020) == 0x80000020 )
            {
              v12 = EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v17 + v13 + 24), *(_QWORD *)(v17 + v13 + 32));
            }
            if ( v12 )
            {
              v18 = *(_QWORD *)(v8 + 384);
              if ( (*(_DWORD *)(v18 + 104LL * (unsigned int)v9) & 0x80008000) == 0x80008000 )
                v12 = EtwpApplyContainerFilter(a1, *(_WORD **)(v18 + v13 + 40));
              if ( v12 )
LABEL_31:
                *a5 |= 1 << v9;
            }
          }
        }
        if ( a2 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 8 );
  }
}
