/*
 * XREFs of ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E6F78
 * Callers:
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800E7550 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060770 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBF20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  struct std::nothrow_t *v5; // rdx
  void *v6; // rcx
  struct std::nothrow_t *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  `eh vector destructor iterator'(
    (char *)this + 88,
    24LL,
    4LL,
    (void (*)(void *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v2 = (__int64 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 9);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 8);
    }
    v5 = (struct std::nothrow_t *)((*((_QWORD *)this + 10) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = v5;
    v8 = v2;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, (unsigned __int64 *)&v7);
      v5 = v7;
      v2 = (__int64 *)v8;
    }
    operator delete(v2, v5);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
    CoTaskMemFree(v6);
  *((_DWORD *)this + 3) = -1073741823;
}
