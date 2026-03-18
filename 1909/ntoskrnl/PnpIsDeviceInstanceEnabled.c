/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x140724EEC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086C5C0 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDF10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF910 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140725050 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x140861764 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  __int16 *v4; // rsi
  int v6; // r12d
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  void *v9; // r14
  _DWORD *v10; // rdi
  int v11; // eax
  HANDLE v12; // r8
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  int v17; // eax
  int v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+44h] [rbp-Ch] BYREF
  __int16 *v20; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v4 = 0LL;
  v20 = 0LL;
  v6 = 0;
  v7 = 1;
  v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v9 = v8;
  if ( v8 )
    v10 = *(_DWORD **)(v8[39] + 40LL);
  else
    v10 = 0LL;
  if ( v10 )
  {
    if ( (v10[99] & 0x2000) != 0 )
    {
      v17 = v10[101];
      if ( v17 == 22 || v17 == 29 )
        goto LABEL_22;
    }
  }
  v11 = PnpUnicodeStringToWstr(&v20, 0LL, a2);
  v4 = v20;
  if ( v11 < 0 )
    goto LABEL_22;
  v12 = Handle;
  if ( !Handle )
  {
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v12 = Handle;
      v6 = 1;
      goto LABEL_7;
    }
LABEL_22:
    v7 = 0;
    goto LABEL_14;
  }
LABEL_7:
  v22 = 0;
  v18 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v4,
              (__int64)v12,
              11,
              (__int64)&v19,
              (__int64)&v22,
              (__int64)&v18,
              0) < 0
    || v19 == 4 && v18 == 4 )
  {
    v14 = v22;
  }
  else
  {
    v14 = 0;
    v22 = 0;
  }
  if ( (v14 & 1) != 0 )
  {
    v15 = 1;
    v22 = 1;
  }
  else
  {
    PnpGetDeviceInstanceCsConfigFlags(a2, v13, &v22);
    v15 = v22;
  }
  if ( (v15 & 7) != 0 )
  {
    v7 = 0;
    if ( a3 )
    {
      if ( v10 && v10[75] != 769 )
        PnpDisableDevice(v10, 22LL);
    }
  }
LABEL_14:
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x55706E50u);
  if ( v6 )
    ZwClose(Handle);
  if ( v4 )
    PnpUnicodeStringToWstrFree(v4, (__int64)a2);
  return v7;
}
