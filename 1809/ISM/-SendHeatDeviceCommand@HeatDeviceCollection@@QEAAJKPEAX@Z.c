/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x180067AE0
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(
        HeatDeviceCollection *this,
        int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v6; // rdx
  int DeviceId; // eax
  unsigned int v9; // edi
  int v10; // r8d
  int v11; // eax
  _DWORD *v12; // rcx
  _BYTE v13[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v17; // [rsp+B0h] [rbp+30h] BYREF
  struct RIMDevice *v18; // [rsp+B8h] [rbp+38h] BYREF

  v18 = 0LL;
  v17 = 0;
  if ( !a3 )
  {
    v6 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v18, a4);
  v9 = DeviceId;
  if ( DeviceId >= 0 )
  {
    switch ( *a3 )
    {
      case 1:
        if ( a3[2] != 1 )
        {
          v6 = 233LL;
          goto LABEL_3;
        }
        v11 = RIMDeviceIoControl(
                *((_QWORD *)this + 10),
                *((_QWORD *)v18 + 2),
                (unsigned int)a3[4],
                *((_QWORD *)a3 + 3),
                a3[8],
                *((_QWORD *)a3 + 5),
                a3[12],
                &v17,
                0);
        v12 = (_DWORD *)*((_QWORD *)a3 + 7);
        v10 = v11;
        if ( v12 )
          *v12 = v17;
        break;
      case 2:
        v10 = 0;
        **((_QWORD **)a3 + 1) = *((_QWORD *)v18 + 2);
        break;
      case 3:
        memset_0(v13, 0, 0x28uLL);
        v10 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v18 + 2), v13);
        if ( v10 >= 0 )
        {
          **((_QWORD **)a3 + 1) = v14;
          *(_DWORD *)(*((_QWORD *)a3 + 1) + 8LL) = v15;
        }
        break;
      default:
        v6 = 269LL;
        goto LABEL_3;
    }
    a3[16] = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    return v9;
  }
}
