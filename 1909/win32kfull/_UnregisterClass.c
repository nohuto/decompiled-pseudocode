/*
 * XREFs of _UnregisterClass @ 0x1C0026ABC
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0026990 (NtUserUnregisterClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     _InnerGetClassPtr @ 0x1C0060230 (_InnerGetClassPtr.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall UnregisterClass(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int v6; // esi
  __int64 v7; // r13
  __int64 ClassPtr; // r8
  __int64 v9; // rcx
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a1) < 0 )
      LOWORD(a1) = 0;
    else
      LOWORD(a1) = UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  ClassPtr = InnerGetClassPtr((unsigned __int16)a1, v7 + 344, a2);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr((unsigned __int16)a1, v7 + 352, 0LL);
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
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL));
  return 1LL;
}
