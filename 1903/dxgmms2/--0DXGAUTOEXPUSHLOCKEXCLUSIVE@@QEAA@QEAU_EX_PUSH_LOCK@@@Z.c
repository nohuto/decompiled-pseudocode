/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00021DC
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001FBC (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008EE64 (-AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF014 (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
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
