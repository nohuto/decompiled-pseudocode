/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0007550
 * Callers:
 *     CHidInput_Destroy @ 0x1C0005EE0 (CHidInput_Destroy.c)
 * Callees:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC (--1CBaseInput@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 131);
  *(_QWORD *)this = &CHidInput::`vftable';
  if ( v3 != gBaseLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v3);
    *((_QWORD *)this + 131) = 0LL;
  }
  CBaseInput::~CBaseInput(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
