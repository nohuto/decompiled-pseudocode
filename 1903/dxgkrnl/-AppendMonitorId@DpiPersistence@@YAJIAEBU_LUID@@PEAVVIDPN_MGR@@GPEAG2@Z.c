/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C012B9FC
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012B70C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C012BA78 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall DpiPersistence::AppendMonitorId(
        DpiPersistence *this,
        unsigned int *a2,
        const struct _LUID *a3,
        struct VIDPN_MGR *a4,
        _WORD *a5,
        unsigned __int16 *a6)
{
  unsigned __int16 v6; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned __int16 *v18; // [rsp+28h] [rbp-20h]
  unsigned __int64 v19[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = (unsigned __int16)a4;
  LODWORD(v10) = DpiPersistence::GetMonitorIdFromTargetId(this, (unsigned int)a2, a3, a4, (unsigned __int16)a6, v18);
  if ( (int)v10 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v9, v8, v11);
    *(_QWORD *)(v16 + 24) = 159LL;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    v12 = RtlStringCchLengthW(a6, v6, v19);
    v10 = v12;
    if ( v12 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v17[6] = (int)a2[1];
      v17[7] = *a2;
      v17[3] = v10;
      v17[4] = a6;
      v17[5] = v6;
      WdLogEvent5_WdAssertion(v17);
    }
    else
    {
      *a5 = v19[0];
    }
  }
  return (unsigned int)v10;
}
