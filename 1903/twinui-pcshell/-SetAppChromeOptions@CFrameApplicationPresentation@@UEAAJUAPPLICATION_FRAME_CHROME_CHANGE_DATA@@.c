/*
 * XREFs of ?SetAppChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180151500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18010D5E8 (--0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetAppChromeOptions(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *); // rbx
  APPLICATION_FRAME_CHROME_CHANGE_DATA *v7; // rax
  _BYTE v9[64]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h]

  v11 = a2;
  *(_DWORD *)(a1 + 600) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 604) = *(_DWORD *)(a2 + 4);
  v4 = *(_QWORD *)(a1 + 608);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 != v5 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(a2 + 8));
      v4 = *(_QWORD *)(a1 + 608);
    }
    v10 = v4;
    *(_QWORD *)(a1 + 608) = v5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  *(_OWORD *)(a1 + 616) = *(_OWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 632) = *(_BYTE *)(a2 + 32);
  *(_BYTE *)(a1 + 633) = *(_BYTE *)(a2 + 33);
  v6 = *(__int64 (__fastcall **)(__int64, APPLICATION_FRAME_CHROME_CHANGE_DATA *))(*(_QWORD *)a1 + 152LL);
  v7 = APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
         (APPLICATION_FRAME_CHROME_CHANGE_DATA *)v9,
         (const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *)(a1 + 560));
  LODWORD(v6) = v6(a1, v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a2 + 8));
  return (unsigned int)v6;
}
