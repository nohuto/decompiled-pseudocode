/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C025C25C
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C025AD4C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int v10; // esi
  struct DXGFASTMUTEX *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _EX_RUNDOWN_REF *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v25[8]; // [rsp+30h] [rbp-28h] BYREF
  char v26; // [rsp+38h] [rbp-20h]

  v10 = -1073741808;
  if ( *((_QWORD *)this + 2346) )
  {
    v11 = (DXGSESSIONDATA *)((char *)this + 18720);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGSESSIONDATA *)((char *)this + 18720), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v14 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
    if ( v14 )
      ++*((_DWORD *)this + 4690);
    if ( v26 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
      v14 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
    }
    if ( v14 && ExAcquireRundownProtection(v14 + 7) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, v11, 0);
        v18 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)this + 2346) + 80LL) + 8LL);
        if ( v18 )
        {
          v19 = *v18;
          if ( a6 )
            v20 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v19 + 32))(
                    v18,
                    a2,
                    a3,
                    a4,
                    a5);
          else
            v20 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v19 + 40))(v18, a2, a3);
          v10 = v20;
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v21 + 24) = 2664LL;
          WdLogEvent5_WdError(v21);
        }
        if ( v26 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
      }
      else
      {
        v10 = -2147483611;
        v22 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v22 + 24) = 2LL;
        *(_QWORD *)(v22 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v22);
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
    }
    else
    {
      v10 = -2147483611;
      v23 = WdLogNewEntry5_WdWarning(v14, v12, v13);
      *(_QWORD *)(v23 + 24) = 1LL;
      *(_QWORD *)(v23 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v23);
    }
    if ( *((_QWORD *)this + 2346) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, v11, 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
      DXGSESSIONDATA::ReleaseVailGuestReference(this);
      if ( v26 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    }
  }
  return v10;
}
