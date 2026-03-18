/*
 * XREFs of ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0292154
 * Callers:
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0265AB8 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0266988 (-RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURF.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C029102C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0291DC8 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(
        struct _EX_RUNDOWN_REF **this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  __int64 v4; // rdi
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
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-10h] BYREF
  char v20; // [rsp+28h] [rbp-8h]

  LODWORD(v4) = DXGSESSIONDATA::VailEnsureConnection((DXGSESSIONDATA *)this);
  if ( (int)v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 2340), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v7 = this[2346];
    if ( v7 )
      ++*((_DWORD *)this + 4690);
    if ( v20 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
      v7 = this[2346];
    }
    if ( v7 && ExAcquireRundownProtection(v7 + 7) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(this[2346][8].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)&this[2346][2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
        v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
                (DXG_GUEST_COMPOSITIONOBJECTCHANNEL *)this[2346][10].Count,
                a2);
        v4 = v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
          *(_QWORD *)(v15 + 24) = v4;
          WdLogEvent5_WdWarning(v15);
        }
        if ( v20 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(this[2346][8].Count + 64));
      }
      else
      {
        LODWORD(v4) = -2147483611;
        v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v16 + 24) = 2LL;
        *(_QWORD *)(v16 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v16);
      }
      ExReleaseRundownProtection(this[2346] + 7);
    }
    else
    {
      LODWORD(v4) = -2147483611;
      v17 = WdLogNewEntry5_WdWarning(v7, v5, v6);
      *(_QWORD *)(v17 + 24) = 1LL;
      *(_QWORD *)(v17 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v17);
    }
    if ( this[2346] )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 2340), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      DXGSESSIONDATA::ReleaseVailGuestReference((DXGSESSIONDATA *)this);
      if ( v20 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
  }
  return (unsigned int)v4;
}
