/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x180027950
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_180340274 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180340274);
    if ( dword_180340274 == -1 )
    {
      qword_18033AD5C = 8LL;
      dword_18033AD54 = 1;
      dword_18033AD58 = 1;
      xmmword_18033AD34 = xmmword_1802D5250;
      word_18033AD64 = 0;
      xmmword_18033AD44 = xmmword_1802D5250;
      qword_18033AD88 = 1LL;
      xmmword_18033AD68 = xmmword_1802D5250;
      qword_18033AD90 = 7LL;
      xmmword_18033AD78 = xmmword_1802D5250;
      word_18033AD98 = 0;
      xmmword_18033AD9C = xmmword_1802D5250;
      dword_18033ADBC = 1;
      xmmword_18033ADAC = xmmword_1802D5250;
      dword_18033ADC0 = 1;
      xmmword_18033ADD0 = xmmword_1802D5250;
      qword_18033ADC4 = 7LL;
      xmmword_18033ADE0 = xmmword_1802D5250;
      word_18033ADCC = 0;
      Init_thread_footer(&dword_180340274);
    }
  }
  return (char *)&unk_18033AD20 + 52 * v1;
}
