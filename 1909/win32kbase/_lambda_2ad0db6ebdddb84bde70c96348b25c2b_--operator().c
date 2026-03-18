/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B3464
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B2884 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C007343C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     DestroyKL @ 0x1C00B7334 (DestroyKL.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD *v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v3[2] != v3 )
  {
    do
    {
      v8 = (_QWORD *)v3[2];
      DestroyKL(v3);
      v3 = v8;
    }
    while ( (_QWORD *)v8[2] != v8 );
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v9,
    a2,
    a3);
  if ( (*((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 25) & 1) == 0 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v9,
      v5,
      v6);
    HMMarkObjectDestroyWorker((_DWORD *)a2);
  }
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlock(&v10);
  if ( result )
    return DestroyKL(v3);
  return result;
}
