/*
 * XREFs of ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02A8E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8B14 (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 */

__int64 __fastcall DpiKsrSaveMemoryCallback(struct _FDO_CONTEXT *a1, const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *a2)
{
  const GUID *v2; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // r10
  int v19; // eax
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = (const GUID *)*((unsigned int *)a2 + 8);
  if ( (int)v2 < 0 )
    return (unsigned int)v2;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( (*((_DWORD *)a1 + 1380) & 2) != 0 )
    {
      v6 = DpiDxgkDdiSaveMemoryForHotUpdate(a1, a2, v2);
      *((_DWORD *)a2 + 8) = v6;
      LODWORD(v2) = v6;
      if ( v6 < 0 )
      {
        v9 = WdLogNewEntry5_WdError(v8, v7, (unsigned int)v6);
        *(_QWORD *)(v9 + 24) = *((int *)a2 + 8);
        WdLogEvent5_WdError(v9);
        return *((unsigned int *)a2 + 8);
      }
    }
  }
  LODWORD(v10) = (_DWORD)v2;
  if ( (*(_DWORD *)a2 & 1) == 0 && (int)v2 >= 0 )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v11 = *((_DWORD *)a2 + 2);
      if ( v11 <= 0x18 )
        return (unsigned int)v10;
      v12 = *((_QWORD *)a2 + 3);
      v13 = v11 - 24;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 487) + 2560LL);
      v15 = 0;
      v20 = 0;
      if ( v14 && (v16 = *(_QWORD *)(v14 + 1496)) != 0 )
      {
        LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v16 + 32LL))(
                         v16,
                         v13,
                         v12 + 24,
                         &v20);
        v15 = v20;
      }
      else
      {
        LODWORD(v10) = 0;
      }
      *((_DWORD *)a2 + 8) = v10;
      if ( (int)v10 < 0 || !v15 )
        return (unsigned int)v10;
      *(_OWORD *)v12 = *(_OWORD *)((char *)a1 + 4872);
      *(_DWORD *)(v12 + 20) = v20;
      LODWORD(v10) = *((_DWORD *)a2 + 8);
      *((_QWORD *)a2 + 3) += (unsigned int)(v20 + 24);
    }
    else
    {
      v17 = 0;
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 487) + 2560LL);
      if ( v10 )
      {
        v20 = 0;
        v18 = *(_QWORD *)(v10 + 1496);
        LODWORD(v10) = 0;
        if ( v18 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, 0LL, &v20);
          v17 = v20;
          LODWORD(v10) = v19;
        }
      }
      *((_DWORD *)a2 + 8) = v10;
      if ( !v17 )
        return (unsigned int)v10;
      *((_DWORD *)a2 + 2) += v17 + 24;
    }
    ++*((_DWORD *)a2 + 1);
  }
  return (unsigned int)v10;
}
