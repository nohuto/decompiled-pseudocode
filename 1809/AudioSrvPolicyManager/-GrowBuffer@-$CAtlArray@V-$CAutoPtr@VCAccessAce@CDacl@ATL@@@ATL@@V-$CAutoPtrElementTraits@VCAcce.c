/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000FEC4
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000C790 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180033690 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800338EC (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003807B (memmove_0.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  void *v9; // rsi
  void *v11; // rcx
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v7 = calloc(a2, 8uLL);
    v9 = v7;
    if ( v7 )
    {
      v11 = *(void **)a1;
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !v11 )
        {
          *(_DWORD *)_o__errno(0LL, v8) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove_0(v7, *(const void **)a1, v12);
        v11 = *(void **)a1;
      }
      free(v11);
      *(_QWORD *)a1 = v9;
      goto LABEL_18;
    }
    return 0;
  }
  if ( v5 > a2 )
    a2 = v5;
  v6 = calloc(a2, 8uLL);
  *(_QWORD *)a1 = v6;
  if ( !v6 )
    return 0;
LABEL_18:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
