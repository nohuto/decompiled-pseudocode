/*
 * XREFs of ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C003B884
 * Callers:
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003B980 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062A6C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006301C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C006AF28 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

void __fastcall VIDMM_SCH_LOG::~VIDMM_SCH_LOG(VIDMM_SCH_LOG *this)
{
  __int64 v1; // rdi
  int v3; // r8d
  VIDMM_GLOBAL *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  bool v7; // r8
  VIDMM_GLOBAL *v8; // r10
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD v12[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    memset(v12, 0, 0x58uLL);
    v3 = *((_DWORD *)this + 2);
    v4 = *(VIDMM_GLOBAL **)this;
    v12[7] = *((_QWORD *)this + 2) >> 12;
    HIDWORD(v12[0]) = v3;
    LODWORD(v12[0]) = 120;
    v12[6] = v1;
    v5 = VIDMM_GLOBAL::AdapterId(v4);
    v12[5] = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v5, v6);
    LOBYTE(v12[8]) = 1;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v8, (struct _VIDMM_SYSTEM_COMMAND *)v12, v7);
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, *(struct VIDMM_GLOBAL **)this);
  }
  if ( *((_BYTE *)this + 56) )
    MmUnlockPages(*((PMDL *)this + 6));
  v9 = (void *)*((_QWORD *)this + 6);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)this + 4);
  if ( v10 )
    MmUnmapViewInSystemSpace(v10);
  v11 = (void *)*((_QWORD *)this + 3);
  if ( v11 )
    ObfDereferenceObject(v11);
}
