/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C008A320
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0088C98 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0089214 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C008A5DC (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C008A780 (GreSfmCloseCompositorRef.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026CC00 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026CD48 (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C02997E0 (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int64 v15; // rcx
  NTSTATUS updated; // eax
  __int64 HDEV; // rax
  int v19; // esi
  HDEV v20; // rax
  ULONG v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24[14]; // [rsp+38h] [rbp-50h] BYREF

  v8 = -1073741811;
  memset(v24, 0, sizeof(v24));
  if ( a2 >= 11 )
  {
    v8 = -1073741821;
    v9 = 0;
    goto LABEL_62;
  }
  switch ( a2 )
  {
    case 1:
      v9 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v10 = *(_DWORD *)a3;
      break;
    case 2:
      v9 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 8 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      *(_QWORD *)v24 = *(_QWORD *)a3;
      goto LABEL_45;
    case 5:
      v9 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 0x18 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      *(_OWORD *)v24 = *(_OWORD *)a3;
      *(_QWORD *)&v24[4] = *(_QWORD *)(a3 + 16);
      goto LABEL_45;
    case 7:
      v9 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 8:
      v9 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    case 10:
      v9 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 4 )
      {
        v8 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      v10 = *(_DWORD *)a3;
      break;
    default:
      v8 = -1073741821;
      v9 = 0;
      goto LABEL_51;
  }
  v24[0] = v10;
LABEL_45:
  v11 = a2 - 1;
  if ( !v11 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v23, a1, (unsigned int)v24[0]);
    goto LABEL_50;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v22, a1, *(_QWORD *)v24);
    goto LABEL_50;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    if ( *(_QWORD *)&v24[4] || v24[2] || v24[3] )
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, (__int64)a1, *(__int64 *)&v24[4], *(__int64 *)&v24[2], v24[0]);
    }
    else
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v24[0]);
    }
    goto LABEL_50;
  }
  v14 = v13 - 2;
  if ( !v14 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v15, a1);
LABEL_50:
    v8 = updated;
    goto LABEL_51;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    v20 = (HDEV)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v20, a1);
    goto LABEL_50;
  }
  if ( v19 == 2 )
    GreSfmGenerateMoveData((unsigned int)v24[0]);
LABEL_51:
  if ( v8 < 0 )
  {
LABEL_62:
    v21 = RtlNtStatusToDosError(v8);
    EngSetLastError(v21);
    return v9;
  }
  return 1;
}
