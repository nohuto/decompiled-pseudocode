/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18003B6A0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18003ECC0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180051D68 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D05BC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800D1800 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800D1990 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800DB734 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800DB808 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800DBD74 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18010B2C0 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18010C4AC (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180040CD8 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_s @ 0x180044954 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180044DE4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 */

__int64 ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, _WORD *a2, ...)
{
  __int64 v4; // rbx
  char *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  rsize_t v8; // rdx

  if ( !a2 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  v5 = (char *)*a1;
  v6 = ((__int64)a2 - *a1) >> 1;
  v7 = *(unsigned int *)(*a1 - 16);
  if ( (int)((*(_DWORD *)(*a1 - 12) - v4) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v4);
    v5 = (char *)*a1;
  }
  v8 = 2LL * (int)v4;
  if ( v6 <= v7 )
    memmove_s(v5, v8, &v5[2 * v6], v8);
  else
    memcpy_s(v5, v8, a2, v8);
  return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
}
