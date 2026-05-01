/*
 * XREFs of ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x18037DF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x180357544 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

LightDismissElement *__fastcall LightDismissElement::`scalar deleting destructor'(LightDismissElement *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
