/*
 * XREFs of ??_ECParticleBehaviorsMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A5380
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CParticleBehaviorsMarshaler *__fastcall DirectComposition::CParticleBehaviorsMarshaler::`vector deleting destructor'(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
