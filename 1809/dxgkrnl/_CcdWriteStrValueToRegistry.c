/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1C00CDC10
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00CC08C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00CC3F8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00CDB20 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  unsigned __int16 v8; // si
  wchar_t *v9; // rax
  __int64 v10; // rcx
  wchar_t *v11; // rdi
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v8 = v6;
  if ( v6 )
  {
    v9 = (wchar_t *)operator new(v6 + 2LL, 0x63644356u, PagedPool);
    v11 = v9;
    if ( v9 )
    {
      memset(v9, 0, v8 + 2LL);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v8;
      DestinationString.Buffer = v11;
      LODWORD(v12) = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( (int)v12 >= 0 )
      {
        v13 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v8 + 2);
        v12 = v13;
        if ( v13 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v18 + 24) = v12;
          WdLogEvent5_WdError(v18);
        }
      }
      operator delete[](v11);
      return (unsigned int)v12;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v17 + 24) = v8;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v16);
    return 3221225485LL;
  }
}
