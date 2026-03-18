/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02B2EFC
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C01EDDC0 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C02B5BF8 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  struct _LUID *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  char *v14; // rbx
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 319);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v11 = *(_QWORD *)(v8 + 88);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
  v13 = *(_DWORD *)a2;
  v14 = 0LL;
  if ( *(int *)a2 > 0 && (v13 <= 9 || (unsigned int)(v13 - 12) <= 2) )
  {
    v15 = (char *)a2 + 24;
    goto LABEL_19;
  }
  v14 = (char *)operator new[](0x2CuLL, 0x4E506456u, PagedPool);
  if ( v14 )
  {
    operator delete(0LL);
    if ( *(_DWORD *)a2 == 10 )
    {
      v15 = (char *)a2 + 24;
      *(_DWORD *)v14 = *((_DWORD *)a2 + 6);
    }
    else
    {
      if ( *(_DWORD *)a2 != 11 )
      {
        v23 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)a2 - 10), v4, v20);
        *(_QWORD *)(v23 + 24) = *(int *)a2;
        WdLogEvent5_WdError(v23);
        v22 = -1073741811;
        goto LABEL_25;
      }
      v15 = (char *)a2 + 24;
      *(_DWORD *)v14 = *((_DWORD *)a2 + 6);
      *(_OWORD *)(v14 + 4) = *(_OWORD *)((char *)a2 + 28);
      *(_OWORD *)(v14 + 20) = *(_OWORD *)((char *)a2 + 44);
      *(_QWORD *)(v14 + 36) = *(_QWORD *)((char *)a2 + 60);
    }
LABEL_19:
    if ( DXGADAPTER::IsDiagnosticAllowed(this, v4) )
    {
      v31 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
      v32 = VIDPN_MGR::AcquireDiagInfo(v11, v15, *((_QWORD *)a2 + 1), v31, (int *)v14, (size_t *)a2 + 2);
      v22 = v32;
      if ( v32 == -2147483643 )
      {
        v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v36 + 24) = *((_QWORD *)a2 + 1);
        *(_QWORD *)(v36 + 32) = *(int *)a2;
        WdLogEvent5_WdWarning(v36);
        v22 = 1075707914;
      }
      else if ( v32 >= 0 )
      {
        v37 = WdLogNewEntry5_WdTrace(v34, v33);
        v22 = 0;
        *(_QWORD *)(v37 + 24) = *((_QWORD *)a2 + 1);
        *(_QWORD *)(v37 + 32) = *(int *)a2;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v28 = *(int *)a2;
      v29 = v27;
      *(_QWORD *)(v27 + 24) = v28;
      *(_QWORD *)(v27 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v28, v30);
      WdLogEvent5_WdWarning(v29);
      v22 = -1073741790;
    }
    goto LABEL_25;
  }
  v21 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
  *(_QWORD *)(v21 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v21);
  v22 = -1073741801;
LABEL_25:
  operator delete(v14);
  return v22;
}
