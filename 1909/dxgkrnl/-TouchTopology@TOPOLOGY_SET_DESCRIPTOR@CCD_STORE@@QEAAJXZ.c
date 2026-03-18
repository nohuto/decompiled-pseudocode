/*
 * XREFs of ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C0130174
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C012F9A0 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateTimestampTopologySetCallback @ 0x1C0130160 (_anonymous_namespace_--_UpdateTimestampTopologySetCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  const WCHAR *v2; // rdx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  _QWORD *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (const WCHAR *)*((_QWORD *)this + 8);
  v10 = MEMORY[0xFFFFF78000000014];
  v3 = RtlWriteRegistryValue(0x40000000u, v2, L"Timestamp", 0xBu, &v10, 8u);
  v7 = v3;
  if ( v3 < 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
    v9[3] = v7;
    v9[4] = SHIDWORD(v10);
    v9[5] = (unsigned int)v10;
    v9[6] = *((int *)this + 15);
    v9[7] = *((unsigned int *)this + 14);
    WdLogEvent5_WdError(v9);
  }
  else
  {
    *((_QWORD *)this + 7) = v10;
  }
  return (unsigned int)v7;
}
