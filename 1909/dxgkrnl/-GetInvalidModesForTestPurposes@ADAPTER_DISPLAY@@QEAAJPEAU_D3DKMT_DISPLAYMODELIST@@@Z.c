/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C01F2BAC
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 VidPnSourceId; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (ADAPTER_DISPLAY *)((char *)this + 240), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v6 = *((_QWORD *)this + 35);
  v7 = 0;
  if ( v6 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 20) )
    {
      v10 = 3 * VidPnSourceId;
      v11 = *(unsigned int *)(v6 + 24 * VidPnSourceId + 16);
      if ( a2->ModeCount >= (unsigned int)v11 )
      {
        memmove(a2->pModeList, *(const void **)(v6 + 8 * v10 + 8), 44 * v11);
        a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 35) + 24LL * a2->VidPnSourceId + 16);
      }
      else
      {
        a2->ModeCount = v11;
        v7 = 1075707914;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v4, 0LL, v5);
    *(_QWORD *)(v8 + 24) = 8415LL;
    WdLogEvent5_WdError(v8);
    v7 = -1073741709;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  return v7;
}
