/*
 * XREFs of ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800535D0
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800573D4 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180053764 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::CreateInstance(struct IMMDevice *a1, struct IEndpointDevice **a2)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  int v6; // edi
  int v7; // eax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v5 = operator new(0xB8uLL);
      v4 = v5;
      if ( v5 )
      {
        v5[4] = 1;
        *(_QWORD *)v5 = &EndpointDevice::`vftable'{for `IEndpointDevice'};
        *((_QWORD *)v5 + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
        *((_QWORD *)v5 + 3) = 0LL;
        *((_QWORD *)v5 + 6) = 0LL;
        *((_QWORD *)v5 + 7) = 7LL;
        *((_WORD *)v5 + 16) = 0;
        *((_QWORD *)v5 + 10) = 0LL;
        *((_QWORD *)v5 + 11) = 7LL;
        *((_WORD *)v5 + 32) = 0;
        v5[28] = 0;
        *((_QWORD *)v5 + 17) = 0LL;
        *((_QWORD *)v5 + 18) = 7LL;
        *((_WORD *)v5 + 60) = 0;
        *((_QWORD *)v5 + 21) = 0LL;
        *((_QWORD *)v5 + 22) = 7LL;
        *((_WORD *)v5 + 76) = 0;
        v6 = EndpointDevice::Initialize((EndpointDevice *)v5, a1);
        if ( v6 >= 0 )
        {
          v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IEndpointDevice **))v4)(
                 v4,
                 &GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61,
                 a2);
          v6 = 0;
          if ( v7 < 0 )
            v6 = v7;
        }
      }
      else
      {
        v4 = 0LL;
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}
