/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C0138250
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0004C10 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01382CC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
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
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned __int16 *v15; // [rsp+28h] [rbp-20h]
  unsigned __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = (unsigned __int16)a4;
  LODWORD(v9) = DpiPersistence::GetMonitorIdFromTargetId(this, (unsigned int)a2, a3, a4, (unsigned __int16)a6, v15);
  if ( (int)v9 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = 159LL;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v10 = RtlStringCchLengthW(a6, v6, v16);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
      v14[6] = (int)a2[1];
      v14[7] = *a2;
      v14[3] = v9;
      v14[4] = a6;
      v14[5] = v6;
      WdLogEvent5_WdAssertion(v14);
    }
    else
    {
      *a5 = v16[0];
    }
  }
  return (unsigned int)v9;
}
