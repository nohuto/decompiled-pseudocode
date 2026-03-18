/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00DFB6C (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00F79E0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C013F1C0 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0144114 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01474F8 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01552E4 (DxgkPowerOnOffMonitor.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int AllMonitorDevicesFromSessionView; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r13
  int v21; // edi
  char *PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r13d
  __int64 *v28; // rdi
  char *v29; // r13
  char v30; // r12
  int v31; // esi
  unsigned int v32; // edx
  void *v33; // rcx
  __int64 v34; // rdx
  DXGADAPTER *v35; // rcx
  PIRP v36; // rcx
  int v38; // eax
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int CurrentProcessSessionId; // r12d
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // [rsp+30h] [rbp-38h]
  unsigned int v60; // [rsp+30h] [rbp-38h]
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v61; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v63; // [rsp+40h] [rbp-28h]
  __m128i v64; // [rsp+48h] [rbp-20h] BYREF
  __int64 v65; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v67; // [rsp+C0h] [rbp+58h] BYREF
  int v68; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v65 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v63 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v52 = *Parameters;
    v53 = *(_QWORD *)(v10 + 24);
    LODWORD(v65) = -1;
    v64 = v52;
    v54 = DxgkPowerOnOffMonitor(
            v53,
            1,
            (unsigned int)&v65,
            (unsigned int)&v64,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v52, 8).m128i_i64[0]);
    v7 = v54;
    if ( v54 >= 0 )
      goto LABEL_24;
LABEL_70:
    v58 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v58 + 24) = v7;
    WdLogEvent5_WdError(v58);
    goto LABEL_24;
  }
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1157);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v50 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v50 = 0x20000000;
        Parameters[2].m128i_i32[0] = v50;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_24;
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
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3896);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 276LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 4288LL);
          goto LABEL_24;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_24;
        if ( Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(void **)(v10 + 3896),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v65,
                                                         &v67);
            LOBYTE(v40) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v40);
            if ( (int)v7 < 0 )
            {
              v51 = WdLogNewEntry5_WdWarning(v42, v41, v43);
              *(_QWORD *)(v51 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v51);
            }
            else
            {
              v44 = v67 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v65;
              *((_BYTE *)UserBuffer + 4) = v44;
            }
          }
          goto LABEL_24;
        }
      }
LABEL_61:
      LODWORD(v7) = -1073741789;
      goto LABEL_24;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_61;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v49 = *(_DWORD *)(v4 + 192);
      if ( v49 != -1 && v49 != CurrentProcessSessionId )
        goto LABEL_63;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672)) < 0 )
      {
LABEL_64:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_46;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672));
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_63:
        v55 = WdLogNewEntry5_WdWarning(v46, v45, v47);
        *(_QWORD *)(v55 + 24) = v7;
        WdLogEvent5_WdWarning(v55);
        goto LABEL_64;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_46:
    LODWORD(v7) = 0;
    goto LABEL_24;
  }
  v68 = 0;
  v12 = 0LL;
  LOBYTE(v67) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_70;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2672),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v56 = WdLogNewEntry5_WdError(0x80000000LL, v18, v19);
    *(_QWORD *)(v56 + 24) = v7;
    WdLogEvent5_WdError(v56);
LABEL_67:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_24;
  }
  v20 = v67;
  v21 = ((_BYTE)v67 != D3DDDI_VSSLO_UNINITIALIZED ? v68 : 0) + *(_DWORD *)(v10 + 3664);
  if ( !v21 )
    goto LABEL_23;
  Size = (unsigned int)(20 * (v21 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v64.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v57 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    *(_QWORD *)(v57 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v57);
    goto LABEL_67;
  }
  memset(PoolWithTag, 0, Size);
  if ( v20 )
  {
    v59 = v21;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2672),
                    *(_DWORD *)(v4 + 156),
                    (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_66:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_67;
    }
    v27 = v59;
  }
  else
  {
    v27 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3304;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3304), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v65, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_66;
  }
  v28 = *(__int64 **)(v10 + 3648);
  v29 = &v12[20 * v27];
  if ( !*(_DWORD *)(v10 + 3664) )
    goto LABEL_22;
  v30 = v67;
  v31 = 0;
  while ( *v28 != *(_QWORD *)(v10 + 3648) )
  {
    if ( *((_DWORD *)v28 + 124) != 1 || *((_BYTE *)v28 + 510) != 1 )
      goto LABEL_20;
    v60 = *((_DWORD *)v28 + 126);
    DmmGetVideoOutputTechnology(*(void *const *)(v10 + 3896), v60, &v61, 0LL);
    v29[16] = IsInternalVideoOutput(v61);
    v32 = *(_DWORD *)(v4 + 156);
    v33 = *(void **)(v10 + 3896);
    LOBYTE(v68) = 0;
    DmmIsPresentPathInClientVidPnTopology(v33, v32, v60, (unsigned __int8 *)&v68);
    if ( !(_BYTE)v68 )
    {
      if ( !*((_BYTE *)v28 + 944) )
        goto LABEL_20;
      v34 = *(unsigned int *)(v4 + 156);
      v35 = *(DXGADAPTER **)(v10 + 3896);
      LOBYTE(v67) = 0;
      if ( (int)DmmCanAddPresentPathToClientVidPn(v35, v34, v60, (unsigned __int8 *)&v67) < 0 || !(_BYTE)v67 )
        goto LABEL_20;
      v38 = 0;
      goto LABEL_27;
    }
    if ( v30 )
    {
      v38 = 1;
LABEL_27:
      *(_DWORD *)v29 = v38 | 0x20000000;
      *((_DWORD *)v29 + 1) = v60;
      *((_QWORD *)v29 + 1) = *(_QWORD *)(v10 + 2672);
      v29 += 20;
    }
LABEL_20:
    v28 = (__int64 *)*v28;
    if ( (unsigned int)++v31 >= *(_DWORD *)(v10 + 3664) )
      break;
  }
  UserBuffer = v63;
  v12 = (char *)v64.m128i_i64[0];
LABEL_22:
  DpiReleaseCoreSyncAccessSafe(v65, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_23:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_24:
  v36 = Irp;
  Irp->IoStatus.Status = v7;
  v36->IoStatus.Information = v5;
  IofCompleteRequest(v36, 1);
  return (unsigned int)v7;
}
