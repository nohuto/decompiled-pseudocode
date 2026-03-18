/*
 * XREFs of ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C020DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C020F548 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 *     ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C020FF0C (-InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z.c)
 */

__int64 __fastcall AccountingforCSCallBackFn(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]
  unsigned __int8 v20; // [rsp+40h] [rbp-18h]

  v17 = a4;
  v16 = 20;
  v4 = ExQueryWnfStateData(a1, &v17, &v18, &v16);
  v8 = v4;
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v13 = v18 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v18 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v13 = v19 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( v13 )
    {
      v14 = v18 - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
      if ( v18 == *(_QWORD *)&GUID_SPM_DEFAULT.Data1 )
        v14 = v19 - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
      if ( v14 )
      {
        v15 = WdLogNewEntry5_WdWarning(v14, v13, v12);
        *(_QWORD *)(v15 + 24) = &v18;
        WdLogEvent5_WdWarning(v15);
      }
      else
      {
        DXGGLOBAL::FinalizeCSAccountingAndSendETW(Global);
      }
    }
    else
    {
      DXGGLOBAL::InitializeCSAccounting(Global, v20);
    }
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
    return (unsigned int)v8;
  }
}
