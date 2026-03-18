/*
 * XREFs of ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801B2C08
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CSpatialVisualContent@@QEAA@PEAVCComposition@@_K@Z @ 0x1801DAD70 (--0CSpatialVisualContent@@QEAA@PEAVCComposition@@_K@Z.c)
 */

__int64 __fastcall CSpatialVisual::ProcessSetCommonID(
        CSpatialVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPATIALVISUAL_SETCOMMONID *a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CSpatialVisualContent *v9; // rax
  __int64 v10; // rcx
  struct CContent *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  struct CResourceTable *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v3 = *((_QWORD *)this + 32);
  v5 = *((unsigned int *)a3 + 2);
  if ( !v3 )
    goto LABEL_5;
  if ( *(_QWORD *)(v3 + 64) == v5 )
    return 0;
  v6 = CVisual::SetContent((struct CResource **)this, 0LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
LABEL_5:
    if ( v5 )
    {
      v9 = (CSpatialVisualContent *)WPF::ProcessHeapImpl::AllocClear(0x68uLL);
      if ( v9 )
        v11 = CSpatialVisualContent::CSpatialVisualContent(v9, *((struct CComposition **)this + 2), v5);
      else
        v11 = 0LL;
      v15 = v11;
      if ( v11 )
      {
        (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)v11 + 8LL))(v11);
        v12 = CVisual::SetContent((struct CResource **)this, v11);
        v8 = v12;
        if ( v12 >= 0 )
        {
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v15);
          return 0;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3Du);
      }
      else
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x3Bu);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v15);
      return v8;
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x33u);
  return v8;
}
