/*
 * XREFs of ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x1800172B0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180035C10 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180258860 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 */

const struct CLightsMask *__fastcall CD3DBatchExecutionContext::GetLightsMask(CD3DBatchExecutionContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    return (const struct CLightsMask *)(v1 + 16);
  if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                     + (unsigned int)tls_index)
                                                                   + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
    {
      `CLightsMask::NoLights'::`2'::noLights = -1;
      Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    }
  }
  return (const struct CLightsMask *)&`CLightsMask::NoLights'::`2'::noLights;
}
