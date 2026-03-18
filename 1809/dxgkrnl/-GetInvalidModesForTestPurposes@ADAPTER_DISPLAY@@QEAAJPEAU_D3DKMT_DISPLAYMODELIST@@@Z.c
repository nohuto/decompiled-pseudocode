/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C01C3260
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 VidPnSourceId; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v5 = *((_QWORD *)this + 22);
  v6 = 0;
  if ( v5 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 20) )
    {
      v9 = 3 * VidPnSourceId;
      v10 = *(unsigned int *)(v5 + 24 * VidPnSourceId + 16);
      if ( a2->ModeCount >= (unsigned int)v10 )
      {
        memmove(a2->pModeList, *(const void **)(v5 + 8 * v9 + 8), 44 * v10);
        a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 22) + 24LL * a2->VidPnSourceId + 16);
      }
      else
      {
        a2->ModeCount = v10;
        v6 = 1075707914;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = 7958LL;
    WdLogEvent5_WdError(v7);
    v6 = -1073741709;
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v12);
  return v6;
}
