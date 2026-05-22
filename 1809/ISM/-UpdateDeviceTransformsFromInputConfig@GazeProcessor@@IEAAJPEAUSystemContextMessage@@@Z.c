/*
 * XREFs of ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x1800EC5D4
 * Callers:
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800EC360 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z @ 0x1800EC3E0 (-OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x18009D31C (-GetTransfromToOutputSpace@InputConfiguration@@YA-AUfloat3x2@Numerics@Foundation@Windows@@UINPUT.c)
 */

__int64 __fastcall GazeProcessor::UpdateDeviceTransformsFromInputConfig(
        GazeProcessor *this,
        struct SystemContextMessage *a2)
{
  __int64 v2; // r15
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // r8
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int64 v18; // rcx
  __int64 v19; // r11
  _QWORD *v20; // rdx
  unsigned int v21; // r9d
  __int128 v22; // xmm0
  __int64 TransfromToOutputSpace; // rax
  __int64 v24; // xmm1_8
  __int64 result; // rax
  __int128 v26; // [rsp+28h] [rbp-49h] BYREF
  _OWORD v27[5]; // [rsp+38h] [rbp-39h] BYREF
  int v28; // [rsp+88h] [rbp+17h]
  _BYTE v29[32]; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 7);
  *((_BYTE *)this + 72) = 0;
  v5 = *((_QWORD *)a2 + 2);
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 1008);
  if ( *((_DWORD *)a2 + 2) )
  {
    v8 = *((unsigned int *)a2 + 2);
    v9 = (_QWORD *)(v5 + 16);
    do
    {
      v10 = 0;
      if ( *((_DWORD *)v9 - 1) )
      {
        while ( 1 )
        {
          v11 = *v9 + 84LL * v10;
          if ( *(_DWORD *)(v11 + 44) == *(_DWORD *)(v2 + 1016) && *(_QWORD *)(v11 + 36) == v7 )
            break;
          if ( ++v10 >= *((_DWORD *)v9 - 1) )
            goto LABEL_9;
        }
        v6 = *v9 + 84LL * v10;
      }
LABEL_9:
      v9 += 3;
      --v8;
    }
    while ( v8 );
    if ( v6 )
    {
      v12 = *(_OWORD *)v6;
      v13 = *(_DWORD *)(v6 + 80);
      v14 = *(_OWORD *)(v6 + 16);
      v15 = *(_OWORD *)(v6 + 32);
      v16 = *(_OWORD *)(v6 + 48);
      v17 = *(_OWORD *)(v6 + 64);
LABEL_24:
      *(_OWORD *)((char *)this + 100) = v12;
      *((_BYTE *)this + 72) = 1;
      *(_OWORD *)((char *)this + 116) = v14;
      v28 = v13;
      *(_OWORD *)((char *)this + 132) = v15;
      *(_OWORD *)((char *)this + 148) = v16;
      *(_OWORD *)((char *)this + 164) = v17;
      *((_DWORD *)this + 45) = v13;
      v22 = *(_OWORD *)(v2 + 988);
      v27[0] = v12;
      v26 = v22;
      v27[1] = v14;
      v27[2] = v15;
      v27[3] = v16;
      v27[4] = v17;
      TransfromToOutputSpace = InputConfiguration::GetTransfromToOutputSpace((__int64)v29, v27, (unsigned int *)&v26);
      *(_OWORD *)((char *)this + 76) = *(_OWORD *)TransfromToOutputSpace;
      v24 = *(_QWORD *)(TransfromToOutputSpace + 16);
      result = 0LL;
      *(_QWORD *)((char *)this + 92) = v24;
      return result;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  v18 = 0LL;
  if ( *((_DWORD *)a2 + 2) )
  {
    v19 = *((unsigned int *)a2 + 2);
    v20 = (_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    do
    {
      v21 = 0;
      if ( *((_DWORD *)v20 - 1) )
      {
        while ( (*(_DWORD *)(v20 - 1) & 1) == 0 || (*(_BYTE *)(*v20 + 84LL * v21 + 16) & 1) == 0 || v18 )
        {
          if ( ++v21 >= *((_DWORD *)v20 - 1) )
            goto LABEL_21;
        }
        v18 = *v20 + 84LL * v21;
      }
LABEL_21:
      v20 += 3;
      --v19;
    }
    while ( v19 );
    if ( v18 )
    {
      v12 = *(_OWORD *)v18;
      v13 = *(_DWORD *)(v18 + 80);
      v14 = *(_OWORD *)(v18 + 16);
      v15 = *(_OWORD *)(v18 + 32);
      v16 = *(_OWORD *)(v18 + 48);
      v17 = *(_OWORD *)(v18 + 64);
      goto LABEL_24;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
