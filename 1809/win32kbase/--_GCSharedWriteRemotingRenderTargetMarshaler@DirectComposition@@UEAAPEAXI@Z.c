/*
 * XREFs of ??_GCSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0181E20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *__fastcall DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
