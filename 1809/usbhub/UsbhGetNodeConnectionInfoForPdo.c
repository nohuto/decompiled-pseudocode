/*
 * XREFs of UsbhGetNodeConnectionInfoForPdo @ 0x1C004BCAC
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000E5D0 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C330 (UsbhDerefPdoDeviceHandle.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhGetDeviceInformationEx @ 0x1C004BB4C (UsbhGetDeviceInformationEx.c)
 */

__int64 __fastcall UsbhGetNodeConnectionInfoForPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        char a7)
{
  int v11; // ebp
  _DWORD *v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rdi
  _DWORD *DeviceInformation; // rax
  _DWORD *v17; // rdi
  char v18; // al
  int v19; // ecx
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-38h]
  _DWORD *v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = -1073741811;
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Au,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  v12 = a5;
  Log(a1, 32, 1735290417, *(unsigned __int16 *)(a3 + 4), (__int64)a5);
  v27 = PdoExt(a4);
  v13 = UsbhRefPdoDeviceHandle(a1, a4, a2, 0x48446E67u);
  v14 = a6;
  v26 = v13;
  v15 = v13;
  memset(v12, 0, *a6);
  if ( v15 )
  {
    DeviceInformation = UsbhGetDeviceInformationEx(a1, &v28, v15);
    v11 = v28;
    v17 = DeviceInformation;
    Log(a1, 32, 1735281713, (__int64)DeviceInformation, v28);
    UsbhDerefPdoDeviceHandle(a1, v26, a2, 0x48446E67u);
    if ( v11 >= 0 )
    {
      *v12 = *(unsigned __int16 *)(a3 + 4);
      *(_OWORD *)(v12 + 1) = *(_OWORD *)(v17 + 3);
      *((_WORD *)v12 + 10) = *((_WORD *)v17 + 14);
      *((_BYTE *)v12 + 22) = *((_BYTE *)v17 + 32);
      if ( a7 )
        v18 = *((_BYTE *)v17 + 40);
      else
        v18 = v17[10] == 0;
      *((_BYTE *)v12 + 23) = v18;
      if ( PdoExt(a4)[280] == 101 )
        *((_BYTE *)v12 + 24) = (v27[355] & 4) != 0;
      v19 = 1;
      *(_WORD *)((char *)v12 + 25) = *((_WORD *)v17 + 17);
      v20 = 0;
      *(_DWORD *)((char *)v12 + 27) = v17[12];
      if ( (unsigned int)(*(_DWORD *)(a3 + 428) - 4) <= 3 )
        v19 = *(_DWORD *)(a3 + 428);
      *(_DWORD *)((char *)v12 + 31) = v19;
      v21 = *(unsigned int *)((char *)v12 + 27);
      v22 = *v14 - 35;
      if ( (_DWORD)v21 )
      {
        do
        {
          if ( v22 < 0xB )
            break;
          v23 = v20;
          v22 -= 11;
          v24 = 11LL * v20++;
          *(_DWORD *)((char *)v12 + v24 + 35) = v17[3 * v23 + 13];
          *(_WORD *)((char *)v12 + v24 + 39) = v17[3 * v23 + 14];
          *((_BYTE *)v12 + v24 + 41) = BYTE2(v17[3 * v23 + 14]);
          *(_DWORD *)((char *)v12 + v24 + 42) = v17[3 * v23 + 15];
          v21 = *(unsigned int *)((char *)v12 + 27);
        }
        while ( v20 < (unsigned int)v21 );
      }
      if ( v20 != (_DWORD)v21 )
        Log(a1, 32, 1735290451, v22, v21);
      *v14 -= v22;
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  else
  {
    Log(a1, 32, 1735290468, *(int *)(a3 + 428), (__int64)v12);
    *v12 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)((char *)v12 + 31) = *(_DWORD *)(a3 + 428);
    *v14 = 35;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Bu,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v11);
  return (unsigned int)v11;
}
