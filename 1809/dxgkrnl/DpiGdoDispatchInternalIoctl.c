/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00BC560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C00BBCD0 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00BCAEC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C00BD0DC (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00BD1C4 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00E02D8 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r15
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  unsigned int Length; // r9d
  __m128i *Parameters; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  char v16; // r13
  int v17; // edi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // edi
  PIRP v19; // rcx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  char *PoolWithTag; // rax
  __int64 v28; // rcx
  unsigned int v29; // edx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // r13d
  __int64 *v31; // rdi
  char *v32; // r13
  char v33; // r12
  int v34; // esi
  void *v35; // rcx
  bool v36; // al
  unsigned int v37; // r8d
  unsigned int v38; // edx
  void *v39; // rcx
  unsigned int v40; // edx
  void *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int CurrentProcessSessionId; // r12d
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __m128i v50; // xmm0
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int8 v57[4]; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v58; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v60; // [rsp+40h] [rbp-28h]
  __m128i v61; // [rsp+48h] [rbp-20h] BYREF
  __int64 v62; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v64; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v65; // [rsp+C8h] [rbp+60h]

  Irp = a2;
  v62 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v60 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v50 = *Parameters;
    v51 = *(_QWORD *)(v10 + 24);
    LODWORD(v62) = -1;
    v61 = v50;
    v52 = DxgkPowerOnOffMonitor(
            v51,
            1,
            (unsigned int)&v62,
            (unsigned int)&v61,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v50, 8).m128i_i64[0]);
    v7 = v52;
    if ( v52 >= 0 )
      goto LABEL_7;
LABEL_70:
    v56 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v56 + 24) = v7;
    WdLogEvent5_WdError(v56);
    goto LABEL_7;
  }
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1149);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v49 = 0;
        if ( *(_BYTE *)(v10 + 1144) == 1 )
          v49 = 0x20000000;
        Parameters[2].m128i_i32[0] = v49;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_7;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( Length >= 0x20 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3792);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3792) + 276LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3792) + 4296LL);
          goto LABEL_7;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_7;
        if ( Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(DXGADAPTER **)(v10 + 3792),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v62,
                                                         &v64);
            LOBYTE(v22) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v22);
            if ( (int)v7 < 0 )
            {
              v48 = WdLogNewEntry5_WdWarning(v24, v23, v25);
              *(_QWORD *)(v48 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v48);
            }
            else
            {
              v26 = v64 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v62;
              *((_BYTE *)UserBuffer + 4) = v26;
            }
          }
          goto LABEL_7;
        }
      }
LABEL_60:
      LODWORD(v7) = -1073741789;
      goto LABEL_7;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_60;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v47 = *(_DWORD *)(v4 + 192);
      if ( v47 != -1 && v47 != CurrentProcessSessionId )
        goto LABEL_62;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2600), *(_DWORD *)(v4 + 156), 1) < 0 )
      {
LABEL_63:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_46;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2600), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_62:
        v53 = WdLogNewEntry5_WdWarning(v44, v43, v45);
        *(_QWORD *)(v53 + 24) = v7;
        WdLogEvent5_WdWarning(v53);
        goto LABEL_63;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_46:
    LODWORD(v7) = 0;
    goto LABEL_7;
  }
  v58 = D3DKMDT_VOT_HD15;
  v12 = 0LL;
  LOBYTE(v64) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_70;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2600),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v54 = WdLogNewEntry5_WdError(0x80000000LL);
    *(_QWORD *)(v54 + 24) = v7;
    WdLogEvent5_WdError(v54);
LABEL_66:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_7;
  }
  v16 = v64;
  v17 = *(_DWORD *)(v10 + 3560);
  LOBYTE(v65) = v64;
  v18 = ((_BYTE)v64 != D3DDDI_VSSLO_UNINITIALIZED ? v58 : 0) + v17;
  if ( v18 == D3DKMDT_VOT_HD15 )
    goto LABEL_6;
  Size = (unsigned int)(20 * (v18 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v61.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v55 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    goto LABEL_66;
  }
  memset(PoolWithTag, 0, Size);
  if ( v16 )
  {
    v29 = *(_DWORD *)(v4 + 156);
    v58 = v18;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView((struct _LUID *)(v10 + 2600), v29, (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_65:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_66;
    }
    v30 = v58;
    LOBYTE(v65) = v64;
  }
  else
  {
    v30 = D3DKMDT_VOT_HD15;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3232;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3232), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v62, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_65;
  }
  v31 = *(__int64 **)(v10 + 3544);
  v32 = &v12[20 * v30];
  if ( !*(_DWORD *)(v10 + 3560) )
    goto LABEL_33;
  v33 = v65;
  v34 = 0;
  while ( *v31 != *(_QWORD *)(v10 + 3544) )
  {
    if ( *((_DWORD *)v31 + 124) != 1 || *((_BYTE *)v31 + 510) != 1 )
      goto LABEL_31;
    v35 = *(void **)(v10 + 3792);
    v65 = *((_DWORD *)v31 + 126);
    DmmGetVideoOutputTechnology(v35, v65, &v58, 0LL);
    v36 = IsInternalVideoOutput(v58);
    v37 = v65;
    v32[16] = v36;
    v38 = *(_DWORD *)(v4 + 156);
    v39 = *(void **)(v10 + 3792);
    v57[0] = 0;
    DmmIsPresentPathInClientVidPnTopology(v39, v38, v37, v57);
    if ( !v57[0] )
    {
      if ( !*((_BYTE *)v31 + 944) )
        goto LABEL_31;
      v40 = *(_DWORD *)(v4 + 156);
      v41 = *(void **)(v10 + 3792);
      LOBYTE(v64) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v41, v40, v65, (unsigned __int8 *)&v64) < 0 || !(_BYTE)v64 )
        goto LABEL_31;
      v42 = 0;
      goto LABEL_38;
    }
    if ( v33 )
    {
      v42 = 1;
LABEL_38:
      *(_DWORD *)v32 = v42 | 0x20000000;
      *((_DWORD *)v32 + 1) = v65;
      *((_QWORD *)v32 + 1) = *(_QWORD *)(v10 + 2600);
      v32 += 20;
    }
LABEL_31:
    v31 = (__int64 *)*v31;
    if ( (unsigned int)++v34 >= *(_DWORD *)(v10 + 3560) )
      break;
  }
  UserBuffer = v60;
  v12 = (char *)v61.m128i_i64[0];
LABEL_33:
  DpiReleaseCoreSyncAccessSafe(v62, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_6:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_7:
  v19 = Irp;
  Irp->IoStatus.Status = v7;
  v19->IoStatus.Information = v5;
  IofCompleteRequest(v19, 1);
  return (unsigned int)v7;
}
