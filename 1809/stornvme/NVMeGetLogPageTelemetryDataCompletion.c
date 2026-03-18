/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x1C00125A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 */

__int64 __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdx
  const void *v10; // rdx
  size_t v11; // r8
  void *v12; // rcx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_DWORD *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    v7 = *(_QWORD *)(v4 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(v4 + 24);
    v8 = 16LL;
  }
  if ( *(_BYTE *)(v4 + 3) != 1 )
    goto LABEL_15;
  if ( *(_DWORD *)(SrbExtension + 4232) )
  {
    if ( v6 < 0x200 || *(_DWORD *)(v4 + v8) < v6 )
      goto LABEL_14;
    v10 = *(const void **)(SrbExtension + 4200);
    v11 = *(unsigned int *)(SrbExtension + 4240);
    v12 = (void *)v7;
    goto LABEL_13;
  }
  NVMeZeroMemory((void *)v7, *(_DWORD *)(v4 + v8));
  if ( v6 < 0x200 )
  {
LABEL_15:
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(SrbExtension + 4200);
  *(_BYTE *)(v7 + 7) = *(_BYTE *)(v9 + 5);
  *(_BYTE *)(v7 + 6) = *(_BYTE *)(v9 + 6);
  *(_BYTE *)(v7 + 5) = *(_BYTE *)(v9 + 7);
  *(_BYTE *)(v7 + 9) = *(_BYTE *)(v9 + 8);
  *(_BYTE *)(v7 + 8) = *(_BYTE *)(v9 + 9);
  *(_BYTE *)(v7 + 11) = *(_BYTE *)(v9 + 10);
  *(_BYTE *)(v7 + 10) = *(_BYTE *)(v9 + 11);
  *(_BYTE *)(v7 + 13) = *(_BYTE *)(v9 + 12);
  *(_BYTE *)(v7 + 12) = *(_BYTE *)(v9 + 13);
  *(_BYTE *)(v7 + 382) = *(_BYTE *)(v9 + 382);
  *(_BYTE *)(v7 + 383) = *(_BYTE *)(v9 + 383);
  *(_OWORD *)(v7 + 384) = *(_OWORD *)(v9 + 384);
  *(_OWORD *)(v7 + 400) = *(_OWORD *)(v9 + 400);
  *(_OWORD *)(v7 + 416) = *(_OWORD *)(v9 + 416);
  *(_OWORD *)(v7 + 432) = *(_OWORD *)(v9 + 432);
  *(_OWORD *)(v7 + 448) = *(_OWORD *)(v9 + 448);
  *(_OWORD *)(v7 + 464) = *(_OWORD *)(v9 + 464);
  *(_OWORD *)(v7 + 480) = *(_OWORD *)(v9 + 480);
  *(_OWORD *)(v7 + 496) = *(_OWORD *)(v9 + 496);
  if ( v6 <= 0x200 || *(_DWORD *)(a2 + v8) < v6 )
    goto LABEL_14;
  v10 = (const void *)(v9 + 512);
  v11 = v6 - 512;
  v12 = (void *)(v7 + 512);
LABEL_13:
  memmove(v12, v10, v11);
LABEL_14:
  *(_DWORD *)(a2 + v8) = v6;
LABEL_16:
  result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(SrbExtension + 4240), *(_QWORD *)(SrbExtension + 4200));
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  return result;
}
