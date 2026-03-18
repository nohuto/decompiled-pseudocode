/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     GetSrbScsiData @ 0x1C0002D68 (GetSrbScsiData.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 */

__int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  _BYTE *v5; // r12
  __int64 SrbScsiData; // rax
  __int64 v7; // rbx
  unsigned int *v8; // rsi
  __int64 v9; // rbp
  _BYTE *v10; // r15
  char *v11; // rbx
  __int64 v12; // rax
  char v13; // al
  char v14; // cl
  char v15; // al
  __int64 result; // rax
  unsigned int v17; // ecx
  char v18; // al
  char v19; // cl
  __int64 v20; // [rsp+60h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE **)(SrbExtension + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0, 0, 0, 0LL);
  v7 = *(_QWORD *)(a1 + 1536);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v20 = v7;
  v10 = (_BYTE *)SrbScsiData;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v11 = *(char **)(a2 + 64);
      v12 = 60LL;
    }
    else
    {
      v11 = *(char **)(a2 + 24);
      v12 = 16LL;
    }
    v8 = (unsigned int *)(a2 + v12);
    NVMeZeroMemory(v11, *(unsigned int *)(a2 + v12));
    if ( *v10 == 26 )
    {
      v9 = 4LL;
      v13 = 23;
      if ( *v8 < 0x18 )
        v13 = 15;
      v14 = v11[2] | 0x10;
      *v11 = v13;
      v11[2] = v14;
      v11[1] = 0;
      if ( (*v5 & 8) != 0 )
        v11[2] = v14 | 0x80;
    }
    else
    {
      v17 = *v8;
      v9 = 8LL;
      if ( *v8 < 0x1C )
        v18 = 18;
      else
        v18 = 26;
      v11[1] = v18;
      *v11 = (unsigned __int16)(v17 < 0x1C ? 18 : 26) >> 8;
      v19 = v11[3] | 0x10;
      v11[2] = 0;
      v11[3] = v19;
      if ( (*v5 & 8) != 0 )
        v11[3] = v19 | 0x80;
    }
    v15 = v11[v9] & 0x40;
    v11[v9 + 1] = 10;
    v11[v9 + 2] &= 0xFAu;
    v11[v9] = v15 | 8;
    v7 = v20;
  }
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             *(_QWORD *)(SrbExtension + 4200),
             *(_QWORD *)(SrbExtension + 4208));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v7 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      memset((void *)(SrbExtension + 4096), 0, 0x40uLL);
      *(_BYTE *)(SrbExtension + 4096) = 10;
      *(_BYTE *)(SrbExtension + 4136) = 6;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetFeaturesCurrentCacheValueCompletion;
      return ProcessCommand(a1, a2);
    }
    result = (unsigned int)(v9 + 20);
    if ( *v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      result = (unsigned int)(v9 + 12);
    *v8 = result;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
