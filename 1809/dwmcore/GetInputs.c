/*
 * XREFs of GetInputs @ 0x1800754F0
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x180075454 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  int v4; // edi
  int v5; // edi
  void *v6; // rax

  if ( dword_18030BDA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BDA0);
    if ( dword_18030BDA0 == -1 )
    {
      dword_1803068A6 = 33620480;
      word_1803068A2 = 513;
      Init_thread_footer(&dword_18030BDA0);
    }
  }
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        *a1 = 2LL;
        v6 = &unk_1803068A0;
        goto LABEL_8;
      }
      if ( v5 != 1 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
        return a1;
      }
      *a1 = 3LL;
    }
    else
    {
      *a1 = 2LL;
    }
  }
  else
  {
    *a1 = 1LL;
  }
  v6 = &unk_1803068A4;
LABEL_8:
  a1[1] = v6;
  return a1;
}
