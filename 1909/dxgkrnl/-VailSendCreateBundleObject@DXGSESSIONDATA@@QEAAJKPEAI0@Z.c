/*
 * XREFs of ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C0292BC0
 * Callers:
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C0263EB8 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C0264B98 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C029143C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateBundleObject(
        DXGSESSIONDATA *this,
        unsigned int a2,
        char *a3,
        struct _EX_RUNDOWN_REF *a4)
{
  struct DXGFASTMUTEX *v4; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _EX_RUNDOWN_REF *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int BundleObject; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-10h] BYREF
  char v25; // [rsp+28h] [rbp-8h]

  v4 = (DXGSESSIONDATA *)((char *)this + 18720);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (DXGSESSIONDATA *)((char *)this + 18720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  if ( v11 )
    ++*((_DWORD *)this + 4690);
  if ( v25 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  }
  if ( v11 && ExAcquireRundownProtection(v11 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2346) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      BundleObject = DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
                       *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2346) + 72LL),
                       a2,
                       a3,
                       a4);
      v19 = BundleObject;
      if ( BundleObject < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = v19;
        WdLogEvent5_WdWarning(v20);
      }
      if ( v25 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v19) = -2147483611;
      v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v21 + 24) = 2LL;
      *(_QWORD *)(v21 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v21);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
  }
  else
  {
    LODWORD(v19) = -2147483611;
    v22 = WdLogNewEntry5_WdWarning(v11, v9, v10);
    *(_QWORD *)(v22 + 24) = 1LL;
    *(_QWORD *)(v22 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v22);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, v4, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  }
  return (unsigned int)v19;
}
