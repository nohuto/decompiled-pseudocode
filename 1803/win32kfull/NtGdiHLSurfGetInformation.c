/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C00782C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x1C00784C4 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00C6598 (GreDwmGetSurfaceData.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GreDwmGetRedirectionStyle @ 0x1C023C580 (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(__int64 a1, int a2, void *a3, ULONG64 a4)
{
  NTSTATUS v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // r12d
  size_t v9; // r15
  unsigned int v10; // edi
  int v11; // r14d
  ULONG64 v12; // rax
  int v13; // esi
  int v14; // esi
  NTSTATUS SurfaceData; // eax
  _DWORD *v16; // rax
  __int64 HDEV; // rax
  ULONG v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  _BYTE Src[56]; // [rsp+58h] [rbp-60h] BYREF

  v6 = -1073741811;
  if ( a2 >= 11 )
    goto LABEL_27;
  v7 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v7 = (unsigned int *)MmUserProbeAddress;
  v8 = *v7;
  v9 = 56LL;
  memset(Src, 0, sizeof(Src));
  switch ( a2 )
  {
    case 3:
      v10 = 0;
      if ( !a3 )
        goto LABEL_28;
      v9 = 48LL;
      if ( v8 >= 0x30 )
      {
        v11 = 48;
        goto LABEL_11;
      }
      goto LABEL_35;
    case 4:
      goto LABEL_6;
    case 6:
      v10 = 0;
      if ( !a3 )
        goto LABEL_28;
      v11 = 32;
      if ( v8 >= 0x20 )
      {
        v9 = 32LL;
        goto LABEL_11;
      }
LABEL_35:
      v6 = -1073741306;
      goto LABEL_28;
  }
  if ( a2 != 9 )
  {
LABEL_27:
    v6 = -1073741821;
    v10 = 0;
    goto LABEL_28;
  }
LABEL_6:
  v10 = 0;
  if ( !a3 )
  {
LABEL_28:
    v19 = RtlNtStatusToDosError(v6);
    EngSetLastError(v19);
    return v10;
  }
  if ( v8 < 0x38 )
    goto LABEL_35;
  v11 = 56;
  v12 = (ULONG64)a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v12;
  *(_OWORD *)&Src[16] = *(_OWORD *)(v12 + 16);
  *(_OWORD *)&Src[32] = *(_OWORD *)(v12 + 32);
  *(_QWORD *)&Src[48] = *(_QWORD *)(v12 + 48);
LABEL_11:
  v13 = a2 - 3;
  if ( !v13 )
  {
    HDEV = UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, a1, Src);
    goto LABEL_14;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, *(_QWORD *)Src, &Src[8], &Src[16], 0LL, 0LL, 0LL, &Src[48], &Src[52]);
LABEL_14:
    v6 = SurfaceData;
    goto LABEL_15;
  }
  v20 = v14 - 2;
  if ( !v20 )
  {
    UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v21, a1, Src);
    goto LABEL_14;
  }
  if ( v20 == 3 )
  {
    SurfaceData = GreSfmGetDirtyRgn(
                    a1,
                    *(_QWORD *)Src,
                    &Src[8],
                    &Src[16],
                    &Src[24],
                    &Src[32],
                    &Src[40],
                    &Src[48],
                    &Src[52]);
    goto LABEL_14;
  }
LABEL_15:
  if ( v6 < 0 )
    goto LABEL_28;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  memmove(a3, Src, v9);
  v16 = (_DWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = v11;
  return 1;
}
