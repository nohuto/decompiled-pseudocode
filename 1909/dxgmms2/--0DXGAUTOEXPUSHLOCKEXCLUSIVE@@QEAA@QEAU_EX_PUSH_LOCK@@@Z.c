/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C000219C
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001F7C (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0090224 (-AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AECB4 (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

DXGAUTOEXPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        DXGAUTOEXPUSHLOCKEXCLUSIVE *this,
        struct _EX_PUSH_LOCK *const a2)
{
  DXGAUTOEXPUSHLOCKEXCLUSIVE *result; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
