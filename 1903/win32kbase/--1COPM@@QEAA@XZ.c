/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x1C00B43BC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C00B44B0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  __int64 i; // rdi
  void *v3; // rcx
  struct _LOOKASIDE_LIST_EX *v4; // rcx
  void *v5; // rcx
  struct _LOOKASIDE_LIST_EX *v6; // rcx
  void *v7; // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx

  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 9); i = (unsigned int)(i + 1) )
  {
    v8 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 3) + 8 * i);
    if ( v8 )
    {
      (**v8)(v8, 1LL);
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) = 0LL;
    }
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D504F47u);
  v4 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ExDeleteLookasideListEx(v4);
    v5 = (void *)*((_QWORD *)this + 2);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4D504F47u);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    ExDeleteLookasideListEx(v6);
    v7 = (void *)*((_QWORD *)this + 1);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4D504F47u);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteLookasideListEx(*(PLOOKASIDE_LIST_EX *)this);
    if ( *(_QWORD *)this )
      ExFreePoolWithTag(*(PVOID *)this, 0x4D504F47u);
    *(_QWORD *)this = 0LL;
  }
}
