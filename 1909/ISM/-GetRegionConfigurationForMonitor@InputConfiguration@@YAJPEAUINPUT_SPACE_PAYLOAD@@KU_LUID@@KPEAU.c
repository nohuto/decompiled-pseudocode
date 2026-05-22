/*
 * XREFs of ?GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x1800D26F8
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180125F8C (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetRegionConfigurationForMonitor(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        __int64 a3,
        struct _LUID a4,
        __int64 a5)
{
  __int64 v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  if ( !(_DWORD)a2 )
    goto LABEL_12;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = (unsigned int)a2;
  do
  {
    v8 = 0;
    if ( *((_DWORD *)v6 - 1) )
    {
      while ( 1 )
      {
        v9 = *v6 + 84LL * v8;
        if ( *(_DWORD *)(v9 + 44) == a4.LowPart && *(_QWORD *)(v9 + 36) == a3 )
          break;
        if ( ++v8 >= *((_DWORD *)v6 - 1) )
          goto LABEL_9;
      }
      v5 = *v6 + 84LL * v8;
    }
LABEL_9:
    v6 += 3;
    --v7;
  }
  while ( v7 );
  if ( v5 )
  {
    v10 = *(_DWORD *)(v5 + 80);
    v11 = *(_OWORD *)(v5 + 16);
    *(_OWORD *)a5 = *(_OWORD *)v5;
    v12 = *(_OWORD *)(v5 + 32);
    *(_OWORD *)(a5 + 16) = v11;
    v13 = *(_OWORD *)(v5 + 48);
    *(_OWORD *)(a5 + 32) = v12;
    v14 = *(_OWORD *)(v5 + 64);
    *(_OWORD *)(a5 + 48) = v13;
    *(_OWORD *)(a5 + 64) = v14;
    *(_DWORD *)(a5 + 80) = v10;
    return 0LL;
  }
  else
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
