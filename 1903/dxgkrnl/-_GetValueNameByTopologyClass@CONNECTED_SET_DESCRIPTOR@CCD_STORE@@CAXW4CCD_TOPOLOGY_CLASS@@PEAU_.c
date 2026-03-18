/*
 * XREFs of ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00DEA68
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DCEB8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0146120 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const wchar_t *v4; // rax
  __int16 result; // ax
  __int64 v6; // rax

  v2 = (int)a1;
  if ( (_DWORD)a1 == 1 )
  {
    *(_WORD *)(a2 + 2) = 18;
    v4 = L"Internal";
  }
  else if ( (_DWORD)a1 == 2 )
  {
    *(_WORD *)(a2 + 2) = 12;
    v4 = L"Clone";
  }
  else if ( (_DWORD)a1 == 4 )
  {
    *(_WORD *)(a2 + 2) = 14;
    v4 = L"eXtend";
  }
  else if ( (_DWORD)a1 == 8 )
  {
    *(_WORD *)(a2 + 2) = 18;
    v4 = L"External";
  }
  else
  {
    if ( (_DWORD)a1 == 15 )
    {
      *(_WORD *)(a2 + 2) = 14;
    }
    else
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v6 + 24) = v2;
      WdLogEvent5_WdAssertion(v6);
      *(_WORD *)(a2 + 2) = 14;
    }
    v4 = L"Recent";
  }
  *(_QWORD *)(a2 + 8) = v4;
  result = *(_WORD *)(a2 + 2) - 2;
  *(_WORD *)a2 = result;
  return result;
}
