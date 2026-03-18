/*
 * XREFs of ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C0257F9C
 * Callers:
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0259DE4 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGVMBUSCHANNEL@@IEAA@XZ @ 0x1C0257874 (--0DXGVMBUSCHANNEL@@IEAA@XZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C025823C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 *     ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C0258EE8 (-Release@DXGVMBUSCHANNEL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Create(
        void *a1,
        const struct _GUID *a2,
        const struct _GUID *a3,
        const struct _UNICODE_STRING *a4,
        char a5,
        struct DXGVMBUSCHANNEL **a6)
{
  int v8; // edi
  DXGVMBUSCHANNEL *v9; // rax
  const struct _GUID *v10; // r8
  const struct _GUID *v11; // r9
  DXGVMBUSCHANNEL *v12; // rbx

  v8 = -1073741801;
  v9 = (DXGVMBUSCHANNEL *)operator new(0x98uLL, 0x4B677844u, PagedPool);
  if ( v9 )
    v12 = DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(v9);
  else
    v12 = 0LL;
  if ( v12 )
  {
    v8 = DXGVMBUSCHANNEL::Initialize(v12, a1, v10, v11, a4, a5);
    if ( v8 < 0 )
      DXGVMBUSCHANNEL::Release(v12);
    else
      *a6 = v12;
  }
  return (unsigned int)v8;
}
