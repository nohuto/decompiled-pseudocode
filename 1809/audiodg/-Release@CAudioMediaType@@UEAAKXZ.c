/*
 * XREFs of ?Release@CAudioMediaType@@UEAAKXZ @ 0x140015540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001B8B0 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioMediaType::Release(CAudioMediaType *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &CAudioMediaType::`vftable';
    operator delete(*((void **)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    operator delete(this);
  }
  return v2;
}
