/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C012D52C
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  DXGADAPTER *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  char v18[8]; // [rsp+20h] [rbp-50h] BYREF
  char v19[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  DXGADAPTER *v21; // [rsp+38h] [rbp-38h]
  char v22; // [rsp+40h] [rbp-30h]
  char v23[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  DXGADAPTER *v25; // [rsp+58h] [rbp-18h]
  char v26; // [rsp+60h] [rbp-10h]
  LONG HighPart; // [rsp+94h] [rbp+24h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+30h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v28);
  v7 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 8437LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v21 = v7;
    v22 = 0;
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    v25 = v7;
    v20 = -1LL;
    v26 = 0;
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    v24 = -1LL;
    DXGADAPTER::ReleaseReference(v7);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
    v11 = v9;
    if ( v9 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v16[3] = HighPart;
      v16[4] = a1.LowPart;
      v16[5] = v11;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v12 = *((_QWORD *)v7 + 315);
      if ( v12 )
      {
        *a2 = *(unsigned __int8 *)(v12 + 133);
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v17 + 24) = 8459LL;
        WdLogEvent5_WdError(v17);
        LODWORD(v11) = -1073741811;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    return (unsigned int)v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = HighPart;
    *(_QWORD *)(v14 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
