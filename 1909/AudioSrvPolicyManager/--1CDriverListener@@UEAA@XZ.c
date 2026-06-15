/*
 * XREFs of ??1CDriverListener@@UEAA@XZ @ 0x180029E0C
 * Callers:
 *     ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180029DD0 (--_GCDriverListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDriverListener::~CDriverListener(CDriverListener *this)
{
  int v2; // eax

  *(_QWORD *)this = &CDriverListener::`vftable';
  v2 = 0;
  if ( *((_QWORD *)this + 63) )
  {
    v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v2 >= 0 )
      *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_QWORD *)this + 64) && v2 >= 0 && (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
    *((_QWORD *)this + 64) = 0LL;
}
