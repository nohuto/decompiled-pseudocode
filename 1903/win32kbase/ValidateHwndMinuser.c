/*
 * XREFs of ValidateHwndMinuser @ 0x1C0106020
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMFindEntry @ 0x1C0105840 (HMFindEntry.c)
 */

__int64 __fastcall ValidateHwndMinuser(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  char *v5; // rbx
  __int64 v6; // r8
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 CurrentProcessWin32Process; // [rsp+38h] [rbp-20h]

  v9 = a1;
  v1 = 0LL;
  CurrentProcessWin32Process = (unsigned __int64)PsGetCurrentProcessWin32Process(a1);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v8,
    v2,
    v3);
  v5 = HMFindEntry((__int64)&v9, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
  if ( v5 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v8,
      v4,
      v6);
    return *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v5 - (char *)qword_1C0213758) >> 5));
  }
  return v1;
}
