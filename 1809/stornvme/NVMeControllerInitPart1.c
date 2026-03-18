/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000DABC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000DE90 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C000B4D8 (AdminQueueInitialize.c)
 *     ControllerEnable @ 0x1C000B7A4 (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C000BE24 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C0014A14 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016438 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 36LL) = (*(_WORD *)(a1 + 260) - 1) & 0xFFF | (((*(_WORD *)(a1 + 260) - 1) & 0xFFF) << 16);
  _InterlockedOr(v12, 0);
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 416);
  *(_DWORD *)(v5 + 48) = v6;
  _InterlockedOr(v12, 0);
  *(_DWORD *)(v5 + 52) = HIDWORD(v6);
  _InterlockedOr(v12, 0);
  v7 = *(_QWORD *)(a1 + 136);
  v8 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(v7 + 40) = v8;
  _InterlockedOr(v12, 0);
  *(_DWORD *)(v7 + 44) = HIDWORD(v8);
  _InterlockedOr(v12, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) = 4587520;
  _InterlockedOr(v12, 0);
  StorPortStallExecution(5000LL);
  if ( !ControllerEnable(a1) )
  {
    *(_DWORD *)(a1 + 24) = 8;
    return 0;
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
    *(_DWORD *)(a1 + 192) = 65537;
  }
  else if ( !GetProcessorInformation(a1, v9, v10, v11) )
  {
    *(_DWORD *)(a1 + 24) = 10;
    return 0;
  }
  return 1;
}
