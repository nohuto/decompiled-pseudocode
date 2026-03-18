/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AB910
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A5EB4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE40203FF;
  v1 = 0;
  *((_BYTE *)this + 416) |= 4u;
  *((_DWORD *)this + 87) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 13) != 0.0
    || *((float *)this + 14) != 0.0
    || *((float *)this + 35) != 1.0
    || *((_DWORD *)this + 86)
    || *((_DWORD *)this + 90)
    || *((_QWORD *)this + 25)
    || *((_QWORD *)this + 26)
    || *((_QWORD *)this + 39)
    || *((_QWORD *)this + 40)
    || *((_QWORD *)this + 27)
    || *((_QWORD *)this + 28)
    || *((_QWORD *)this + 29)
    || *((_QWORD *)this + 30) )
  {
    return 1;
  }
  return v1;
}
