/*
 * XREFs of FirmwareGetInfo @ 0x1C0002370
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00022AC (IoctlFirmwareProcess.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned int *v7; // rsi
  __int64 SrbExtension; // rbx
  void *v9; // r9
  int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int8 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v18; // [rsp+100h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = *(_BYTE *)(a2 + 2) == 40;
  v18 = 0LL;
  if ( v2 )
    v5 = *(_DWORD **)(a2 + 64);
  else
    v5 = *(_DWORD **)(a2 + 24);
  v6 = v5[12];
  if ( v6 < 0x10 )
  {
    v14 = 21;
    v5[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v15 = 0LL;
    v16 = 0LL;
    v12 = -1056964602;
LABEL_15:
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      0LL,
      1,
      L"Firmware GetInfo",
      1LL,
      2,
      0,
      a2,
      L"SrbStatus",
      v14,
      L"BufferLength",
      (unsigned int)v5[12],
      L"Version",
      v16,
      L"Size",
      v15);
    return v12;
  }
  v7 = (_DWORD *)((char *)v5 + (unsigned int)v5[11]);
  if ( v6 < 0x18 && *v7 == 2 && v7[1] >= 0x18 )
  {
    v5[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v12 = -1056964602;
LABEL_14:
    v15 = v7[1];
    v16 = *v7;
    v14 = *(_BYTE *)(a2 + 3);
    goto LABEL_15;
  }
  NVMeAllocateDmaBuffer(a1, 512LL, &v17, &v18);
  if ( !v17 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v12 = -1056964605;
    v5[5] = 1;
    goto LABEL_14;
  }
  SrbExtension = GetSrbExtension(a2);
  memset(v9, 0, 0x200uLL);
  *(_BYTE *)(SrbExtension + 4253) |= 3u;
  SrbAssignQueueId(a1, a2);
  LOBYTE(v10) = 3;
  BuildGetLogPageCommand(a1, SrbExtension, v10, 512, v18, -1, 0LL);
  *(_BYTE *)(SrbExtension + 4253) |= 4u;
  *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageFirmwareSlotCompletion;
  *(_QWORD *)(SrbExtension + 4200) = v17;
  v11 = v18;
  *(_DWORD *)(SrbExtension + 4240) = 512;
  v12 = 0;
  *(_QWORD *)(SrbExtension + 4208) = v11;
  return v12;
}
