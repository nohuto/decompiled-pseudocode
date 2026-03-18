/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C006F7F8
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C006F5CC (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C01A2C70 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this, unsigned int a2)
{
  bool v2; // zf
  struct _ERESOURCE *v4; // rcx

  v2 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v2 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5), a2);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 4));
  }
}
