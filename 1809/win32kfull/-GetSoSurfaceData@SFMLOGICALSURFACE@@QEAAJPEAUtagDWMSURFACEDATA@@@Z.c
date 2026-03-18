/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C00A1A2C
 * Callers:
 *     GreDwmGetSurfaceData @ 0x1C00A15B8 (GreDwmGetSurfaceData.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00A1DA0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::GetSoSurfaceData(SFMLOGICALSURFACE *this, struct tagDWMSURFACEDATA *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v11; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 23);
  if ( !v4 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
    *((_QWORD *)a2 + 4) = qword_1C0319B00;
    *((_DWORD *)a2 + 3) = 6;
    return v3;
  }
  v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(v6 + 56);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 60);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v6 + 96);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v6 + 88);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 8);
  else
    v8 = 0LL;
  *((_QWORD *)a2 + 3) = v8;
  if ( *(_DWORD *)(v6 + 96) != 6 )
  {
    v9 = qword_1C0319B00;
    *(_DWORD *)a2 = 0;
    goto LABEL_7;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(this) )
  {
    *(_DWORD *)a2 = 2;
    *((_QWORD *)a2 + 5) = *(_QWORD *)(v6 + 568);
    v9 = *(_QWORD *)(v6 + 576);
LABEL_7:
    *((_QWORD *)a2 + 4) = v9;
    return v3;
  }
  v11 = *(void **)(v6 + 248);
  *((_QWORD *)a2 + 4) = qword_1C0319B00;
  if ( v11 )
  {
    *(_DWORD *)a2 = 1;
    return (unsigned int)ObOpenObjectByPointer(v11, 0, 0LL, 6u, 0LL, 0, (PHANDLE)a2 + 5);
  }
  else
  {
    *(_DWORD *)a2 = 0;
  }
  return v3;
}
