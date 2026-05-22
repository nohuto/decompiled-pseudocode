/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x1800A4748
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180098E40 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(HeatDeviceCollection *this, int a2, _DWORD *a3)
{
  __int64 v5; // rdx
  int Device; // eax
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp-40h]
  int v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+54h] [rbp-2Ch]
  int v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+5Ch] [rbp-24h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v23; // [rsp+B0h] [rbp+30h] BYREF
  struct RIMDevice *v24; // [rsp+B8h] [rbp+38h] BYREF

  v24 = 0LL;
  v23 = 0;
  if ( !a3 )
  {
    v5 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v24, 0LL);
  v9 = Device;
  if ( Device >= 0 )
  {
    switch ( *a3 )
    {
      case 1:
        if ( a3[2] != 1 )
        {
          v5 = 233LL;
          goto LABEL_3;
        }
        v13 = RIMDeviceIoControl(
                *((_QWORD *)this + 10),
                *((_QWORD *)v24 + 2),
                (unsigned int)a3[4],
                *((_QWORD *)a3 + 3),
                a3[8],
                *((_QWORD *)a3 + 5),
                a3[12],
                &v23,
                v8 & v15);
        v14 = (_DWORD *)*((_QWORD *)a3 + 7);
        v12 = v13;
        if ( v14 )
          *v14 = v23;
        break;
      case 2:
        **((_QWORD **)a3 + 1) = *((_QWORD *)v24 + 2);
        v12 = 0;
        break;
      case 3:
        memset_0(&v16, 0, 0x28uLL);
        v12 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v24 + 2), &v16);
        if ( v12 >= 0 )
        {
          **((_QWORD **)a3 + 1) = v20;
          *(_DWORD *)(*((_QWORD *)a3 + 1) + 8LL) = v21;
        }
        break;
      case 4:
        v10 = a3[4];
        v17 &= v8;
        v19 &= v8;
        v11 = *((_QWORD *)this + 10);
        v18 = v10;
        v20 = *((_QWORD *)a3 + 1);
        v21 = 0LL;
        v16 = 4;
        v12 = RIMGetDeviceProperties(v11, *((_QWORD *)v24 + 2), &v16);
        if ( v12 >= 0 )
          a3[4] = v18;
        break;
      default:
        v5 = 289LL;
        goto LABEL_3;
    }
    a3[16] = v12;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v9;
  }
}
