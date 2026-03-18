/*
 * XREFs of ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00299A8
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BD890 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::BlockRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v3; // ecx
  int v5; // r9d
  __int64 v6; // r10
  int v7; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1) - *(_DWORD *)a2 + 1;
  v6 = *((_QWORD *)this + 5);
  v7 = *(_DWORD *)(v6 + 4LL * *((unsigned int *)a2 + 1));
  if ( v3 == *((_DWORD *)this + 16) )
  {
    *((_DWORD *)this + 16) = v7;
  }
  else
  {
    *(_DWORD *)(v6 + 4LL * (unsigned int)(v3 - 1)) = v7;
    v6 = *((_QWORD *)this + 5);
  }
  *(_DWORD *)(v6 + 4LL * *((unsigned int *)a2 + 1)) = v5;
  result = 0LL;
  *((_DWORD *)this + 15) -= v5;
  *((_DWORD *)this + 17) = v5;
  return result;
}
