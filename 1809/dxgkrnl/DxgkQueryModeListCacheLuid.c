/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C013AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001A080 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 7036LL;
LABEL_16:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = 7043LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v25);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = a1->HighPart;
    *(_QWORD *)(v16 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v8, v3, 0LL, 0LL, &v25, &v26);
  DXGADAPTER::ReleaseReference(v8);
  if ( (int)PairingAdapters < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
    v17[3] = 0LL;
    v17[4] = v3;
    v17[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    v12 = v25;
    if ( !v25 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v18 + 24) = 7090LL;
      WdLogEvent5_WdAssertion(v18);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v12, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    DXGADAPTER::ReleaseReference(v12);
    if ( (int)PairingAdapters < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v19 + 24) = v12;
      *(_QWORD *)(v19 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      v14 = *((_QWORD *)v12 + 315);
      if ( !v14 )
      {
        v20 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v20 + 24) = 7112LL;
        WdLogEvent5_WdAssertion(v20);
        v14 = *((_QWORD *)v12 + 315);
      }
      if ( (unsigned int)v3 >= *(_DWORD *)(v14 + 80) )
      {
        v21 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v21 + 24) = v3;
        *(_QWORD *)(v21 + 32) = v12;
        WdLogEvent5_WdError(v21);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v14, v3, a3);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
  }
  return (unsigned int)PairingAdapters;
}
