/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140011F80
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140011EA8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005EC04 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001203C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A624 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14001CB5A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140035550 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memmove_s @ 0x140035A94 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(void **a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  char *v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14

  v3 = (int)a3;
  if ( !a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (char *)*a1;
  v7 = (a2 - (_BYTE *)*a1) >> 1;
  v8 = *((unsigned int *)*a1 - 4);
  if ( (((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) & 0x80000000) != 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
    v6 = (char *)*a1;
  }
  if ( v7 <= v8 )
  {
    memmove_s(v6, 2 * v3, &v6[2 * v7], 2 * v3);
  }
  else if ( 2 * v3 )
  {
    if ( v6 )
    {
      memcpy_0(v6, a2, 2 * v3);
    }
    else
    {
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
  }
  return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
}
