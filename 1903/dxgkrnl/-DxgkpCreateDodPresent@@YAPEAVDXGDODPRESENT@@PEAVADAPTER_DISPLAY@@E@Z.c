/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C017E638
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C016938C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0035CB4 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0159834 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C017E6D4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGDODPRESENT *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  DXGDODPRESENT *v13; // rbx
  __int64 v15; // rax

  v4 = (unsigned __int8 *)operator new[](2760LL * *((unsigned int *)a1 + 20) + 136, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    v9 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 136, a2);
    v12 = 0;
    v13 = v9;
    if ( !*(_DWORD *)v9 )
      return v13;
    while ( (int)BLTQUEUE::Startup((char *)(*((_QWORD *)v13 + 1) + 2760LL * v12), v10, v11) >= 0 )
    {
      if ( ++v12 >= *(_DWORD *)v13 )
        return v13;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v13);
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdLowResource(v15);
  }
  return 0LL;
}
