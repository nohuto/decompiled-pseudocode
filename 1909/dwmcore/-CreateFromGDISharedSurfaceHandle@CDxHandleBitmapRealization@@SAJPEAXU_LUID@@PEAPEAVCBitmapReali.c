/*
 * XREFs of ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CE114
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800CDFC8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180052A44 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18005314C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(
        void *a1,
        struct _LUID a2,
        struct CBitmapRealization **a3)
{
  LPVOID v6; // rax
  __int64 v7; // rcx
  CDxHandleBitmapRealization *v8; // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  _DWORD v13[2]; // [rsp+30h] [rbp-A8h] BYREF
  void *v14; // [rsp+38h] [rbp-A0h]
  struct _LUID v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+48h] [rbp-90h]
  _DWORD v17[32]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v17, 0, 0x78uLL);
  v13[1] = 0;
  v16 = 0LL;
  *a3 = 0LL;
  v17[11] = 0;
  v17[0] = 1;
  v13[0] = 2;
  v14 = a1;
  v15 = a2;
  v6 = operator new(0x1B0uLL);
  if ( v6 )
    v8 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::CDxHandleBitmapRealization(
                                         (__int64)v6,
                                         0LL,
                                         (__int64)v17,
                                         (__int64)v13,
                                         0);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = CDxHandleBitmapRealization::Initialize(v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x54u, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x51u, 0LL);
  }
  return v11;
}
