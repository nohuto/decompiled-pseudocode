/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x1800B5990
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$18 @ 0x18006FD9F (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$18.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1800B5A08 (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x1800B5A70 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800BA618 (--1CMuteSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    CoTaskMemFree(v3);
}
