/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A080
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F80 (-QueryInterface@CHwDisplayRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwDisplayRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F90 (-QueryInterface@CHwDisplayRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0FA0 (-QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0FB0 (-QueryInterface@CHwTextureRenderTarget@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0FC0 (-QueryInterface@CHwTextureRenderTarget@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        char **a3)
{
  char *v3; // rcx
  int v5; // edi
  __int64 v6; // rax

  v3 = (char *)this + 160;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 32LL))(v3);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)v5;
}
