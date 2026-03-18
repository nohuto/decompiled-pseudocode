/*
 * XREFs of ScsiModeSenseRequest @ 0x1C0002878
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  bool v3; // zf
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v10; // eax
  __int64 SrbExtension; // rbx
  void *v12; // r9
  int v13; // r8d
  __int64 v14; // rax
  __int64 result; // rax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v3 = *(_BYTE *)(a2 + 2) == 40;
  v18 = 0LL;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = 16LL;
  }
  v8 = 4LL;
  v9 = a3[2];
  if ( *a3 != 26 )
    v8 = 8LL;
  if ( v9 >= 0x40u )
  {
    LOBYTE(v8) = 6;
LABEL_17:
    LOBYTE(v7) = 36;
    NVMeSetSenseData(a2, v8, a3, v7);
    return 3238002694LL;
  }
  if ( !v6 )
    goto LABEL_19;
  v10 = *(_DWORD *)(a2 + v7);
  if ( v10 < (unsigned int)v8 )
  {
    v16 = -1056964604;
LABEL_20:
    LOBYTE(v7) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, a3, v7);
    return v16;
  }
  if ( v9 != 63 && v9 != 8 )
  {
LABEL_19:
    v16 = -1056964602;
    goto LABEL_20;
  }
  if ( v10 - (unsigned int)v8 < 0xC )
  {
    LOBYTE(v8) = 18;
    goto LABEL_17;
  }
  NVMeAllocateDmaBuffer(a1, 512LL, &v17, &v18);
  if ( v17 )
  {
    SrbExtension = GetSrbExtension(a2);
    memset(v12, 0, 0x200uLL);
    *(_BYTE *)(SrbExtension + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v13) = 2;
    BuildGetLogPageCommand(a1, SrbExtension, v13, 512, v18, -1, 0LL);
    *(_BYTE *)(SrbExtension + 4253) |= 4u;
    *(_QWORD *)(SrbExtension + 4224) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    *(_QWORD *)(SrbExtension + 4200) = v17;
    v14 = v18;
    *(_QWORD *)(SrbExtension + 4232) = 0LL;
    *(_QWORD *)(SrbExtension + 4208) = v14;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
