/*
 * XREFs of ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180125F8C
 * Callers:
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801259C0 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180125CE0 (-OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x1800D23D4 (-GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_.c)
 *     ?GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x1800D26F8 (-GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAU.c)
 *     ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x1800D27C8 (-GetTransfromToOutputSpace@InputConfiguration@@YA-AUfloat3x2@Numerics@Foundation@Windows@@UINPUT.c)
 */

__int64 __fastcall GazeProcessor::UpdateDeviceTransformsFromInputConfig(GazeProcessor *this, InputConfiguration **a2)
{
  __int64 v2; // rsi
  struct INPUT_SPACE_REGION *v5; // r9
  int DefaultRegionConfiguration; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int128 v9; // xmm5
  __int128 v10; // xmm4
  __int128 v11; // xmm3
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  __int64 TransfromToOutputSpace; // rax
  unsigned int v17[4]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v18; // [rsp+48h] [rbp-29h]
  __int128 v19; // [rsp+58h] [rbp-19h]
  __int128 v20; // [rsp+68h] [rbp-9h]
  __int128 v21; // [rsp+78h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+17h]
  __int128 v23; // [rsp+98h] [rbp+27h] BYREF
  _BYTE v24[32]; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 8);
  *((_BYTE *)this + 96) = 0;
  if ( (int)InputConfiguration::GetRegionConfigurationForMonitor(
              a2[2],
              (struct INPUT_SPACE_PAYLOAD *)*((unsigned int *)a2 + 2),
              *(_QWORD *)(v2 + 1592),
              (struct _LUID)*(unsigned int *)(v2 + 1600),
              (__int64)v17) >= 0
    || (DefaultRegionConfiguration = InputConfiguration::GetDefaultRegionConfiguration(
                                       a2[2],
                                       (struct INPUT_SPACE_PAYLOAD *)*((unsigned int *)a2 + 2),
                                       (__int64)v17,
                                       v5),
        v7 = DefaultRegionConfiguration,
        DefaultRegionConfiguration >= 0) )
  {
    v9 = *(_OWORD *)v17;
    v10 = v18;
    v11 = v19;
    v12 = v20;
    v13 = v21;
    v14 = v22;
    *(_OWORD *)((char *)this + 124) = *(_OWORD *)v17;
    *((_BYTE *)this + 96) = 1;
    *(_OWORD *)((char *)this + 140) = v10;
    v22 = v14;
    *(_OWORD *)((char *)this + 156) = v11;
    *(_OWORD *)((char *)this + 172) = v12;
    *(_OWORD *)((char *)this + 188) = v13;
    *((_DWORD *)this + 51) = v14;
    v15 = *(_OWORD *)(v2 + 1572);
    *(_OWORD *)v17 = v9;
    v23 = v15;
    v18 = v10;
    v19 = v11;
    v20 = v12;
    v21 = v13;
    TransfromToOutputSpace = InputConfiguration::GetTransfromToOutputSpace((__int64)v24, (__int64)v17, (int *)&v23);
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)TransfromToOutputSpace;
    *(_QWORD *)&v13 = *(_QWORD *)(TransfromToOutputSpace + 16);
    result = 0LL;
    *(_QWORD *)((char *)this + 116) = v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)DefaultRegionConfiguration);
    return v7;
  }
  return result;
}
