/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0065240
 * Callers:
 *     VidMmETWAllocationHandle @ 0x1C0001DA0 (VidMmETWAllocationHandle.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 */

void *__fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rbx
  int v11; // r9d
  __int64 v12; // rax

  Current = DXGPROCESS::GetCurrent();
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *((_DWORD *)Current + 56);
      if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventBlockThread, v5, v11);
    }
    ExAcquirePushLockSharedEx((char *)Current + 208, 0LL);
  }
  v6 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 62) )
  {
    v7 = *((_QWORD *)Current + 29);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      if ( (v8 & 0x1F) == 5 )
      {
        v9 = *(_QWORD *)(v7 + 16LL * (unsigned int)v6);
        goto LABEL_8;
      }
      v12 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v12 + 24) = 267LL;
      WdLogEvent5_WdError(v12);
    }
  }
  v9 = 0LL;
LABEL_8:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    return *(void **)(v9 + 24);
  else
    return 0LL;
}
