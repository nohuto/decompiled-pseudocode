/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180048CC8
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180048B54 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180048D5C (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180048FC0 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18004BB9C (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18004BBFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IBitmapSource *v8; // rax
  void *v10; // [rsp+28h] [rbp-10h]

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              248LL);
  if ( v4 )
    v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v6 = CWICBitmapWrapper::HrInit(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1Au, v10);
    }
    else
    {
      v8 = (CMILCOMBase *)((char *)v5 + 16);
      v5 = 0LL;
      *a2 = v8;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x17u, v10);
  }
  return v7;
}
