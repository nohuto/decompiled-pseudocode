/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x1C0011550
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     TemperatureFromKelvinToCelsius @ 0x1C00138AC (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // r8
  char v10; // al
  __int64 v11; // r8
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(SrbExtension + 4200);
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    v6 = *(unsigned __int8 *)(v5 + 2);
    LOWORD(v6) = *(_WORD *)(v5 + 1);
    v7 = *(_QWORD *)(SrbExtension + 4232);
    if ( v7 == 13 )
    {
      v8 = TemperatureFromKelvinToCelsius(v6);
      *(_BYTE *)(v9 + 9) = v8;
    }
    else if ( v7 == 47 )
    {
      v10 = TemperatureFromKelvinToCelsius(v6);
      *(_BYTE *)(v11 + 10) = v10;
    }
  }
  NVMeFreeDmaBuffer(v4, *(unsigned int *)(SrbExtension + 4240), *(_QWORD *)(SrbExtension + 4200));
  result = 0LL;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  return result;
}
