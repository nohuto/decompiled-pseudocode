/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C00301B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x1C0030500 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C008AFD0 (GreDwmGetSurfaceData.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026C760 (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(__int64 a1, int a2, void *a3, ULONG64 a4)
{
  NTSTATUS v7; // ebx
  size_t v8; // r15
  unsigned int *v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // edi
  int v12; // r14d
  ULONG64 v13; // rax
  int v14; // esi
  int v15; // esi
  NTSTATUS SurfaceData; // eax
  _DWORD *v17; // rax
  __int64 HDEV; // rax
  ULONG v20; // eax
  int v21; // esi
  __int64 v22; // rcx
  _BYTE Src[56]; // [rsp+58h] [rbp-60h] BYREF

  v7 = -1073741811;
  v8 = 56LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 >= 11 )
    goto LABEL_27;
  v9 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  memset(Src, 0, sizeof(Src));
  switch ( a2 )
  {
    case 3:
      v11 = 0;
      if ( !a3 )
        goto LABEL_28;
      v8 = 48LL;
      if ( v10 >= 0x30 )
      {
        v12 = 48;
        goto LABEL_11;
      }
      goto LABEL_35;
    case 4:
      goto LABEL_6;
    case 6:
      v11 = 0;
      if ( !a3 )
        goto LABEL_28;
      v12 = 32;
      if ( v10 >= 0x20 )
      {
        v8 = 32LL;
        goto LABEL_11;
      }
LABEL_35:
      v7 = -1073741306;
      goto LABEL_28;
  }
  if ( a2 != 9 )
  {
LABEL_27:
    v7 = -1073741821;
    v11 = 0;
    goto LABEL_28;
  }
LABEL_6:
  v11 = 0;
  if ( !a3 )
  {
LABEL_28:
    v20 = RtlNtStatusToDosError(v7);
    EngSetLastError(v20);
    return v11;
  }
  if ( v10 < 0x38 )
    goto LABEL_35;
  v12 = 56;
  v13 = (ULONG64)a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v13;
  *(_OWORD *)&Src[16] = *(_OWORD *)(v13 + 16);
  *(_OWORD *)&Src[32] = *(_OWORD *)(v13 + 32);
  *(_QWORD *)&Src[48] = *(_QWORD *)(v13 + 48);
LABEL_11:
  v14 = a2 - 3;
  if ( !v14 )
  {
    HDEV = UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, a1, Src);
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, *(_QWORD *)Src, &Src[8], &Src[16], 0LL, 0LL, 0LL, &Src[48], &Src[52]);
LABEL_14:
    v7 = SurfaceData;
    goto LABEL_15;
  }
  v21 = v15 - 2;
  if ( !v21 )
  {
    UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v22, a1, Src);
    goto LABEL_14;
  }
  if ( v21 == 3 )
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
  if ( v7 < 0 )
    goto LABEL_28;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  memmove(a3, Src, v8);
  v17 = (_DWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v12;
  return 1;
}
