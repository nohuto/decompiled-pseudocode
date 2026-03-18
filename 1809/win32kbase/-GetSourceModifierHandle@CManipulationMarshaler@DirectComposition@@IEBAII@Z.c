/*
 * XREFs of ?GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z @ 0x1C016B034
 * Callers:
 *     _lambda_738ef6141b4495c20abc71ff98e17567_::operator() @ 0x1C016AB64 (_lambda_738ef6141b4495c20abc71ff98e17567_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(
        DirectComposition::CManipulationMarshaler *this,
        unsigned int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + a2 + 6);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    if ( v4 )
      return *(unsigned int *)(v4 + 24);
  }
  return result;
}
