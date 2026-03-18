/*
 * XREFs of CheckUSBFnConfiguration @ 0x1C005D14C
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D84C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C005DD7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C005DDE4 (MyRegQueryString.c)
 */

__int64 __fastcall CheckUSBFnConfiguration(_DWORD *a1, const wchar_t *a2)
{
  __int64 v4; // rax
  SIZE_T v5; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  int String; // eax
  wchar_t *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 146;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x55445246u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    wcscpy_s(PoolWithTag, v5, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
    wcscat_s(v7, v5, a2);
    v10 = MyRegOpenKeyForRead(v9, v7, &Handle);
    v8 = v10;
    if ( v10 >= 0 )
    {
      String = MyRegQueryString(Handle);
      v13 = (wchar_t *)P;
      v8 = String;
      if ( String >= 0 )
      {
        LODWORD(v14) = 0;
        if ( *(_WORD *)P )
        {
          do
          {
            if ( *a1 == 14 )
              break;
            if ( (*a1 & 2) != 0 || _wcsicmp(&v13[(unsigned int)v14], L"MTP") )
            {
              if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v13[(unsigned int)v14], L"IpOverUsb") )
              {
                if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v13[(unsigned int)v14], L"VidStream") )
                  *a1 |= 8u;
              }
              else
              {
                *a1 |= 4u;
              }
            }
            else
            {
              *a1 |= 2u;
            }
            v15 = -1LL;
            do
              ++v15;
            while ( v13[(unsigned int)v14 + v15] );
            v14 = (unsigned int)(v15 + v14 + 1);
          }
          while ( v13[v14] );
        }
      }
      else
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x1Cu,
          (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
          String);
      }
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    else
    {
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        v11,
        0x1Bu,
        (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
        v7,
        v10);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      1u,
      0x1Au,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      -1073741670);
  }
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
