/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0292998
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C02186AC (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C028FBEC (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02913C4 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  struct DXGFASTMUTEX *v6; // r15
  unsigned int v10; // esi
  struct _EX_RUNDOWN_REF *v11; // rdi
  DXGAUTOMUTEX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v28[8]; // [rsp+30h] [rbp-20h] BYREF
  char v29; // [rsp+38h] [rbp-18h]
  _BYTE v30[8]; // [rsp+40h] [rbp-10h] BYREF
  char v31; // [rsp+48h] [rbp-8h]

  v6 = (DXGSESSIONDATA *)((char *)this + 18720);
  v10 = -1073741808;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGSESSIONDATA *)((char *)this + 18720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  if ( v11 )
  {
    DXGVAILGUESTOBJECT::AddReference((DXGVAILGUESTOBJECT *)v11);
    if ( v29 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    if ( ExAcquireRundownProtection(v11 + 7) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11[8].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)&v11[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        v21 = *(__int64 **)(v11[10].Count + 8);
        if ( v21 )
        {
          v22 = *v21;
          if ( a6 )
            v23 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v22 + 32))(
                    v21,
                    a2,
                    a3,
                    a4,
                    a5);
          else
            v23 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v22 + 40))(v21, a2, a3);
          v10 = v23;
        }
        else
        {
          v24 = WdLogNewEntry5_WdError(0LL, v19, v20);
          *(_QWORD *)(v24 + 24) = 2675LL;
          WdLogEvent5_WdError(v24);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v11[8].Count + 64));
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
      }
      else
      {
        v10 = -2147483611;
        v25 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v25 + 24) = 2LL;
        *(_QWORD *)(v25 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v25);
      }
      ExReleaseRundownProtection(v11 + 7);
    }
    else
    {
      v10 = -2147483611;
      v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v26 + 24) = 1LL;
      *(_QWORD *)(v26 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v26);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, v6, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    DXGVAILGUESTOBJECT::ReleaseReference((DXGVAILGUESTOBJECT *)v11);
    if ( v31 )
    {
      v12 = (DXGAUTOMUTEX *)v30;
      goto LABEL_21;
    }
  }
  else if ( v29 )
  {
    v12 = (DXGAUTOMUTEX *)v28;
LABEL_21:
    DXGAUTOMUTEX::Release(v12);
  }
  return v10;
}
