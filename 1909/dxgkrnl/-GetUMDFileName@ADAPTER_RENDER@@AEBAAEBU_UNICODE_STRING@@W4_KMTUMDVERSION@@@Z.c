/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00EBE60
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EBDF4 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EBFB0 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

const struct _UNICODE_STRING *__fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  char *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 3280LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v10 + 24) = 3281LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 299) & 1) == 0;
  v7 = (char *)this + 328;
  if ( v6 )
    v7 = (char *)this + 264;
  return (const struct _UNICODE_STRING *)&v7[16 * v2];
}
