/*
 * XREFs of ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C025CC38
 * Callers:
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C022F580 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0231A60 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1C02308E0 (-SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C025AD4C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendDestroyBundleObject(DXGSESSIONDATA *this, int a2)
{
  struct DXGFASTMUTEX *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-10h] BYREF
  char v21; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18720);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGSESSIONDATA *)((char *)this + 18720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  if ( v7 )
    ++*((_DWORD *)this + 4690);
  if ( v21 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  }
  if ( v7 && ExAcquireRundownProtection(v7 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2346) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      v11 = DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(
              *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2346) + 72LL),
              a2);
      v15 = v11;
      if ( v11 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = v15;
        WdLogEvent5_WdWarning(v16);
      }
      if ( v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v15) = -2147483611;
      v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v17 + 24) = 2LL;
      *(_QWORD *)(v17 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v17);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
  }
  else
  {
    LODWORD(v15) = -2147483611;
    v18 = WdLogNewEntry5_WdWarning(v7, v5, v6);
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_QWORD *)(v18 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v18);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v21 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  }
  return (unsigned int)v15;
}
