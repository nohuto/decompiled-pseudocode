/*
 * XREFs of ??1EndpointDevice@@MEAA@XZ @ 0x180147200
 * Callers:
 *     ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x1801473C0 (--_GEndpointDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall EndpointDevice::~EndpointDevice(EndpointDevice *this)
{
  unsigned __int64 v2; // rdx
  struct std::nothrow_t *v3; // rdx
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  struct std::nothrow_t *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  struct std::nothrow_t *v12; // rdx
  void *v13; // rcx
  __int64 v14; // rcx
  struct std::nothrow_t *v15; // [rsp+50h] [rbp+20h] BYREF
  void *v16; // [rsp+58h] [rbp+28h] BYREF

  *(_QWORD *)this = &EndpointDevice::`vftable'{for `IEndpointDevice'};
  *((_QWORD *)this + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 22);
  if ( v2 >= 8 )
  {
    v3 = (struct std::nothrow_t *)(2 * v2 + 2);
    v15 = v3;
    v4 = (void *)*((_QWORD *)this + 19);
    v16 = v4;
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
      v3 = v15;
      v4 = v16;
    }
    operator delete(v4, v3);
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 7LL;
  *((_WORD *)this + 76) = 0;
  v5 = *((_QWORD *)this + 18);
  if ( v5 >= 8 )
  {
    v6 = (struct std::nothrow_t *)(2 * v5 + 2);
    v15 = v6;
    v7 = (void *)*((_QWORD *)this + 15);
    v16 = v7;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
      v6 = v15;
      v7 = v16;
    }
    operator delete(v7, v6);
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_WORD *)this + 60) = 0;
  v8 = *((_QWORD *)this + 11);
  if ( v8 >= 8 )
  {
    v9 = (struct std::nothrow_t *)(2 * v8 + 2);
    v15 = v9;
    v10 = (void *)*((_QWORD *)this + 8);
    v16 = v10;
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
      v9 = v15;
      v10 = v16;
    }
    operator delete(v10, v9);
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 7LL;
  *((_WORD *)this + 32) = 0;
  v11 = *((_QWORD *)this + 7);
  if ( v11 >= 8 )
  {
    v12 = (struct std::nothrow_t *)(2 * v11 + 2);
    v15 = v12;
    v13 = (void *)*((_QWORD *)this + 4);
    v16 = v13;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, (unsigned __int64 *)&v15);
      v12 = v15;
      v13 = v16;
    }
    operator delete(v13, v12);
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 7LL;
  *((_WORD *)this + 16) = 0;
  v14 = *((_QWORD *)this + 3);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
