/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C00742F0
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C00740F0 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00743B0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0074EE0 (HKLtoPKL.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C017E28C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbp
  struct tagKL *result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagKL *v11; // rbx
  __int64 v12; // rbx
  char v13[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  struct tagKL *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v4 = gptiCurrent;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v11 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v14 = *((_QWORD *)v4 + 51);
    *((_QWORD *)v4 + 51) = &v14;
    v15 = v11;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v13,
      v9,
      v10);
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v12 = xxxInternalActivateKeyboardLayout(a1, v11, a3, a4);
    ThreadUnlock1();
    return (struct tagKL *)v12;
  }
  return result;
}
