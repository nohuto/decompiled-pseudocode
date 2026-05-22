/*
 * XREFs of ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x180014F9C
 * Callers:
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180006F30 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     _lambda_a12a5617751b69e72fd80724b2c16071_::operator() @ 0x1800BB284 (_lambda_a12a5617751b69e72fd80724b2c16071_--operator().c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800C2DA0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DWMInputDisplay::Create(HMONITOR a1, struct IInputDisplay **a2)
{
  _QWORD *v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = RefCountedObject::operator new(0x28uLL);
    if ( v4 )
    {
      v4[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *((_DWORD *)v4 + 8) = 0;
      *((_DWORD *)v4 + 9) = 0;
      *v4 = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
      v4[1] = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
      v4[3] = a1;
      *a2 = (struct IInputDisplay *)v4;
      return 0LL;
    }
    v6 = -2147024882;
    v7 = 88LL;
  }
  else
  {
    v6 = -2147024809;
    v7 = 80LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputdisplay.cpp",
    (const char *)v6);
  return v6;
}
