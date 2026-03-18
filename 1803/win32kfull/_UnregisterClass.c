/*
 * XREFs of _UnregisterClass @ 0x1C0030D3C
 * Callers:
 *     NtUserUnregisterClass @ 0x1C00EAD40 (NtUserUnregisterClass.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     _InnerGetClassPtr @ 0x1C0030F30 (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall UnregisterClass(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, _QWORD *a3)
{
  int v6; // esi
  __int64 v7; // r13
  struct _CALLPROCDATA ***ClassPtr; // r8
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
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  ClassPtr = (struct _CALLPROCDATA ***)InnerGetClassPtr((unsigned __int16)pszSrc, v7 + 344, a2);
  if ( !ClassPtr )
  {
    ClassPtr = (struct _CALLPROCDATA ***)InnerGetClassPtr((unsigned __int16)pszSrc, v7 + 352, 0LL);
    if ( !ClassPtr )
    {
      v9 = 1411LL;
LABEL_8:
      UserSetLastError(v9);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *((_DWORD *)*ClassPtr + 18) )
  {
    v9 = 1412LL;
    goto LABEL_8;
  }
  *a3 = *((_QWORD *)(*ClassPtr)[1] + 2);
  a3[1] = *((_QWORD *)(*ClassPtr)[1] + 3);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), ClassPtr);
  return 1LL;
}
