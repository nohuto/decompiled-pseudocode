/*
 * XREFs of ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18009DCE8
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DDC4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18009AF98 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x18009B1BC (--2CDxHandleBitmapRealization@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(
        void *a1,
        struct _LUID a2,
        struct CBitmapRealization **a3)
{
  LPVOID v6; // rax
  unsigned int v7; // ecx
  CDxHandleBitmapRealization *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v13; // [rsp+30h] [rbp-A8h] BYREF
  void *v14; // [rsp+38h] [rbp-A0h]
  struct _LUID v15; // [rsp+40h] [rbp-98h]
  _DWORD v16[32]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v16, 0, 0x78uLL);
  memset_0(&v13, 0, 0x20uLL);
  *a3 = 0LL;
  v16[11] = 0;
  v16[0] = 1;
  v13 = 2;
  v14 = a1;
  v15 = a2;
  v6 = CDxHandleBitmapRealization::operator new();
  if ( v6 )
    v8 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::CDxHandleBitmapRealization(
                                         (__int64)v6,
                                         0LL,
                                         (__int64)v16,
                                         (__int64)&v13,
                                         0,
                                         0LL);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = CDxHandleBitmapRealization::Initialize(v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x56u);
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x53u);
  }
  return v11;
}
