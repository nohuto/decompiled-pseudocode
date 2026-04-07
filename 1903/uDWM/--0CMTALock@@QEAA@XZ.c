/*
 * XREFs of ??0CMTALock@@QEAA@XZ @ 0x18004851C
 * Callers:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800479D4 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x1800483F4 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18003D514 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMTALock *__fastcall CMTALock::CMTALock(CMTALock *this)
{
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CMTALock::`vftable';
  *((_BYTE *)this + 48) = 0;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (unsigned int)(pAptType - 1) <= 1 )
    CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 8));
  return this;
}
