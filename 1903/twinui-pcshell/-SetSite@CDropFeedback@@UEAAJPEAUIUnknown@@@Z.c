/*
 * XREFs of ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1803D5D70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18004E49C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x180066634 (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x1803D64BC (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropFeedback::SetSite(CDropFeedback *this, struct IUnknown *a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( !a2 && *((_QWORD *)this + 2) )
  {
    v4 = (__int64 *)((char *)this + 128);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    }
    DestroyWindow(*((HWND *)this + 8));
    CDropFeedback::_SetThreadPriority(this, 0);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v7, &DropFeedback_Hide_Info, v8);
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}
