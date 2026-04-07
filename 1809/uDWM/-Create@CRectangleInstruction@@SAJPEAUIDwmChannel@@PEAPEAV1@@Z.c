/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002CB0C
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x18002C880 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18008E80C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800AD05C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct IDwmChannel *a1, struct CRectangleInstruction **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x13u);
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &CRectangleInstruction::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v2 = -2147024882;
    goto LABEL_10;
  }
  *(_QWORD *)(v5 + 40) = a1;
  *a2 = (struct CRectangleInstruction *)v5;
  return v2;
}
