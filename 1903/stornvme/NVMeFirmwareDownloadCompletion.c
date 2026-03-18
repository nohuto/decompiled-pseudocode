/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C0011020
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 SrbExtension; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // r8d

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v8 = *(_QWORD *)(v6 + 64);
  else
    v8 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v8 + 20) = *(_BYTE *)(v6 + 3) != 1;
  result = *(unsigned int *)(a1 + 52);
  if ( (result & 8) != 0 || (v10 = *(_QWORD *)(SrbExtension + 4216)) == 0 )
  {
    *(_DWORD *)(SrbExtension + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v10);
    *(_QWORD *)(SrbExtension + 4216) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v11 = *(unsigned __int16 *)(a3 + 14) >> 1;
    v12 = 6;
    if ( (unsigned __int8)v11 != 6 )
    {
      if ( (unsigned __int8)v11 == 7 )
      {
        *(_DWORD *)(v8 + 20) = 7;
        return StorPortExtendedFunction(87LL, a1, 0LL);
      }
      v12 = 16;
    }
    *(_DWORD *)(v8 + 20) = v12;
    return StorPortExtendedFunction(87LL, a1, 0LL);
  }
  return result;
}
