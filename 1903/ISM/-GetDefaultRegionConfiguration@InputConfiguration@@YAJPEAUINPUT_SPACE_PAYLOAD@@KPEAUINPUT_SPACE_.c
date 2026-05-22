/*
 * XREFs of ?GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x1800D2614
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x180125F8C (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetDefaultRegionConfiguration(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        __int64 a3,
        struct INPUT_SPACE_REGION *a4)
{
  __int64 v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r11
  unsigned int v7; // edx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( !(_DWORD)a2 )
    goto LABEL_13;
  v5 = (_QWORD *)((char *)this + 16);
  v6 = (unsigned int)a2;
  do
  {
    v7 = 0;
    if ( *((_DWORD *)v5 - 1) )
    {
      while ( (*(_DWORD *)(v5 - 1) & 1) == 0 || (*(_BYTE *)(*v5 + 84LL * v7 + 16) & 1) == 0 || v4 )
      {
        if ( ++v7 >= *((_DWORD *)v5 - 1) )
          goto LABEL_10;
      }
      v4 = *v5 + 84LL * v7;
    }
LABEL_10:
    v5 += 3;
    --v6;
  }
  while ( v6 );
  if ( v4 )
  {
    v8 = *(_DWORD *)(v4 + 80);
    v9 = *(_OWORD *)(v4 + 16);
    *(_OWORD *)a3 = *(_OWORD *)v4;
    v10 = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(a3 + 16) = v9;
    v11 = *(_OWORD *)(v4 + 48);
    *(_OWORD *)(a3 + 32) = v10;
    v12 = *(_OWORD *)(v4 + 64);
    *(_OWORD *)(a3 + 48) = v11;
    *(_OWORD *)(a3 + 64) = v12;
    *(_DWORD *)(a3 + 80) = v8;
    return 0LL;
  }
  else
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
