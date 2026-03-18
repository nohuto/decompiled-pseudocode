/*
 * XREFs of ??1CBaseProcessor@@QEAA@XZ @ 0x1C000660C
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0005E54 (--1CMouseProcessor@@QEAA@XZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0006530 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000657C (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseProcessor::~CBaseProcessor(CBaseProcessor *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  if ( v1 )
  {
    if ( v1 != gBaseLog )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v1);
    *((_QWORD *)this + 1) = 0LL;
  }
}
