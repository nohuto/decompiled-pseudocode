/*
 * XREFs of ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008B1F4
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceManager::ProcessRestoreContent(
        CCompositionSurfaceManager *this,
        struct IRenderTargetDisplay *a2)
{
  int v2; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    v6 = v5[1];
    v2 = 0;
    v11 = 0LL;
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 120);
    if ( v7 )
    {
      if ( (**v7)(v7, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v11) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, struct IRenderTargetDisplay *))(*(_QWORD *)v11 + 56LL))(v11, a2);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCFu);
      }
      LODWORD(v7) = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v2, 0xBDu);
      return (unsigned int)v2;
    }
  }
  return (unsigned int)v2;
}
