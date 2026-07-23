/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x14088B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(struct _EX_RUNDOWN_REF *Object, __int64 a2)
{
  int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF

  if ( (Object[96].Count & 1) != 0 || !ObReferenceObjectSafeWithTag((__int64)Object) )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    if ( ExAcquireRundownProtection_0(Object + 95) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v7 <= 0xFFFFFFFD )
      {
        v6[0] = Object;
        v6[1] = &v8;
        v4 = PsInvokeWin32Callout(24, (__int64)v6, 1, (__int64)&v7);
        if ( v4 >= 0 )
          **(_QWORD **)a2 += v8;
      }
      ExReleaseRundownProtection_0(Object + 95);
    }
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  }
  return (unsigned int)v4;
}
