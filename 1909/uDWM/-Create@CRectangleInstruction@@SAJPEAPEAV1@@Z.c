/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180028E54
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180028B2C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F310 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B0FDC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct CRectangleInstruction **a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           48LL);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 8) = 1;
      *(_QWORD *)v2 = &CRectangleInstruction::`vftable';
      *(_QWORD *)(v2 + 16) = 0LL;
      *(_QWORD *)(v2 + 24) = 0LL;
      *a1 = (struct CRectangleInstruction *)v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13u, v5);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x13u, v5);
  }
  return v3;
}
