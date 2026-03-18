/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0001210
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000530C (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C003F2F4 (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C020D3A8 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(DXGDIAGNOSTICS *this, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edi
  const void *v11; // rdx
  size_t v12; // r8
  unsigned __int8 *v13; // rcx
  int v15; // ecx
  __int64 v16; // rax

  if ( !a2 || !a3 || !*a3 )
    return 3221225507LL;
  memset(a2, 0, *a3);
  v6 = *((unsigned int *)this + 5);
  v7 = *((_DWORD *)this + 6);
  if ( (unsigned int)v6 > v7 )
    v7 += *((_DWORD *)this + 4);
  v8 = *a3;
  if ( v7 - (unsigned int)v6 < *a3 )
  {
    *a3 = v7 - v6;
    v8 = v7 - v6;
  }
  if ( v7 == (_DWORD)v6 )
  {
    *a3 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 4);
    v10 = v8 + v6;
    v11 = (const void *)(*((_QWORD *)this + 4) + v6);
    if ( v8 + (unsigned int)v6 > v9 )
    {
      memmove(a2, v11, v9 - (unsigned int)v6);
      v15 = *((_DWORD *)this + 4);
      v11 = (const void *)*((_QWORD *)this + 4);
      v12 = v10 - v15;
      v13 = &a2[(unsigned int)(v15 - v6)];
    }
    else
    {
      v12 = v8;
      v13 = a2;
    }
    memmove(v13, v11, v12);
    if ( v10 > v7 )
    {
      v16 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v16 + 24) = 1398LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  return 0LL;
}
