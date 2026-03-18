/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C012ABD8
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C012A864 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C012AB6C (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

const struct _UNICODE_STRING *__fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  bool v5; // zf
  char *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = a2;
  if ( a2 >= 4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 3254LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 3255LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 1) == 0;
  v6 = (char *)this + 328;
  if ( v5 )
    v6 = (char *)this + 264;
  return (const struct _UNICODE_STRING *)&v6[16 * v2];
}
