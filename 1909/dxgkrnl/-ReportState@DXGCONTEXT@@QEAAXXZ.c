/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C020DFC8
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02304D0 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pppp @ 0x1C003C2A0 (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C003C340 (McTemplateK0pqqqqqqqqppp.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026D530 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this, __int64 a2, const GUID *a3)
{
  __int128 v4; // xmm0
  __int64 v5; // r9
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *i; // rbx
  DXGDEVICESYNCOBJECT *v10; // rcx
  DXGDEVICESYNCOBJECT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8

  if ( bTracingEnabled )
  {
    v4 = *(_OWORD *)((char *)this + 200);
    v5 = *((_QWORD *)this + 2);
    v6 = *(_OWORD *)((char *)this + 216);
    v7 = *((unsigned int *)this + 6);
    a2 = *((unsigned int *)this + 101);
    a3 = (const GUID *)*((unsigned int *)this + 100);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqqqqqqqppp(
        v7,
        &EventReportContext,
        a3,
        v5,
        *((_DWORD *)this + 100),
        *((_DWORD *)this + 101),
        (_DWORD)v4,
        DWORD1(v4),
        DWORD2(v4),
        HIDWORD(v4),
        (_DWORD)v6,
        0,
        this,
        v7,
        0LL);
  }
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 456LL))();
  if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
  {
    v8 = *((_QWORD *)this + 37);
    if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp(v8, a2, a3, this, v8, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    if ( *((_QWORD *)this + 38) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 288LL))();
    for ( i = (__int64 *)*((_QWORD *)this + 52); i != (__int64 *)((char *)this + 416) && i; i = (__int64 *)*i )
    {
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(*((unsigned int *)i + 6), &EventReportHwQueue, a3, i[2], *((unsigned int *)i + 6), i);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16) + 16LL) + 520LL) + 8LL)
                                      + 288LL))(i[5]);
    }
    v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v10 )
      DXGDEVICESYNCOBJECT::ReportState(v10);
    v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v11 )
      DXGDEVICESYNCOBJECT::ReportState(v11);
  }
  else if ( *((_QWORD *)this + 34) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 280LL))();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp(v13, v12, v14, this, *((_QWORD *)this + 34), *((_QWORD *)this + 23), *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 449) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 320));
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                       + 8LL)
                                           + 712LL))(
      *((_QWORD *)this + 2),
      (char *)this + 344);
    *((_QWORD *)this + 41) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 320, 0LL);
    KeLeaveCriticalRegion();
  }
}
