/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0170BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016AAD4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE40203FF;
  v1 = 0;
  *((_BYTE *)this + 436) |= 4u;
  *((_DWORD *)this + 95) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 12) != 0.0
    || *((float *)this + 13) != 0.0
    || *((float *)this + 34) != 1.0
    || *((_DWORD *)this + 94)
    || *((_DWORD *)this + 98)
    || *((_QWORD *)this + 29)
    || *((_QWORD *)this + 30)
    || *((_QWORD *)this + 43)
    || *((_QWORD *)this + 44)
    || *((_QWORD *)this + 31)
    || *((_QWORD *)this + 32)
    || *((_QWORD *)this + 33)
    || *((_QWORD *)this + 34) )
  {
    return 1;
  }
  return v1;
}
