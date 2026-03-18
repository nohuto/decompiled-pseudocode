/*
 * XREFs of FirmwareActivate @ 0x1C000E0E4
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000149C (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 SrbExtension; // rdi
  __int64 v4; // r10
  __int64 v5; // r11
  _DWORD *v6; // r9
  char *v7; // rbp
  char v8; // cl
  int v9; // ebx
  int v10; // ecx
  unsigned int v11; // ecx

  v2 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_DWORD **)(v4 + 64);
  else
    v6 = *(_DWORD **)(v4 + 24);
  v7 = (char *)v6 + (unsigned int)v6[11];
  if ( v6[12] >= 0xCu
    && (v8 = v7[8]) != 0
    && (unsigned __int8)v8 <= (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(v5 + 1536) + 260LL) >> 1) & 7) )
  {
    v9 = v6[10];
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v5, v4);
    v10 = *(_DWORD *)(SrbExtension + 4136) ^ (*(_DWORD *)(SrbExtension + 4136) ^ (unsigned __int8)v7[8]) & 7;
    *(_BYTE *)(SrbExtension + 4096) = 16;
    if ( v9 >= 0 )
      v11 = v10 & 0xFFFFFFE7 | 8;
    else
      v11 = v10 & 0xFFFFFFE7 | 0x10;
    *(_DWORD *)(SrbExtension + 4136) = v11;
    *(_QWORD *)(SrbExtension + 4224) = NVMeFirmwareActivateCompletion;
  }
  else
  {
    v6[5] = 3;
    *(_BYTE *)(v4 + 3) = 21;
    StorPortExtendedFunction(87LL, v5, 0LL);
    return (unsigned int)-1056964602;
  }
  return v2;
}
