/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x1408C7E70
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(struct _EX_RUNDOWN_REF *Object, __int64 a2)
{
  int v4; // ebx
  struct _EX_RUNDOWN_REF *v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v7; // [rsp+28h] [rbp-20h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( (Object[97].Count & 1) != 0 || !ObReferenceObjectSafeWithTag((__int64)Object) )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    if ( ExAcquireRundownProtection_0(Object + 96) )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v8 <= 0xFFFFFFFD )
      {
        v6 = Object;
        v7 = &v9;
        v4 = PsInvokeWin32Callout(24, (__int64)&v6, 1, (__int64)&v8);
        if ( v4 >= 0 )
          **(_QWORD **)a2 += v9;
      }
      ExReleaseRundownProtection_0(Object + 96);
    }
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  }
  return (unsigned int)v4;
}
