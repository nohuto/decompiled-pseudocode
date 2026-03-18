/*
 * XREFs of ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00DCF4C
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DCEB8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0146120 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

_QWORD *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax

  v3 = (int)a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      v6 = 56LL;
      break;
    case 2:
      v6 = 64LL;
      break;
    case 4:
      v6 = 72LL;
      break;
    case 8:
      v6 = 80LL;
      break;
    default:
      if ( (_DWORD)a2 != 15 )
      {
        v12 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v12 + 24) = v3;
        WdLogEvent5_WdAssertion(v12);
      }
      v6 = 88LL;
      break;
  }
  result = *(_QWORD **)(v6 + a1);
  if ( !result && a3 )
  {
    result = operator new[](0x38uLL, 0x63644356u, PagedPool);
    if ( result )
    {
      v9 = 0LL;
      *(_DWORD *)result = 0;
      result[1] = 0LL;
      result[2] = 0LL;
      result[3] = 0LL;
      *((_WORD *)result + 16) = 0;
      result[5] = 0LL;
      result[6] = 0LL;
    }
    else
    {
      result = 0LL;
    }
    *(_QWORD *)(v6 + a1) = result;
    if ( !result )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      v13[3] = 56LL;
      v13[4] = v3;
      v13[5] = a1;
      v13[6] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdLowResource(v13);
      return *(_QWORD **)(v6 + a1);
    }
  }
  return result;
}
