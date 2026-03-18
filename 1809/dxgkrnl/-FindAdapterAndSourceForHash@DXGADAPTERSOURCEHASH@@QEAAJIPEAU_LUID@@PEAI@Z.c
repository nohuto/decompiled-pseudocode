/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C020F698
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00BBECC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00DDBB0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C013BD44 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int ActualBufferSize; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _LUID *v14; // rcx
  unsigned int v15; // ebx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v10 = *((unsigned int *)this + 15);
  v11 = ActualBufferSize >> 4;
  v12 = (unsigned int)(1 << v10);
  if ( ActualBufferSize >> 4 > (unsigned int)v12 )
    v11 = 1 << v10;
  if ( (unsigned int)v4 >= v11 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v12, v9);
    *(_QWORD *)(v13 + 32) = v11;
LABEL_7:
    *(_QWORD *)(v13 + 24) = v4;
    WdLogEvent5_WdWarning(v13);
    v15 = -1073741811;
    goto LABEL_9;
  }
  v14 = (struct _LUID *)(*((_QWORD *)this + 5) + 16 * v4);
  if ( (v14[1].HighPart & 1) == 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v14, v12, v9);
    goto LABEL_7;
  }
  v15 = 0;
  *a3 = *v14;
  *a4 = v14[1].LowPart;
LABEL_9:
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return v15;
}
