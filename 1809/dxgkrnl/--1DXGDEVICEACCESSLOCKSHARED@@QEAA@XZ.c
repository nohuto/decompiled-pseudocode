/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF20
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C0127CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkCreateProtectedSession @ 0x1C022CFB0 (DxgkCreateProtectedSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 104));
      KeLeaveCriticalRegion();
    }
  }
}
