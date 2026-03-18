/*
 * XREFs of ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009ED90
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009ED30 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     DrvQueryDisplayConfig @ 0x1C00500E0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0050200 (DrvGetDisplayConfigBufferSizes.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C009EE44 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::TryFillOnce(
        QDC_AUTO_BUFFERS *this,
        unsigned int a2,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  unsigned int *v3; // rbx
  int v5; // esi
  int DisplayConfigBufferSizes; // r10d
  unsigned int v9; // r9d
  QDC_AUTO_BUFFERS *v10; // rax

  v3 = (unsigned int *)((char *)this + 400);
  v5 = *((_DWORD *)this + 100);
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a2, (__int64)this + 400, (__int64)a3);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v9 = v5 + 1;
    if ( v5 + 1 <= *v3 )
      v9 = *v3;
    *v3 = v9;
  }
  if ( DisplayConfigBufferSizes >= 0 )
  {
    QDC_AUTO_BUFFERS::Free(this);
    if ( *v3 > 2 )
      v10 = (QDC_AUTO_BUFFERS *)PALLOCMEM2(200 * *v3, 0x73726447u, 1);
    else
      v10 = this;
    *((_QWORD *)this + 51) = v10;
    if ( v10 )
      return (unsigned int)DrvQueryDisplayConfig(a2, v3, (__int64)v10, a3);
    else
      return (unsigned int)-1073741801;
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
