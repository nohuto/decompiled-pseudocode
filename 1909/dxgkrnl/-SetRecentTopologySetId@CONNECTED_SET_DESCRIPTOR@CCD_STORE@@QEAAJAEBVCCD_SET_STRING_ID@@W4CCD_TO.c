/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0149C40
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0149BC0 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB40 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00DD58C (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00DF0A8 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C0149D44 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  int v13; // eax
  CCD_SET_STRING_ID *v14; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  struct _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v3 = (int)a3;
  if ( a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15LL, (__int64)&ValueName);
    v7 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v11 = v7;
    if ( v7 < 0 )
      goto LABEL_10;
    TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                                  a1,
                                                  15LL,
                                                  1);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass((unsigned int)v3, (__int64)&ValueName);
    v13 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v11 = v13;
    if ( v13 < 0 )
    {
LABEL_10:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v16[3] = v11;
      v16[4] = a2;
      v16[5] = v3;
      v16[6] = a1;
      v16[7] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v14 = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v3, 1);
      if ( v14 )
        CCD_SET_STRING_ID::operator=(v14, a2);
    }
    return (unsigned int)v11;
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v17[3] = a2;
    v17[4] = v3;
    v17[5] = a1;
    v17[6] = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
}
