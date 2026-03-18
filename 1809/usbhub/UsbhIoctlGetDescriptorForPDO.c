/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x1C004C26C
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000E5D0 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012320 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C330 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001D39C (UsbhReleaseFdoPnpLock.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0042BD4 (UsbhAcquireFdoPnpLock.c)
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
  _DWORD *v15; // r15
  __int64 v16; // r12
  int v17; // r10d
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  char v20; // al
  _WORD *v21; // rdx
  unsigned __int16 v22; // si
  int v23; // esi
  int v24; // r10d
  int v25; // r8d
  char v26; // al
  unsigned __int16 v27; // r11

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
    v12 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v12, 1195659314, a2, 0LL);
    LODWORD(v13) = -1073741789;
    goto LABEL_64;
  }
  v14 = *(_BYTE *)(a4 + 1);
  if ( v14 != 6 )
  {
    Log(a1, v12, 1195659315, a2, v14);
LABEL_7:
    LODWORD(v13) = -1073741811;
    goto LABEL_64;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_7;
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
    goto LABEL_64;
  }
  v20 = *(_BYTE *)(a4 + 3);
  if ( v20 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v21 = (_WORD *)*((_QWORD *)v15 + 299);
      goto LABEL_20;
    }
    goto LABEL_61;
  }
  if ( v20 == 1 )
  {
    if ( *(_BYTE *)(a4 + 2) )
      goto LABEL_61;
    LOWORD(v23) = *a5;
    if ( *a5 > 0x12u )
      LOWORD(v23) = 18;
    Log(a1, v17, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( (unsigned __int16)v23 <= *(_WORD *)(a4 + 6) && (unsigned __int16)v23 <= *a5 )
    {
      memmove(a6, v15 + 350, (unsigned __int16)v23);
      *a5 = v23;
      Log(a1, 32, 1195659317, (__int64)a6, (unsigned __int16)v23);
LABEL_36:
      LODWORD(v13) = 0;
      goto LABEL_62;
    }
    v25 = 1195659318;
    goto LABEL_59;
  }
  if ( v20 != 15 )
  {
    if ( v20 != 3 )
      goto LABEL_61;
    v26 = *(_BYTE *)(a4 + 2);
    if ( !v26 )
      goto LABEL_61;
    if ( v26 != *((_BYTE *)v15 + 1416) )
      goto LABEL_61;
    if ( !*((_QWORD *)v15 + 267) )
      goto LABEL_61;
    v23 = v15[533];
    if ( !v23 || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_61;
    if ( *(unsigned __int8 *)a5 <= (unsigned __int16)v23 )
      LOWORD(v23) = *(unsigned __int8 *)a5;
    Log(a1, v17, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( (unsigned __int16)v23 <= *(_WORD *)(a4 + 6) && (unsigned __int16)v23 <= *a5 )
    {
      if ( (_WORD)v23 )
        *a6 = v23;
      if ( (unsigned __int16)v23 >= v27 )
        a6[1] = 3;
      if ( (unsigned __int16)v23 > v27 )
      {
        memmove(a6 + 2, *((const void **)v15 + 267), (unsigned __int16)v23 - 2LL);
        v24 = 32;
      }
      *a5 = v23;
      Log(a1, v24, 1195659320, (__int64)a6, (unsigned __int16)v23);
      goto LABEL_36;
    }
    v25 = 1195659321;
LABEL_59:
    Log(a1, v24, v25, (__int64)a6, (unsigned __int16)v23);
LABEL_60:
    *a5 = 0;
    goto LABEL_61;
  }
  if ( !*(_BYTE *)(a4 + 2) )
  {
    v21 = (_WORD *)*((_QWORD *)v15 + 300);
LABEL_20:
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
      goto LABEL_62;
    }
    goto LABEL_60;
  }
LABEL_61:
  LODWORD(v13) = -1073741823;
LABEL_62:
  if ( v16 )
    UsbhDerefPdoDeviceHandle(a1, v16, a3, 0x48446E67u);
LABEL_64:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v13);
  return (unsigned int)v13;
}
