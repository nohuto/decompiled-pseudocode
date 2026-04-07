/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800B97A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180048254 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B7C90 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x1800B9544 (-MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  char *v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 64;
  v9 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = DXGIFormatToPixelFormat(*((_DWORD *)this + 9), *((_DWORD *)this + 10) == 1);
  v6 = MilPfToWic(v5, a2);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC8u);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v7;
}
