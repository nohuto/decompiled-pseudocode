/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00DE8A4
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00DEB70 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00DEC74 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rbx
  __int64 i; // rcx
  DXGFASTMUTEX *v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  DXGFASTMUTEX *v20; // [rsp+70h] [rbp-18h] BYREF
  char v21; // [rsp+78h] [rbp-10h]

  v3 = a2;
  v20 = (ADAPTER_DISPLAY *)((char *)this + 400);
  v21 = 0;
  if ( this == (ADAPTER_DISPLAY *)-400LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(-400LL);
    *(_QWORD *)(v13 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v20 + 1) == CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v14 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v21 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v15[5] = &v20;
    v15[3] = 275LL;
    v15[4] = 4LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  DXGFASTMUTEX::Acquire(v20);
  v21 = 1;
  v7 = KeGetCurrentThread();
  v8 = *((_QWORD *)this + 14) + 3760 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v8 + 8) + 408LL) != v7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v16 + 24) = 8613LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    (DISPLAY_SOURCE *)v8,
    0,
    a3,
    1u,
    0,
    (const struct tagRECT *)(v8 + 652),
    (const struct tagRECT *)(v8 + 652),
    (const struct tagRECT *)(v8 + 652),
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
    0,
    D3DDDIFMT_UNKNOWN,
    0);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)v8, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 3740); *(_BYTE *)(v17 + v8 + 2880) = 0 )
  {
    v17 = (unsigned int)i;
    i = (unsigned int)(i + 1);
  }
  *(_DWORD *)(v8 + 3740) = 0;
  *(_BYTE *)(v8 + 3696) = 0;
  if ( v21 )
  {
    v10 = v20;
    v21 = 0;
    if ( *((struct _KTHREAD **)v20 + 1) != KeGetCurrentThread() )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i);
      v18[3] = 275LL;
      v18[4] = 4LL;
      v18[5] = v10;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    v11 = *((_DWORD *)v10 + 6);
    if ( v11 <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(i);
      *(_QWORD *)(v19 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v19);
      v11 = *((_DWORD *)v10 + 6);
    }
    v12 = v11 - 1;
    *((_DWORD *)v10 + 6) = v12;
    if ( !v12 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v10 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
