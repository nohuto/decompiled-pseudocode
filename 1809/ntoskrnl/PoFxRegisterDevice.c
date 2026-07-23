/*
 * XREFs of PoFxRegisterDevice @ 0x140726800
 * Callers:
 *     <none>
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140726994 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  void *v3; // rdi
  __int64 v4; // r14
  unsigned int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // ebx
  _QWORD v12[10]; // [rsp+48h] [rbp-19h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  memset(v12, 0, 0x48uLL);
  if ( *(_DWORD *)a2 == 1 )
  {
    PopPrintEx(1u, "Device using PO_FX_VERSION_V1: devobj 0x%p", DeviceObject);
    PopPrintEx(1u, " - Driver: \"%wZ\"", &DeviceObject->DriverObject->DriverName);
    PopPrintEx(1u, "\n");
    v7 = *(_DWORD *)(a2 + 4);
    v8 = 0LL;
    v9 = *(_QWORD *)(a2 + 56);
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 24);
    v12[3] = *(_QWORD *)(a2 + 32);
    v12[4] = *(_QWORD *)(a2 + 40);
    v12[5] = *(_QWORD *)(a2 + 48);
    v3 = (void *)PopFxConvertV1Components(a2 + 64, v7);
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      v10 = -1073741811;
      goto LABEL_5;
    }
    v3 = (void *)(a2 + 80);
    v7 = *(_DWORD *)(a2 + 72);
    v4 = a2;
    v9 = *(_QWORD *)(a2 + 64);
    v8 = *(_QWORD *)(a2 + 8);
    v12[0] = *(_QWORD *)(a2 + 16);
    v12[1] = *(_QWORD *)(a2 + 24);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[3] = *(_QWORD *)(a2 + 40);
    v12[4] = *(_QWORD *)(a2 + 48);
    v12[5] = *(_QWORD *)(a2 + 56);
  }
  v10 = PopFxRegisterDevice(DeviceObject, (__int64)v12, (__int64)v3, v7, v9, v8, a3);
LABEL_5:
  if ( v3 && !v4 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v10;
}
