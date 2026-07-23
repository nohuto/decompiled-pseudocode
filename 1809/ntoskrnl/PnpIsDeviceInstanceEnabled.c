/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x1406FF794
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140833710 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FF91C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x140828E98 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // r14d
  __int16 *v6; // r15
  _QWORD *v7; // rax
  void *v8; // r13
  _DWORD *v9; // rdi
  int v10; // eax
  HANDLE v11; // r8
  char v12; // si
  __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  int v17; // eax
  int v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+44h] [rbp-1Ch] BYREF
  int v20; // [rsp+48h] [rbp-18h] BYREF
  __int16 *v21; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+B0h] [rbp+50h]
  int v24; // [rsp+B8h] [rbp+58h] BYREF

  v23 = a3;
  Handle = a1;
  v3 = 0;
  v18 = 0;
  v21 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v8 = v7;
  if ( v7 )
    v9 = *(_DWORD **)(v7[39] + 40LL);
  else
    v9 = 0LL;
  if ( !v9 || (v9[99] & 0x2000) == 0 || (v17 = v9[101], v17 != 22) && v17 != 29 )
  {
    v10 = PnpUnicodeStringToWstr(&v21, 0LL, a2);
    v6 = v21;
    if ( v10 >= 0 )
    {
      v11 = Handle;
      v12 = 1;
      if ( !Handle )
      {
        if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v21, 16, 0, 131097, 0, (__int64)&Handle, 0LL) < 0 )
          goto LABEL_15;
        v11 = Handle;
        v18 = 1;
      }
      v24 = 0;
      v19 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v6,
                  (__int64)v11,
                  11,
                  (__int64)&v20,
                  (__int64)&v24,
                  (__int64)&v19,
                  0) < 0
        || v20 == 4 && v19 == 4 )
      {
        v14 = v24;
      }
      else
      {
        v14 = 0;
        v24 = 0;
      }
      if ( (v14 & 1) != 0 )
      {
        v24 = 1;
      }
      else
      {
        PnpGetDeviceInstanceCsConfigFlags(a2, v13, &v24);
        v12 = v24;
      }
      v15 = v12 & 7;
      LOBYTE(v5) = v15 == 0;
      v3 = v5;
      if ( v15 && v23 && v9 && v9[75] != 769 )
        PnpDisableDevice(v9, 22LL);
      v5 = v18;
    }
  }
LABEL_15:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x55706E50u);
  if ( v5 )
    ZwClose(Handle);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)a2);
  return v3;
}
