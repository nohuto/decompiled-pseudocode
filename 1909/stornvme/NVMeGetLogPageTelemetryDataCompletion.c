/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x1C0011600
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0005640 (memmove.c)
 */

char __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rbx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  char v11; // cl
  char v12; // cl
  char v13; // cl
  char v14; // cl
  size_t v15; // r8
  const void *v16; // rdx
  void *v17; // rcx

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_DWORD *)(SrbExtension + 4232);
  v7 = *(_DWORD *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    v8 = *(_QWORD *)(v4 + 64);
    v9 = 60LL;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 24);
    v9 = 16LL;
  }
  if ( *(_BYTE *)(v4 + 3) != 1 )
    goto LABEL_16;
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a1 + 16) )
      NVMeZeroMemory((void *)v8, *(_DWORD *)(a2 + v9));
    v10 = *(_QWORD *)(SrbExtension + 4200);
    if ( v7 >= 0x200 )
    {
      v11 = *(_BYTE *)(v10 + 5);
      if ( *(_BYTE *)(a1 + 16) )
      {
        *(_BYTE *)(v10 + 5) = *(_BYTE *)(v10 + 7);
        *(_BYTE *)(v10 + 7) = v11;
        v12 = *(_BYTE *)(v10 + 8);
        *(_BYTE *)(v10 + 8) = *(_BYTE *)(v10 + 9);
        *(_BYTE *)(v10 + 9) = v12;
        v13 = *(_BYTE *)(v10 + 10);
        *(_BYTE *)(v10 + 10) = *(_BYTE *)(v10 + 11);
        *(_BYTE *)(v10 + 11) = v13;
        v14 = *(_BYTE *)(v10 + 12);
        LOBYTE(v6) = *(_BYTE *)(v10 + 13);
        *(_BYTE *)(v10 + 12) = v6;
        *(_BYTE *)(v10 + 13) = v14;
      }
      else
      {
        *(_BYTE *)(v8 + 7) = v11;
        *(_BYTE *)(v8 + 6) = *(_BYTE *)(v10 + 6);
        *(_BYTE *)(v8 + 5) = *(_BYTE *)(v10 + 7);
        *(_BYTE *)(v8 + 9) = *(_BYTE *)(v10 + 8);
        *(_BYTE *)(v8 + 8) = *(_BYTE *)(v10 + 9);
        *(_BYTE *)(v8 + 11) = *(_BYTE *)(v10 + 10);
        *(_BYTE *)(v8 + 10) = *(_BYTE *)(v10 + 11);
        *(_BYTE *)(v8 + 13) = *(_BYTE *)(v10 + 12);
        *(_BYTE *)(v8 + 12) = *(_BYTE *)(v10 + 13);
        *(_BYTE *)(v8 + 382) = *(_BYTE *)(v10 + 382);
        LOBYTE(v6) = *(_BYTE *)(v10 + 383);
        *(_BYTE *)(v8 + 383) = v6;
        *(_OWORD *)(v8 + 384) = *(_OWORD *)(v10 + 384);
        *(_OWORD *)(v8 + 400) = *(_OWORD *)(v10 + 400);
        *(_OWORD *)(v8 + 416) = *(_OWORD *)(v10 + 416);
        *(_OWORD *)(v8 + 432) = *(_OWORD *)(v10 + 432);
        *(_OWORD *)(v8 + 448) = *(_OWORD *)(v10 + 448);
        *(_OWORD *)(v8 + 464) = *(_OWORD *)(v10 + 464);
        *(_OWORD *)(v8 + 480) = *(_OWORD *)(v10 + 480);
        *(_OWORD *)(v8 + 496) = *(_OWORD *)(v10 + 496);
      }
      if ( v7 <= 0x200 || *(_DWORD *)(a2 + v9) < v7 || *(_BYTE *)(a1 + 16) )
        goto LABEL_22;
      v15 = v7 - 512;
      v16 = (const void *)(v10 + 512);
      v17 = (void *)(v8 + 512);
      goto LABEL_21;
    }
LABEL_16:
    LOBYTE(v6) = StorPortExtendedFunction(87LL, a1, 0LL);
    goto LABEL_23;
  }
  if ( v7 < 0x200 || *(_DWORD *)(a2 + v9) < v7 || *(_BYTE *)(a1 + 16) )
    goto LABEL_22;
  v16 = *(const void **)(SrbExtension + 4200);
  v15 = *(unsigned int *)(SrbExtension + 4240);
  v17 = (void *)v8;
LABEL_21:
  LOBYTE(v6) = (unsigned __int8)memmove(v17, v16, v15);
LABEL_22:
  *(_DWORD *)(a2 + v9) = v7;
LABEL_23:
  if ( !*(_BYTE *)(a1 + 16) )
    LOBYTE(v6) = NVMeFreeDmaBuffer(a1, *(unsigned int *)(SrbExtension + 4240), *(_QWORD *)(SrbExtension + 4200));
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  return v6;
}
