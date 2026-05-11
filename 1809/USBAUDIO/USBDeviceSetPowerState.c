/*
 * XREFs of USBDeviceSetPowerState @ 0x1C0028A20
 * Callers:
 *     <none>
 * Callees:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002A028 (USBHwSelectStreamingMIDIInterface.c)
 *     USBHwStopAllMIDIPipes @ 0x1C002A2FC (USBHwStopAllMIDIPipes.c)
 */

__int64 __fastcall USBDeviceSetPowerState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax

  v2 = 0;
  if ( (_DWORD)a2 == 1 )
  {
    v4 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 192LL);
    v5 = *v4;
    if ( *v4 != v4 )
    {
      do
      {
        if ( v5 == v4 )
          break;
        v6 = USBHwSelectStreamingMIDIInterface(a1, v5, 0LL);
        v5 = (_QWORD *)*v5;
        v2 = v6;
      }
      while ( v6 >= 0 );
    }
  }
  else if ( (unsigned int)(a2 - 2) <= 2 )
  {
    return (unsigned int)USBHwStopAllMIDIPipes(a1, a2, 0LL);
  }
  return v2;
}
