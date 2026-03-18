/*
 * XREFs of ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x1801E1D3C
 * Callers:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18009B044 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015D268 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayIdFromMonitor(CDisplaySet *this, HMONITOR a2, struct DisplayId *a3)
{
  unsigned int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _DWORD *DisplayId; // rax
  _DWORD *v10; // r8
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v5 = -2147024809;
  if ( (_DWORD)a2 == -6 )
  {
    *(_DWORD *)a3 = DisplayId::Hmd;
    return 0;
  }
  v6 = *((_DWORD *)this + 18);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 6);
    while ( *(HMONITOR *)(*(_QWORD *)(v8 + 8 * v7) + 16LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v5;
    }
    DisplayId = CDisplay::GetDisplayId(*(_QWORD *)(v8 + 8 * v7), &v12);
    *v10 = *DisplayId;
    return 0;
  }
  return v5;
}
