/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C
 * Callers:
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001F994 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 11);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      SURFREF::SURFREF((SURFREF *)v4, *(HSURF *)(v1 + 8));
      if ( v5 )
      {
        v3 = 1;
        SURFACE::vDec_cRef(v5);
      }
      else
      {
        v3 = 0;
      }
      SURFREF::~SURFREF((SURFREF *)v4);
      if ( v3 )
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      Win32FreePool(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
