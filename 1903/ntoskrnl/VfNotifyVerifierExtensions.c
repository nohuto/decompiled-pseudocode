/*
 * XREFs of VfNotifyVerifierExtensions @ 0x14096672C
 * Callers:
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409774A0 (VfSuspectDriversUnloadCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall VfNotifyVerifierExtensions(int a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (__int64)memset(v5, 0, 0x28uLL);
  if ( ViFnXdvNotifyExtensions )
  {
    if ( a1 )
    {
      result = (unsigned int)(a1 - 1);
      if ( (unsigned int)result > 1 )
        return result;
      LODWORD(v5[0]) = a1;
      v5[1] = a2 + 88;
      v5[2] = *(_QWORD *)(a2 + 48);
      LODWORD(v5[3]) = *(_DWORD *)(a2 + 64);
      HIDWORD(v5[3]) = *(_DWORD *)(a2 + 156);
      LODWORD(v5[4]) = *(_DWORD *)(a2 + 120);
    }
    else
    {
      LODWORD(v5[1]) = a2;
    }
    return ((__int64 (__fastcall *)(_QWORD *))ViFnXdvNotifyExtensions)(v5);
  }
  return result;
}
