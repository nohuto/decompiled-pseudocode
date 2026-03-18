/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1C0004040 (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0004074 (GetFirmwareGranularity.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rsi
  __int64 v5; // rbp
  _BYTE *v6; // r12
  _DWORD *v7; // rdi
  char *v8; // rbx
  bool v9; // r15
  int v10; // r11d
  char v11; // al
  int FirmwareGranularity; // eax
  int ControllerMaxTransferSize; // eax
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r9
  __int64 v16; // r8
  unsigned __int8 v17; // cl
  char v18; // al
  __int64 result; // rax
  char v20; // al
  unsigned __int8 v21; // r8
  __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int8 v24; // cl
  char v25; // al
  int v26; // r8d

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1536);
  v6 = *(_BYTE **)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    v9 = *(_DWORD *)v8 == 2 && *((_DWORD *)v8 + 1) >= 0x18u;
    NVMeZeroMemory((char *)v7 + (unsigned int)v7[11], (unsigned int)v7[12]);
    v10 = 1;
    if ( v9 )
    {
      *(_DWORD *)v8 = 2;
      *((_DWORD *)v8 + 1) = 24;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v11 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v11 = (*v6 >> 4) & 7;
      v8[11] = v11;
      v8[12] = 1;
      FirmwareGranularity = GetFirmwareGranularity(a1);
      if ( FirmwareGranularity )
      {
        *((_DWORD *)v8 + 4) = FirmwareGranularity;
        GetControllerMaxTransferSize(a1);
        ControllerMaxTransferSize = GetControllerMaxTransferSize(a1);
        if ( v26 )
          ControllerMaxTransferSize -= v26;
      }
      else
      {
        *((_DWORD *)v8 + 4) = 4;
        ControllerMaxTransferSize = GetControllerMaxTransferSize(a1);
      }
      *((_DWORD *)v8 + 5) = ControllerMaxTransferSize;
      v14 = 0;
      v15 = *(_BYTE *)(v5 + 260);
      if ( (v15 & 0xE) != 0 )
      {
        while ( 1 )
        {
          v16 = v14;
          if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v14 + 2) )
            break;
          v17 = v10 + v14;
          v8[24 * v14 + 24] = v10 + v14;
          if ( v14 )
            v18 = 0;
          else
            v18 = v10 & *(_BYTE *)(v5 + 260);
          v8[24 * v14 + 25] = v18;
          v14 += v10;
          *(_QWORD *)&v8[24 * v16 + 32] = *(_QWORD *)&v6[8 * v16 + 8];
          v15 = *(_BYTE *)(v5 + 260);
          if ( v17 >= (unsigned __int8)((v15 >> 1) & 7) )
            goto LABEL_17;
        }
LABEL_32:
        v7[12] = 16 * (v10 + ((v15 >> 1) & 7));
        v7[5] = 5;
        goto LABEL_18;
      }
    }
    else
    {
      *(_DWORD *)v8 = 1;
      *((_DWORD *)v8 + 1) = 16;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v20 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v20 = (*v6 >> 4) & 7;
      v21 = 0;
      v8[11] = v20;
      v15 = *(_BYTE *)(v5 + 260);
      if ( (v15 & 0xE) != 0 )
      {
        do
        {
          v22 = v21;
          v23 = 16LL * v21;
          if ( (unsigned int)v7[12] < (unsigned __int64)(v23 + 32) )
            goto LABEL_32;
          v24 = v21 + 1;
          v8[v23 + 16] = v21 + 1;
          if ( v21 )
            v25 = 0;
          else
            v25 = *(_BYTE *)(v5 + 260) & 1;
          v8[v23 + 17] = v25;
          ++v21;
          *(_QWORD *)&v8[v23 + 24] = *(_QWORD *)&v6[8 * v22 + 8];
          v15 = *(_BYTE *)(v5 + 260);
        }
        while ( v24 < (unsigned __int8)((v15 >> 1) & 7) );
      }
    }
LABEL_17:
    v7[5] = 0;
  }
  else
  {
    v7[5] = 1;
  }
LABEL_18:
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             *(_QWORD *)(SrbExtension + 4200),
             *(_QWORD *)(SrbExtension + 4208));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
