/*
 * XREFs of NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C00027A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 */

unsigned __int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rdx
  __int64 SrbExtension; // rbp
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 result; // rax
  int v11; // r9d
  char v12; // r8
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rcx

  SrbExtension = GetSrbExtension(a2);
  v7 = 16;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v8 = *(_QWORD *)(v5 + 64);
    v9 = 60LL;
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 24);
    v9 = 16LL;
  }
  result = GetSrbScsiData(a2, 0, 0, 0, 0LL);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      v12 = *(_BYTE *)result;
      v13 = (unsigned int)(v11 + 6);
      v14 = 24;
      if ( *(_BYTE *)result != 26 )
        v13 = (unsigned int)(v11 + 10);
      *(_BYTE *)(v13 + v8) ^= (*(_BYTE *)(v13 + v8) ^ (4 * *a3)) & 4;
      v15 = 24LL;
      result = *(unsigned int *)(a2 + v9);
      if ( v12 != 26 )
        v15 = 28LL;
      if ( result < v15 )
      {
        result = 20LL;
        if ( v12 != 26 )
          v7 = 20;
        *(_DWORD *)(a2 + v9) = v7;
      }
      else
      {
        if ( v12 != 26 )
          v14 = 28;
        *(_DWORD *)(a2 + v9) = v14;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
