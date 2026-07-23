/*
 * XREFs of SeCaptureAtomTableCallout @ 0x140125648
 * Callers:
 *     PsConvertToGuiThread @ 0x1406AC240 (PsConvertToGuiThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 */

LONG_PTR SeCaptureAtomTableCallout()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  signed __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v0 = PsReferenceEffectiveToken(
         (unsigned int)KeGetCurrentThread(),
         (unsigned int)&v6,
         (unsigned int)&v4,
         (unsigned int)&v5,
         0LL);
  v1 = (_QWORD *)v0;
  if ( (*(_DWORD *)(v0 + 200) & 0x4000) != 0 && !*(_QWORD *)(*(_QWORD *)(v0 + 1080) + 48LL) )
  {
    v3 = KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16];
    if ( !v3 || (*(_DWORD *)(v3 + 448) & 0x20) == 0 )
    {
      PsInvokeWin32Callout(2LL, &v7, 0LL, 0LL);
      if ( v7 && !_InterlockedCompareExchange64((volatile signed __int64 *)(v1[135] + 48LL), v7, 0LL) )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 4));
    }
  }
  return ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
