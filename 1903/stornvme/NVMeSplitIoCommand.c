/*
 * XREFs of NVMeSplitIoCommand @ 0x1C0011E50
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSplitIoCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // r9
  __int64 v4; // r11
  unsigned __int8 v5; // cl
  __int64 v6; // r10
  unsigned int v7; // ebx
  unsigned __int16 v8; // ax
  unsigned int v9; // r8d
  int v10; // r8d
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(SrbExtension + 4253) & 2) != 0 )
  {
    if ( *(_BYTE *)(v2 + 2) == 40 )
      v5 = *(_BYTE *)(*(unsigned int *)(v2 + 52) + v2 + 10);
    else
      v5 = *(_BYTE *)(v2 + 7);
    v6 = *(_QWORD *)(v4 + 8LL * v5 + 1648);
    v14 = *(_QWORD *)(SrbExtension + 4136);
    v7 = *(_DWORD *)(v6 + 52);
    v8 = *(_WORD *)(v6 + 92);
    if ( v8 )
      v9 = v8;
    else
      v9 = *(_DWORD *)(v4 + 48) / v7;
    ++*(_DWORD *)(v6 + 36);
    v10 = v9 - v14 % v9;
    v11 = (*(_DWORD *)(SrbExtension + 4120) & 0xFFF) + 4095LL;
    *(_WORD *)(SrbExtension + 4144) = v10 - 1;
    v12 = ((unsigned __int64)(v7 * v10) + v11) >> 12;
    if ( (_DWORD)v12 == 1 )
    {
      *(_QWORD *)(SrbExtension + 4128) = 0LL;
    }
    else if ( (_DWORD)v12 == 2 )
    {
      *(_QWORD *)(SrbExtension + 4128) = *(_QWORD *)SrbExtension;
    }
    *(_QWORD *)(SrbExtension + 4224) = NVMeSplitIoCommandCompletion;
  }
  return 0LL;
}
