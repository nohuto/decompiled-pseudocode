/*
 * XREFs of ??_GAllUpViewUriHandler@@UEAAPEAXI@Z @ 0x1802E1B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC (--1CWRLObjectWithSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

AllUpViewUriHandler *__fastcall AllUpViewUriHandler::`scalar deleting destructor'(AllUpViewUriHandler *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 11) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
