/*
 * XREFs of ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01582D8
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0158B84 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::HandleMouseForLegacyTouchpad(
        CMouseProcessor *this,
        struct _MOUSE_INPUT_DATA *a2,
        struct DEVICEINFO *a3)
{
  int v5; // eax
  USHORT ButtonFlags; // cx

  if ( (*((_BYTE *)a3 + 744) & 1) != 0 )
  {
    if ( (a2->Buttons & 1) != 0 )
    {
      if ( (int)IsEditionLegacyTouchPadMouseAllowTapSupported(this) < 0 )
        v5 = 1;
      else
        v5 = EditionLegacyTouchPadMouseAllowTap();
      if ( v5 )
      {
        *((_DWORD *)a3 + 192) &= ~1u;
      }
      else
      {
        a2->ButtonFlags &= ~1u;
        *((_DWORD *)a3 + 192) |= 1u;
      }
    }
    ButtonFlags = a2->ButtonFlags;
    if ( (ButtonFlags & 2) != 0 && (*((_DWORD *)a3 + 192) & 1) != 0 )
    {
      a2->ButtonFlags = ButtonFlags & 0xFFFD;
      *((_DWORD *)a3 + 192) &= ~1u;
    }
  }
}
