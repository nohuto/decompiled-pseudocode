/*
 * XREFs of GetInputs @ 0x1800D30B4
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800D3010 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  int v4; // edi
  int v5; // edi
  void *v6; // rax

  if ( dword_18033D350 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18033D350);
    if ( dword_18033D350 == -1 )
    {
      dword_180337E12 = 33620480;
      word_180337E0E = 513;
      Init_thread_footer(&dword_18033D350);
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
        v6 = &unk_180337E0C;
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
  v6 = &unk_180337E10;
LABEL_8:
  a1[1] = v6;
  return a1;
}
