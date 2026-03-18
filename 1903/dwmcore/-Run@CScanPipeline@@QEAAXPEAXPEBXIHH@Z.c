/*
 * XREFs of ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180224C4C
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180223FF0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802243A4 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z @ 0x180224CC0 (-UpdatePipelinePointers@CScanPipeline@@IEAAXPEAXPEBX@Z.c)
 */

void __fastcall CScanPipeline::Run(CScanPipeline *this, void *a2, const void *a3, int a4, int a5, int a6)
{
  char *v6; // rsi
  int v8; // edi
  void (__fastcall **i)(char *, __int64); // rbx

  if ( a4 )
  {
    v6 = (char *)this + 520;
    *((_DWORD *)this + 130) = a5;
    *((_DWORD *)this + 131) = a6;
    *((_DWORD *)this + 132) = a4;
    CScanPipeline::UpdatePipelinePointers(this, a2, a3);
    v8 = *((_DWORD *)this + 8);
    for ( i = (void (__fastcall **)(char *, __int64))*((_QWORD *)this + 1); v8; --v8 )
    {
      (*i)(v6, (__int64)(i + 1));
      i += 6;
    }
  }
}
