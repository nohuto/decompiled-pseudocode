/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14003CF5C
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x14003D320 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  char *v9; // rcx
  __int64 result; // rax

  v5 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, (int)qword_140087070 + 1, 4LL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v6 = (char *)_o__recalloc(Block, (int)qword_140087070 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = (int)qword_140087070;
  Block = v6;
  v8 = (char *)CVpoContext::s_mapVpoContext + 4 * (int)qword_140087070;
  if ( v8 )
  {
    *v8 = *a2;
    v6 = (char *)Block;
  }
  v9 = &v6[8 * v7];
  if ( v9 )
    *(_QWORD *)v9 = *a3;
  result = 1LL;
  LODWORD(qword_140087070) = qword_140087070 + 1;
  return result;
}
