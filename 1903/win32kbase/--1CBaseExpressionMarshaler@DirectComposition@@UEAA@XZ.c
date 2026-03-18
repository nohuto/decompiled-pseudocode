/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C008D618
 * Callers:
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008D5A0 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008D5E0 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5050 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5280 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v1 = *((_QWORD *)this + 9);
  if ( v1 )
    Win32FreePool(v1);
}
