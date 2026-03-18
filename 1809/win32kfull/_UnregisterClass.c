/*
 * XREFs of _UnregisterClass @ 0x1C0022334
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0023620 (NtUserUnregisterClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C0022530 (_InnerGetClassPtr.c)
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall UnregisterClass(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, _QWORD *a3)
{
  int v6; // esi
  __int64 v7; // r13
  __int64 ClassPtr; // r8
  __int64 v9; // rcx
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  if ( ((unsigned __int64)pszSrc & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, pszSrc) < 0 )
      LOWORD(pszSrc) = 0;
    else
      LOWORD(pszSrc) = UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  v7 = *(_QWORD *)(gptiCurrent + 424LL);
  ClassPtr = InnerGetClassPtr((unsigned __int16)pszSrc, v7 + 352, a2);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr((unsigned __int16)pszSrc, v7 + 360, 0LL);
    if ( !ClassPtr )
    {
      v9 = 1411LL;
LABEL_8:
      UserSetLastError(v9);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)ClassPtr + 72LL) )
  {
    v9 = 1412LL;
    goto LABEL_8;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)ClassPtr + 8LL) + 16LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)ClassPtr + 8LL) + 24LL);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
  return 1LL;
}
