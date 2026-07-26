/*
 * XREFs of ndisIovInvalidateBlockCompletion @ 0x1C011A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisIovInvalidateBlockCompletion(__int64 a1, _IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rax
  _QWORD v8[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+130h] [rbp+30h] BYREF
  __int64 v10; // [rsp+138h] [rbp+38h]

  v9 = 0LL;
  v10 = 0LL;
  memset(v8, 0, 0xF8uLL);
  if ( a2->IoStatus.Status < 0 || *(_BYTE *)(a3 + 4674) )
  {
    KeSetEvent((PRKEVENT)(a3 + 4648), 0, 0);
  }
  else
  {
    LODWORD(v8[11]) |= 8u;
    v10 = *(_QWORD *)(a3 + 4640);
    v8[13] = &ndisIntReqGeneric;
    LODWORD(v8[0]) = 15466902;
    v8[5] = &v9;
    LODWORD(v8[6]) = 16;
    *(_QWORD *)((char *)v8 + 4) = 12LL;
    LODWORD(v8[4]) = 66153;
    *(_QWORD *)((char *)&v8[6] + 4) = 16LL;
    ndisQuerySetMiniport(a3, 0LL, (__int64)v8, 0, 0LL);
    IoReuseIrp(a2, -1073741637);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3840);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2801671;
    CurrentStackLocation[-1].Parameters.Read.Length = 8;
    v6 = a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = -1073741637;
    a2->UserBuffer = (void *)(a3 + 4640);
    v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisIovInvalidateBlockCompletion;
    v6[-1].Context = (void *)a3;
    v6[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3840), a2);
  }
  return 3221225494LL;
}
