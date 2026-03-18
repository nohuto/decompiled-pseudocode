/*
 * XREFs of ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B510
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18002AC80 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStereoContextLayer::RestoreState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0LL;
  *((_BYTE *)a2 + 6349) = 0;
  *((_DWORD *)a2 + 1579) = 0;
  *((_DWORD *)a2 + 1578) = 0;
  *((_DWORD *)a2 + 1577) = 0;
  *((_DWORD *)a2 + 1576) = 0;
  if ( *((_BYTE *)this + 13) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 44))(
           *((_QWORD *)a2 + 44),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v12);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x58u, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, 0LL);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5Au, 0LL);
      }
      else
      {
        v9 = CDrawingContext::PopRenderTargetInternal(a2, 0);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Fu, 0LL);
        else
          *((_BYTE *)this + 13) = 0;
      }
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v2;
}
