/*
 * XREFs of ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0041AF0
 * Callers:
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00404F0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0040680 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     HDXDrvEscape @ 0x1C00B5D20 (HDXDrvEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vSync(PDEVOBJ *this, struct _SURFOBJ *a2, struct _RECTL *a3, unsigned int a4)
{
  __int64 p_hsurf; // r10
  __int64 v5; // rcx
  void (__fastcall *v6)(struct _SURFOBJ *, struct _RECTL *, _QWORD); // rax
  void (__fastcall *v7)(DHPDEV, struct _RECTL *); // rax

  p_hsurf = 112LL;
  if ( a2 )
    p_hsurf = (__int64)&a2[1].hsurf;
  if ( (*(_DWORD *)p_hsurf & 0x1000) != 0 )
  {
    v5 = *(_QWORD *)this;
    if ( (*(_DWORD *)(v5 + 40) & 0x400) == 0 )
    {
      v6 = *(void (__fastcall **)(struct _SURFOBJ *, struct _RECTL *, _QWORD))(v5 + 1760);
      if ( v6 )
      {
        v6(a2, a3, a4);
      }
      else
      {
        v7 = *(void (__fastcall **)(DHPDEV, struct _RECTL *))(v5 + 1752);
        if ( v7 )
          v7(a2->dhpdev, a3);
      }
    }
  }
}
