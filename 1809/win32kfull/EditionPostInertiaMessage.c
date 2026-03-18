/*
 * XREFs of EditionPostInertiaMessage @ 0x1C01CEC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     QueryInertiaInfo @ 0x1C0226920 (QueryInertiaInfo.c)
 *     zzzPostInertiaMessage @ 0x1C0226BCC (zzzPostInertiaMessage.c)
 */

__int64 __fastcall EditionPostInertiaMessage(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 InertiaInfo; // rax
  char v8; // [rsp+48h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 1 )
  {
    InertiaInfo = QueryInertiaInfo(v5, *(_QWORD *)(a2 + 48), 0LL);
    if ( InertiaInfo )
    {
      if ( (*(_DWORD *)(InertiaInfo + 136) & 0x10) == 0 )
        zzzPostInertiaMessage(a3, InertiaInfo, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  return 1LL;
}
