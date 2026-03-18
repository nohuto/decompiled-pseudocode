/*
 * XREFs of ACPIIoctlQueryDeviceBiosName @ 0x1C00AF848
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001400 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIIoctlQueryDeviceBiosName(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v5; // esi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  a2->IoStatus.Information = 0LL;
  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  v5 = ACPIQueryDeviceBiosName(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9.Length + 2;
    if ( *(_DWORD *)(a3 + 8) >= v6 )
    {
      v7 = v6;
      memmove(a2->AssociatedIrp.MasterIrp, v9.Buffer, v6);
      a2->IoStatus.Information = v7;
    }
    else
    {
      v5 = -1073741789;
    }
  }
  if ( v9.Buffer )
  {
    ExFreePoolWithTag(v9.Buffer, 0x53706341u);
    *(_QWORD *)&v9.Length = 0LL;
    v9.Buffer = 0LL;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v5;
}
