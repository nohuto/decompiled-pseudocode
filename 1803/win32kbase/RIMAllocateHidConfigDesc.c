/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C00EE0A4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00E5F04 (WPP_RECORDER_SF_DD.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00EF58C (RIMFindInputDeviceForConfig.c)
 *     RIMFreeHidDesc @ 0x1C00EF8B0 (RIMFreeHidDesc.c)
 *     RIMGetDeviceParent @ 0x1C00EFA6C (RIMGetDeviceParent.c)
 *     WPP_RECORDER_SF_S @ 0x1C00F08CC (WPP_RECORDER_SF_S.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5)
{
  int v10; // edx
  char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int16 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  if ( !a3 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x23u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
    return 0LL;
  }
  if ( !a4[4] )
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0x13u,
      0x24u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      a4[1],
      *a4);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  if ( !v11 )
  {
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      19,
      37,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      *(_QWORD *)(a2 + 216));
    return 0LL;
  }
  v12 = Win32AllocPoolNonPaged(a4[4], 0x70707352u);
  *((_QWORD *)v11 + 4) = v12;
  if ( !v12 )
  {
    v14 = a4[4];
    v15 = 38;
LABEL_10:
    LODWORD(v19) = v14;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v15,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      v19);
    RIMFreeHidDesc(v11);
    return 0LL;
  }
  v16 = a5;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  v22 = 0;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  v20 = 0;
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  v21 = 0LL;
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  *((_QWORD *)v11 + 2) = a3;
  *((_QWORD *)v11 + 13) = *(_QWORD *)v16;
  *((_DWORD *)v11 + 28) = *(_DWORD *)(v16 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(v13, a2) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x27u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v11, a1, a2, (unsigned int)&v22, (__int64)&v20, (__int64)&v21)
    && v22 )
  {
    v14 = *(_DWORD *)(a1 + 76);
    if ( v20 )
    {
      if ( (v14 & 0x10) == 0 )
      {
        v15 = 40;
        goto LABEL_10;
      }
      *(_DWORD *)(a2 + 184) |= 0x400u;
      v17 = 2LL;
    }
    else
    {
      if ( (v14 & 8) == 0 )
      {
        v15 = 41;
        goto LABEL_10;
      }
      *(_DWORD *)(a2 + 184) |= 0x800u;
      v17 = 3LL;
    }
    v18 = RIMDeliverConfigRequest(a2, v11, 82LL, v17);
    if ( v18 < 0 )
    {
      LODWORD(v19) = v18;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x2Au,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        v19);
    }
  }
  *(_BYTE *)(a2 + 48) = 3;
  return v11;
}
