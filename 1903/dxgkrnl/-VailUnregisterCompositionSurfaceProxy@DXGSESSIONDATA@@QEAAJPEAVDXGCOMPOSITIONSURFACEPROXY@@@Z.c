/*
 * XREFs of ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C029397C
 * Callers:
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02652B0 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0266A0C (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C029102C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(
        DXGSESSIONDATA *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  struct DXGFASTMUTEX *v2; // r14
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _EX_RUNDOWN_REF *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-10h] BYREF
  char v18; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18720);
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGSESSIONDATA *)((char *)this + 18720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  if ( v8 )
    ++*((_DWORD *)this + 4690);
  if ( v18 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2346);
  }
  if ( v8 && ExAcquireRundownProtection(v8 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2346) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v12 = *((unsigned int *)a2 + 4);
      v13 = *(_QWORD *)(*((_QWORD *)this + 2346) + 80LL);
      *((_DWORD *)a2 + 4) = 0;
      if ( (_DWORD)v12 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v13 + 8) + 64LL))(
          *(_QWORD *)(v13 + 8),
          v12,
          18LL);
        DXGCOMPOSITIONSURFACEPROXY::Release(a2);
      }
      if ( v18 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2346) + 64LL) + 64LL));
    }
    else
    {
      v5 = -2147483611;
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v14 + 24) = 2LL;
      *(_QWORD *)(v14 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v14);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
  }
  else
  {
    v5 = -2147483611;
    v15 = WdLogNewEntry5_WdWarning(v8, v6, v7);
    *(_QWORD *)(v15 + 24) = 1LL;
    *(_QWORD *)(v15 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v15);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v18 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  }
  return v5;
}
