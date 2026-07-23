/*
 * XREFs of PoFxRegisterPrimaryDevice @ 0x14086A5B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140726994 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterPrimaryDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  char *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _QWORD v10[10]; // [rsp+40h] [rbp-58h] BYREF

  v3 = 0LL;
  if ( DeviceObject && a2 && *(_DWORD *)a2 == 1 )
  {
    v3 = PopFxConvertV1Components(a2 + 80, *(_DWORD *)(a2 + 4));
    if ( !v3 )
      return (unsigned int)-1073741670;
    memset(v10, 0, 0x48uLL);
    v8 = 0LL;
    v10[0] = *(_QWORD *)(a2 + 16);
    v10[1] = *(_QWORD *)(a2 + 24);
    v10[2] = *(_QWORD *)(a2 + 32);
    v10[3] = *(_QWORD *)(a2 + 40);
    v10[4] = *(_QWORD *)(a2 + 48);
    v10[5] = *(_QWORD *)(a2 + 56);
    v10[6] = *(_QWORD *)(a2 + 64);
    if ( PopErrataDisablePrimaryDeviceFastResume && (*(_BYTE *)(a2 + 8) & 1) != 0 )
      v8 = 128LL;
    v7 = PopFxRegisterDevice(DeviceObject, (__int64)v10, (__int64)v3, *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 72), v8, a3);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v7;
}
