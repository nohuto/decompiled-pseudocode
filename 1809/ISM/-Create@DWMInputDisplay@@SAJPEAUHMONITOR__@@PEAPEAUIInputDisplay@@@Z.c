/*
 * XREFs of ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18008EC0C
 * Callers:
 *     _lambda_522021c458d8d311203f9373ddc44e50_::operator() @ 0x180084018 (_lambda_522021c458d8d311203f9373ddc44e50_--operator().c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x18008AFC0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18008B280 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall DWMInputDisplay::Create(HMONITOR a1, struct IInputDisplay **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 80LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputdisplay.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = malloc(0x28uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x28uLL);
    v8[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 4) = 1;
    *((_DWORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 9) = 0;
    *v8 = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
    v8[1] = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
    v8[3] = a1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 88LL;
    goto LABEL_3;
  }
  *a2 = (struct IInputDisplay *)v8;
  return 0LL;
}
