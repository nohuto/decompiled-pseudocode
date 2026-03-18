/*
 * XREFs of ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x18018DE80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x180158FB8 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 */

__int64 __fastcall CCaptureController::ProcessSetTransform(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETTRANSFORM *a3)
{
  unsigned int v5; // edx
  __int64 Resource; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  struct CResource ***v9; // rdi
  struct CResource ***v10; // rbp
  int v11; // eax
  __int64 v12; // rcx

  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  v7 = 0;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x95u)) != 0 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( Resource != v8 )
    {
      *((_QWORD *)this + 14) = Resource;
      if ( Resource )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (struct CResource ***)*((_QWORD *)this + 7);
      v10 = (struct CResource ***)*((_QWORD *)this + 8);
      while ( v9 != v10 )
      {
        v11 = CCaptureRenderTarget::SetTransform(*v9, *((struct CTransform3D **)this + 14));
        v7 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x6Au);
          return v7;
        }
        ++v9;
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003303421, 0x5Fu);
  }
  return v7;
}
