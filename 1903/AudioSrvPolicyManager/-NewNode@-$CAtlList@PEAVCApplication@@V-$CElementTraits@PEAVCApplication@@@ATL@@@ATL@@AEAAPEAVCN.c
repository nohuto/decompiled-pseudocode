/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000CF78
 * Callers:
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000BB8C (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800129E0 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025788 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v14; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = *(unsigned int *)(a1 + 40);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x18 )
      {
        v10 = 0LL;
        goto LABEL_8;
      }
      v8 *= 24LL;
    }
    v9 = malloc(v8 + 8);
    v10 = v9;
    if ( !v9 )
      goto LABEL_13;
    *v9 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v9;
LABEL_8:
    if ( v10 )
    {
      v11 = *(_DWORD *)(a1 + 40);
      for ( i = &v10[2 * (v11 - 1) + 1 + (unsigned int)(v11 - 1)]; --v11 >= 0; i -= 3 )
      {
        *i = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 32) = i;
      }
      goto LABEL_12;
    }
LABEL_13:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_12:
  result = *(__int64 **)(a1 + 32);
  v14 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v14;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
