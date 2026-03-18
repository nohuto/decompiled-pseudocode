/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00CDB20
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0139F30 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C7874 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00C7D40 (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00CBE04 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00CDC10 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  int v11; // eax
  CCD_SET_STRING_ID *v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  struct _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v3 = (int)a3;
  if ( a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15LL, (__int64)&ValueName);
    v7 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v9 = v7;
    if ( v7 < 0 )
      goto LABEL_10;
    TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, 15, 1);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass((unsigned int)v3, (__int64)&ValueName);
    v11 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v9 = v11;
    if ( v11 < 0 )
    {
LABEL_10:
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v14[3] = v9;
      v14[4] = a2;
      v14[5] = v3;
      v14[6] = a1;
      v14[7] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdError(v14);
    }
    else
    {
      v12 = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, v3, 1);
      if ( v12 )
        CCD_SET_STRING_ID::operator=(v12, a2);
    }
    return (unsigned int)v9;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
    v15[3] = a2;
    v15[4] = v3;
    v15[5] = a1;
    v15[6] = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
}
