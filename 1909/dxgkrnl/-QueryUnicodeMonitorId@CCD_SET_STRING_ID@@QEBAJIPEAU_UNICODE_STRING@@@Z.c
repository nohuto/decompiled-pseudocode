/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00DC888
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00DC944 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00DA87C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        __int64 a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  _QWORD *v13; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned int)a2;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v6 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString);
  v10 = v6;
  if ( v6 < 0 || (v11 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v10 = v11, v11 < 0) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v13[3] = v10;
    v13[4] = v3;
    v13[5] = a3;
    v13[6] = this;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v10;
}
