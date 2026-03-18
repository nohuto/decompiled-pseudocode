/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800D99D8
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( dword_18030BDA4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BDA4);
    if ( dword_18030BDA4 == -1 )
    {
      qword_1803068EC = 8LL;
      dword_1803068E4 = 1;
      dword_1803068E8 = 1;
      xmmword_1803068C4 = xmmword_1802B0360;
      word_1803068F4 = 0;
      xmmword_1803068D4 = xmmword_1802B0360;
      qword_180306918 = 1LL;
      xmmword_1803068F8 = xmmword_1802B0360;
      qword_180306920 = 7LL;
      xmmword_180306908 = xmmword_1802B0360;
      word_180306928 = 0;
      xmmword_18030692C = xmmword_1802B0360;
      dword_18030694C = 1;
      xmmword_18030693C = xmmword_1802B0360;
      dword_180306950 = 1;
      xmmword_180306960 = xmmword_1802B0360;
      qword_180306954 = 7LL;
      xmmword_180306970 = xmmword_1802B0360;
      word_18030695C = 0;
      Init_thread_footer(&dword_18030BDA4);
    }
  }
  return (char *)&unk_1803068B0 + 52 * v1;
}
