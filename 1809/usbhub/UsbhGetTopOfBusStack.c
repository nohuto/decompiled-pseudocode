/*
 * XREFs of UsbhGetTopOfBusStack @ 0x1C001D3F8
 * Callers:
 *     UsbhInitialize @ 0x1C001E1B0 (UsbhInitialize.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C000E810 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

__int64 __fastcall UsbhGetTopOfBusStack(__int64 a1)
{
  volatile __int64 *v2; // rax
  volatile __int64 *v3; // rdi
  NTSTATUS v4; // esi
  __int64 v6; // r9
  _UNICODE_STRING v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&v7.Length = 0LL;
  v2 = (volatile __int64 *)FdoExt(a1);
  v3 = v2;
  if ( (v2[320] & 1) != 0 )
  {
    *(_QWORD *)&v7.Length = *((_QWORD *)v2 + 151);
    UsbhReferenceListAdd(a1, *(__int64 *)&v7.Length, 1918062420);
    ObfReferenceObject(*(PVOID *)&v7.Length);
    v6 = _InterlockedExchange64(v3 + 152, *(__int64 *)&v7.Length);
    Log(a1, 8, 1920091215, v6, *(__int64 *)&v7.Length);
    v4 = 0;
  }
  else
  {
    v4 = UsbhSyncSendInternalIoctl(a1, 0x22000Fu, (unsigned __int64)&v7.Buffer, &v7);
    if ( v4 >= 0 )
    {
      UsbhReferenceListAdd(a1, *(__int64 *)&v7.Length, 1918062420);
      _InterlockedExchange64(v3 + 152, *(__int64 *)&v7.Length);
      ObfDereferenceObject(v7.Buffer);
    }
  }
  Log(a1, 8, 1733313615, v4, *(__int64 *)&v7.Length);
  return (unsigned int)v4;
}
