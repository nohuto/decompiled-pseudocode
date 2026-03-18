/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C027DAB0
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0230088 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C00473F4 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM *a2)
{
  UINT v4; // eax
  union _LARGE_INTEGER v6; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject((char *)this + 104, Executive, 0, 0, 0LL);
  v4 = *((_DWORD *)this + 40);
  v6.QuadPart = 0LL;
  a2->PresentCount = v4;
  a2->PresentRefreshCount = *((_DWORD *)this + 41);
  a2->SyncRefreshCount = *((_DWORD *)this + 42);
  BLTQUEUE::UpdateVsyncCount(this, &v6);
  a2->PresentQPCTime.QuadPart = (__int64)(v6.QuadPart
                                        * a2->PresentRefreshCount
                                        * (unsigned __int64)*((unsigned int *)this + 53))
                              / *((unsigned int *)this + 52);
  a2->SyncRefreshCount = *((_DWORD *)this + 70);
  a2->SyncQPCTime.QuadPart = *((_QWORD *)this + 36);
  KeReleaseMutex((PRKMUTEX)((char *)this + 104), 0);
  return 0LL;
}
