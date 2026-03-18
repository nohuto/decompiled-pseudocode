/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000AF04
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000B450 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000B6BC (NVMeControllerReset.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C0008768 (AdminQueueInitialize.c)
 *     ControllerEnable @ 0x1C0008A34 (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C0009134 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C0014250 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016B28 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  const wchar_t *v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  const wchar_t *v11; // [rsp+20h] [rbp-18h]

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    v4 = L"Admin Queue Initialize failed";
LABEL_4:
    v11 = v4;
    StorPortNotification(4108LL, a1, 0LL);
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 36LL) = (*(_WORD *)(a1 + 268) - 1) & 0xFFF | (((*(_WORD *)(a1 + 268) - 1) & 0xFFF) << 16);
  _InterlockedOr(v10, 0);
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(_QWORD *)(a1 + 424);
  *(_DWORD *)(v6 + 48) = v7;
  _InterlockedOr(v10, 0);
  *(_DWORD *)(v6 + 52) = HIDWORD(v7);
  _InterlockedOr(v10, 0);
  v8 = *(_QWORD *)(a1 + 144);
  v9 = *(_QWORD *)(a1 + 288);
  *(_DWORD *)(v8 + 40) = v9;
  _InterlockedOr(v10, 0);
  *(_DWORD *)(v8 + 44) = HIDWORD(v9);
  _InterlockedOr(v10, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) = 4587520;
  _InterlockedOr(v10, 0);
  StorPortStallExecution(5000LL);
  if ( !ControllerEnable(a1) )
  {
    *(_DWORD *)(a1 + 24) = 8;
    v4 = L"Controller enable failed";
    goto LABEL_4;
  }
  if ( a2 || (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) &= ~0x20u;
    NVMeControllerIdentify(a1);
    if ( a2 )
      NVMeNameSpaceIdentify(a1);
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 200) = 65537;
  }
  else if ( !GetProcessorInformation(a1) )
  {
    *(_DWORD *)(a1 + 24) = 10;
    v4 = L"Get processor information failed";
    goto LABEL_4;
  }
  return 1;
}
