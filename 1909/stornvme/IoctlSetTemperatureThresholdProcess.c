/*
 * XREFs of IoctlSetTemperatureThresholdProcess @ 0x1C000FE1C
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 */

__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rsi
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  __int16 v9; // bp
  __int16 v10; // bp
  char v11; // cl
  int v12; // edx
  int v13; // edx
  unsigned int v14; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(v2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = 16LL;
  }
  if ( *(_DWORD *)(v2 + v6) < 0x2Cu )
  {
    *(_BYTE *)(v2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(v5 + 36) & 1) == 0
    || (v7 = *(_WORD *)(v5 + 38), v7 > 8u)
    || (v8 = 0, !v7) && !*(_BYTE *)(v5 + 42) && !*(_WORD *)(*(_QWORD *)(v4 + 1536) + 266LL)
    || (v9 = *(_WORD *)(v5 + 40), v9 < -273) )
  {
    *(_BYTE *)(v2 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v10 = v9 + 273;
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
  SrbAssignQueueId(v4, v2);
  v11 = *(_BYTE *)(v5 + 42);
  v12 = (*(_DWORD *)(SrbExtension + 4140) ^ (*(unsigned __int8 *)(v5 + 38) << 16)) & 0xF0000;
  *(_BYTE *)(SrbExtension + 4096) = 9;
  v13 = *(_DWORD *)(SrbExtension + 4140) ^ v12;
  *(_BYTE *)(SrbExtension + 4136) = 4;
  if ( v11 )
    v14 = v13 & 0xFFCFFFFF;
  else
    v14 = v13 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(SrbExtension + 4140) = v14;
  *(_WORD *)(SrbExtension + 4140) = v10;
  *(_BYTE *)(SrbExtension + 4253) &= ~4u;
  return v8;
}
