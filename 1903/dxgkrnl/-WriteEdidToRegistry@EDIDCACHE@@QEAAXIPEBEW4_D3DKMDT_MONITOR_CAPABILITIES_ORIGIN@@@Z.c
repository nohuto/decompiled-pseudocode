/*
 * XREFs of ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C025062C
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01702A4 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C02502D4 (-OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z.c)
 */

void __fastcall EDIDCACHE::WriteEdidToRegistry(
        EDIDCACHE *this,
        unsigned int a2,
        unsigned __int8 *a3,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a4)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  const WCHAR *v14; // rsi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  NTSTATUS v20; // eax
  _QWORD *v21; // rax
  unsigned __int8 *ValueData; // [rsp+20h] [rbp-28h]
  PCWSTR Path; // [rsp+30h] [rbp-18h] BYREF
  EDIDCACHE *v24; // [rsp+50h] [rbp+8h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v25; // [rsp+68h] [rbp+20h] BYREF

  v25 = a4;
  v24 = this;
  Path = 0LL;
  v5 = a2;
  v6 = EDIDCACHE::OpenEdidRegistryForTarget(this, a2, 0xF003Fu, (void **)&Path, (unsigned int *)&v24);
  v10 = v6;
  if ( v6 >= 0 )
  {
    v12 = Path;
    if ( !Path )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, 0LL);
      *(_QWORD *)(v13 + 24) = 253LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = Path;
    }
    ValueData = a3;
    v14 = L"EDID";
    v15 = RtlWriteRegistryValue(0x40000000u, v12, L"EDID", 3u, ValueData, 0x80u);
    v19 = v15;
    if ( v15 < 0
      || (v14 = L"Origin", v20 = RtlWriteRegistryValue(0x40000000u, Path, L"Origin", 4u, &v25, 4u), v19 = v20, v20 < 0) )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v21[3] = v19;
      v21[4] = v5;
      v21[5] = v14;
      WdLogEvent5_WdWarning(v21);
    }
    ZwClose((HANDLE)Path);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = v5;
    WdLogEvent5_WdWarning(v11);
  }
}
