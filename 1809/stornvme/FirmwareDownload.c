/*
 * XREFs of FirmwareDownload @ 0x1C0010068
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00022AC (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0005450 (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0005484 (GetFirmwareGranularity.c)
 *     FillClippedSGL @ 0x1C000FD7C (FillClippedSGL.c)
 */

__int64 __fastcall FirmwareDownload(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 SrbExtension; // r14
  _DWORD *v7; // rsi
  __int64 v8; // r9
  char *v9; // rbp
  char *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // r10
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v17; // r10
  unsigned int FirmwareGranularity; // eax
  int v19; // r9d
  unsigned __int64 v20; // r10
  unsigned int v21; // r12d
  int v22; // eax
  unsigned __int64 v23; // rcx
  int v24; // eax

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_DWORD **)(v5 + 64);
  else
    v7 = *(_DWORD **)(v5 + 24);
  v8 = (unsigned int)v7[11];
  v9 = (char *)v7 + v8;
  if ( *(_DWORD *)((char *)v7 + v8) == 2 && *((_DWORD *)v9 + 1) >= 0x20u )
    v10 = (char *)v7 + v8;
  else
    v10 = 0LL;
  v11 = (unsigned int)v7[12];
  if ( v10 )
  {
    if ( (unsigned int)v11 < 0x20 )
      goto LABEL_13;
    v12 = *((_QWORD *)v10 + 2);
    v13 = v12 + 32;
  }
  else
  {
    if ( (unsigned int)v11 < 0x18 )
      goto LABEL_13;
    v12 = *((_QWORD *)v9 + 2);
    v13 = v12 + 24;
  }
  if ( v11 < v13 || !v12 || (v9[8] & 3) != 0 || (*((_QWORD *)v9 + 2) & 3) != 0 )
    goto LABEL_13;
  ControllerMaxTransferSize = GetControllerMaxTransferSize(a1);
  if ( v17 > ControllerMaxTransferSize )
  {
    v7[5] = 4;
    goto LABEL_14;
  }
  FirmwareGranularity = GetFirmwareGranularity((__int64)a1);
  if ( FirmwareGranularity )
  {
    if ( v20 % FirmwareGranularity )
    {
LABEL_13:
      v7[5] = 3;
LABEL_14:
      v3 = -1056964602;
      v14 = 21;
LABEL_15:
      *(_BYTE *)(a2 + 3) = v14;
      StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
      return v3;
    }
  }
  if ( (a1[13] & 8) == 0 )
  {
    v21 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
    StorPortExtendedFunction(0LL, a1, 24 * v21 + 16, 1701672526LL);
    v7[5] = 1;
    v14 = 4;
    v3 = -1056964605;
    goto LABEL_15;
  }
  v22 = v19 + 24;
  if ( v10 )
    v22 = v19 + 32;
  *(_DWORD *)(SrbExtension + 4216) = v22;
  *(_BYTE *)(SrbExtension + 4253) |= 3u;
  SrbAssignQueueId((__int64)a1, a2);
  v23 = *((_QWORD *)v9 + 1);
  v24 = (*((_QWORD *)v9 + 2) >> 2) - 1;
  *(_BYTE *)(SrbExtension + 4096) = 17;
  *(_DWORD *)(SrbExtension + 4136) = v24;
  *(_DWORD *)(SrbExtension + 4140) = v23 >> 2;
  *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareDownloadCompletion;
  return v3;
}
