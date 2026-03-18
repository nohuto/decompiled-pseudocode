/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x18002FCA0
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180030490 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_18033D354 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033D354);
    if ( dword_18033D354 == -1 )
    {
      qword_180337E5C = 8LL;
      dword_180337E54 = 1;
      dword_180337E58 = 1;
      xmmword_180337E34 = xmmword_1802D33C0;
      word_180337E64 = 0;
      xmmword_180337E44 = xmmword_1802D33C0;
      qword_180337E88 = 1LL;
      xmmword_180337E68 = xmmword_1802D33C0;
      qword_180337E90 = 7LL;
      xmmword_180337E78 = xmmword_1802D33C0;
      word_180337E98 = 0;
      xmmword_180337E9C = xmmword_1802D33C0;
      dword_180337EBC = 1;
      xmmword_180337EAC = xmmword_1802D33C0;
      dword_180337EC0 = 1;
      xmmword_180337ED0 = xmmword_1802D33C0;
      qword_180337EC4 = 7LL;
      xmmword_180337EE0 = xmmword_1802D33C0;
      word_180337ECC = 0;
      Init_thread_footer(&dword_18033D354);
    }
  }
  return (char *)&unk_180337E20 + 52 * v1;
}
