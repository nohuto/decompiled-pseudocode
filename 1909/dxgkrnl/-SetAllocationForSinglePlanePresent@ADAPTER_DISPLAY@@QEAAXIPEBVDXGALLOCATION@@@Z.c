/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00FCA90
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00087D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00FCD58 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00FCE60 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 i; // rcx
  DXGFASTMUTEX *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  DXGFASTMUTEX *v22; // [rsp+70h] [rbp-18h] BYREF
  char v23; // [rsp+78h] [rbp-10h]

  v3 = (unsigned int)a2;
  v22 = (ADAPTER_DISPLAY *)((char *)this + 504);
  v23 = 0;
  if ( this == (ADAPTER_DISPLAY *)-504LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(-504LL, a2);
    *(_QWORD *)(v15 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v22 + 2) == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v16 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v23 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v17[5] = &v22;
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  DXGFASTMUTEX::Acquire(v22);
  v23 = 1;
  v8 = KeGetCurrentThread();
  v9 = *((_QWORD *)this + 14) + 3968 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v9 + 8) + 520LL) != v8 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v18 + 24) = 9070LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    (DISPLAY_SOURCE *)v9,
    0,
    a3,
    1u,
    0,
    (const struct tagRECT *)(v9 + 652),
    (const struct tagRECT *)(v9 + 652),
    (const struct tagRECT *)(v9 + 652),
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
    0,
    D3DDDIFMT_UNKNOWN,
    0);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)v9, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 3740); *(_BYTE *)(v19 + v9 + 2880) = 0 )
  {
    v19 = (unsigned int)i;
    i = (unsigned int)(i + 1);
  }
  *(_DWORD *)(v9 + 3740) = 0;
  *(_BYTE *)(v9 + 3696) = 0;
  if ( v23 )
  {
    v12 = v22;
    v23 = 0;
    if ( *((struct _KTHREAD **)v22 + 2) != KeGetCurrentThread() )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v10);
      v20[3] = 275LL;
      v20[4] = 4LL;
      v20[5] = v12;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
    v13 = *((_DWORD *)v12 + 6);
    if ( v13 <= 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(i, v10);
      *(_QWORD *)(v21 + 24) = 603LL;
      WdLogEvent5_WdAssertion(v21);
      v13 = *((_DWORD *)v12 + 6);
    }
    v14 = v13 - 1;
    *((_DWORD *)v12 + 6) = v14;
    if ( !v14 )
    {
      *((_QWORD *)v12 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
