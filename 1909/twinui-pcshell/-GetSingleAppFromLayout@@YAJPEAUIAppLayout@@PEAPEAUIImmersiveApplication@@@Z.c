/*
 * XREFs of ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803F719C
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803F7B30 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetSingleAppFromLayout(struct IAppLayout *a1, struct IImmersiveApplication **a2)
{
  int v4; // edi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = -2147467259;
  if ( a1 && (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a1 + 72LL))(a1) == 1 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    v4 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 96LL))(
           a1,
           0LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v6);
    if ( v4 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) == 1 )
      v4 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplication **))(*(_QWORD *)v6 + 40LL))(v6, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  return (unsigned int)v4;
}
