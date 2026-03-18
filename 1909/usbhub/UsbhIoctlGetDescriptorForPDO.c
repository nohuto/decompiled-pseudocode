/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x1C004DD00
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012960 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001CE30 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DDAC (UsbhReleaseFdoPnpLock.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0044258 (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        char *a6,
        char a7,
        char a8)
{
  int v12; // r10d
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  _DWORD *v15; // r14
  __int64 v16; // r15
  int v17; // r10d
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  char v20; // al
  _WORD *v21; // rdx
  unsigned __int16 v22; // bp
  unsigned __int16 v23; // bp
  int v24; // r10d
  __int64 v25; // r9
  int v26; // r8d
  int v27; // r8d
  char v28; // al
  __int64 v30; // [rsp+20h] [rbp-48h]

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids);
    v12 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v12, 1195659314, a2, 0LL);
    LODWORD(v13) = -1073741789;
    goto LABEL_59;
  }
  v14 = *(_BYTE *)(a4 + 1);
  if ( v14 != 6 )
  {
    Log(a1, v12, 1195659315, a2, v14);
LABEL_8:
    LODWORD(v13) = -1073741811;
    goto LABEL_59;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_8;
  }
  v15 = PdoExt(a2);
  v16 = UsbhRefPdoDeviceHandle(a1, a2, a3, 0x48446E67u);
  Log(a1, 32, 1919304753, 0LL, v16);
  if ( v16 && !a8 )
  {
    if ( a7 )
    {
      v18 = FdoExt(a1);
      UsbhReleaseFdoPnpLock(a1, (__int64)(v18 + 434));
    }
    v13 = (int)UsbhSyncSendCommandToDevice(a1, a2, (_BYTE *)a4, (__int64)a6, a5);
    UsbhDerefPdoDeviceHandle(a1, v16, a3, 0x48446E67u);
    if ( a7 )
    {
      v19 = FdoExt(a1);
      UsbhAcquireFdoPnpLock(a1, (__int64)(v19 + 434), 11, -267583477, 0);
    }
    Log(a1, 32, 1195659316, v13, (int)a5);
    goto LABEL_59;
  }
  v20 = *(_BYTE *)(a4 + 3);
  if ( v20 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v21 = (_WORD *)*((_QWORD *)v15 + 299);
      goto LABEL_21;
    }
    goto LABEL_56;
  }
  if ( v20 == 1 )
  {
    if ( *(_BYTE *)(a4 + 2) )
      goto LABEL_56;
    v23 = *a5;
    if ( *a5 > 0x12u )
      v23 = 18;
    Log(a1, v17, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v23 <= *(_WORD *)(a4 + 6) && v23 <= *a5 )
    {
      memmove(a6, v15 + 350, v23);
      v25 = (__int64)a6;
      v26 = 1195659317;
      v30 = v23;
LABEL_37:
      *a5 = v23;
      Log(a1, 32, v26, v25, v30);
      LODWORD(v13) = 0;
      goto LABEL_57;
    }
    v27 = 1195659318;
    goto LABEL_54;
  }
  if ( v20 != 15 )
  {
    if ( v20 != 3 )
      goto LABEL_56;
    v28 = *(_BYTE *)(a4 + 2);
    if ( !v28 || v28 != *((_BYTE *)v15 + 1416) || !*((_QWORD *)v15 + 267) || !v15[533] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_56;
    v23 = *((_WORD *)v15 + 1066);
    if ( *(unsigned __int8 *)a5 <= v23 )
      v23 = *(unsigned __int8 *)a5;
    Log(a1, v17, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v23 <= *(_WORD *)(a4 + 6) && v23 <= *a5 )
    {
      *a6 = v23;
      a6[1] = 3;
      memmove(a6 + 2, *((const void **)v15 + 267), (unsigned int)v15[533] - 2LL);
      v25 = (__int64)a6;
      v30 = v23;
      v26 = 1195659320;
      goto LABEL_37;
    }
    v27 = 1195659321;
LABEL_54:
    Log(a1, v24, v27, (__int64)a6, v23);
LABEL_55:
    *a5 = 0;
    goto LABEL_56;
  }
  if ( !*(_BYTE *)(a4 + 2) )
  {
    v21 = (_WORD *)*((_QWORD *)v15 + 300);
LABEL_21:
    if ( v21 )
    {
      v22 = v21[1];
      if ( *a5 <= v22 )
        v22 = *a5;
      if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 && v22 )
      {
        memmove(a6, v21, v22);
        LODWORD(v13) = 0;
      }
      else
      {
        LODWORD(v13) = -1073741823;
        v22 = 0;
      }
      *a5 = v22;
      goto LABEL_57;
    }
    goto LABEL_55;
  }
LABEL_56:
  LODWORD(v13) = -1073741823;
LABEL_57:
  if ( v16 )
    UsbhDerefPdoDeviceHandle(a1, v16, a3, 0x48446E67u);
LABEL_59:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v13);
  return (unsigned int)v13;
}
