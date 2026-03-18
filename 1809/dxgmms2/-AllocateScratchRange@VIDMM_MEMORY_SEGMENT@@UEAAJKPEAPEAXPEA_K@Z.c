/*
 * XREFs of ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00BA8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0077444 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::AllocateScratchRange(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        void **a3,
        union _LARGE_INTEGER *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 result; // rax
  union _LARGE_INTEGER v8; // [rsp+60h] [rbp-18h] BYREF

  v5 = (unsigned __int64)a2 << 12;
  v6 = 0xFFFFFFFFLL;
  if ( v5 > 0xFFFFFFFF )
    return v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  LOBYTE(v6) = 1;
  result = VIDMM_LINEAR_POOL::Allocate(this[19], (unsigned int)v5, 0LL, v6, 0LL, 0LL, 0, 0, 0LL, &v8, a3);
  if ( (int)result >= 0 )
    *a4 = v8;
  return result;
}
