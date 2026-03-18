/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281D68
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0281E68 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0042B2C (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  size_t DriverPrivateDataSize; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( DXGADAPTER::IsDxgmms2(a1) )
  {
    v7 = *(unsigned int *)(v5 + 32);
    if ( (_DWORD)v7 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v7, v5, v6);
      if ( !RefCountedBuffer )
      {
        v13 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
        *(_QWORD *)(v13 + 24) = 1340LL;
        WdLogEvent5_WdLowResource(v13);
        return 3221225495LL;
      }
      *(_DWORD *)RefCountedBuffer = a2->DriverPrivateDataSize;
      *((_DWORD *)RefCountedBuffer + 1) = 1;
      DriverPrivateDataSize = a2->DriverPrivateDataSize;
      pDriverPrivateData = (char *)a2->pDriverPrivateData;
      if ( &pDriverPrivateData[DriverPrivateDataSize] < pDriverPrivateData
        || (unsigned __int64)&pDriverPrivateData[DriverPrivateDataSize] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((char *)RefCountedBuffer + 8, pDriverPrivateData, DriverPrivateDataSize);
      *a3 = RefCountedBuffer;
    }
  }
  return 0LL;
}
