/*
 * XREFs of ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C025BA9C
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C025BE28 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C0042730 (-EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C025AD4C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailEnsureConnection(DXGSESSIONDATA *this)
{
  struct DXGFASTMUTEX *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _EX_RUNDOWN_REF *v5; // rcx
  BOOLEAN v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-10h] BYREF
  char v19; // [rsp+28h] [rbp-8h]

  v1 = (DXGSESSIONDATA *)((char *)this + 18720);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGSESSIONDATA *)((char *)this + 18720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  if ( v5 )
    ++*((_DWORD *)this + 4690);
  if ( v19 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  }
  if ( v5 && ExAcquireRundownProtection(v5 + 7) )
  {
    v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
    v7 = *((_QWORD *)this + 2346);
    if ( v6 )
    {
      LODWORD(v8) = 0;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v7 + 64) + 64LL));
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(v7 + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 2354LL;
      WdLogEvent5_WdWarning(v12);
      v13 = DXGVAILGUESTOBJECT::EnableVmBusChannel(*((struct _KTHREAD ***)this + 2346));
      v8 = v13;
      if ( v13 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v15 + 24) = v8;
        WdLogEvent5_WdError(v15);
        LODWORD(v8) = -1071775727;
      }
      if ( v19 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
  }
  else
  {
    LODWORD(v8) = -2147483611;
    v16 = WdLogNewEntry5_WdWarning(v5, v3, v4);
    *(_QWORD *)(v16 + 24) = 1LL;
    *(_QWORD *)(v16 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v16);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, v1, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
  return (unsigned int)v8;
}
