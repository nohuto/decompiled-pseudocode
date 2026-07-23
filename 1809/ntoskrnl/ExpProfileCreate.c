/*
 * XREFs of ExpProfileCreate @ 0x1408DAE8C
 * Callers:
 *     NtCreateProfile @ 0x1408DB4E0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x1408DB5C0 (NtCreateProfileEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpProfileCreate(
        unsigned __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10,
        char a11)
{
  __int128 *v15; // rbx
  __int64 result; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  char PreviousMode; // di
  __int64 v20; // rcx
  __int64 v21; // rax
  int inserted; // ebx
  _QWORD *v23; // rbx
  __int64 Tag; // [rsp+20h] [rbp-1A8h]
  int v25; // [rsp+54h] [rbp-174h] BYREF
  volatile void *Address; // [rsp+58h] [rbp-170h]
  PVOID Object; // [rsp+60h] [rbp-168h] BYREF
  _QWORD *v28; // [rsp+68h] [rbp-160h]
  __int128 v29; // [rsp+70h] [rbp-158h] BYREF
  PVOID v30; // [rsp+80h] [rbp-148h] BYREF
  __int64 v31; // [rsp+88h] [rbp-140h] BYREF
  int v32; // [rsp+98h] [rbp-130h] BYREF
  char v33; // [rsp+9Ch] [rbp-12Ch]
  int v34; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-110h]
  __int64 v36; // [rsp+C0h] [rbp-108h]
  int v37; // [rsp+C8h] [rbp-100h]
  __int128 v38; // [rsp+D0h] [rbp-F8h]
  _DWORD v39[44]; // [rsp+E0h] [rbp-E8h] BYREF

  v28 = (_QWORD *)a1;
  Address = a6;
  v15 = (__int128 *)a10;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v17 = a4 >> a5;
  v18 = v17 + 1;
  if ( !(a4 % (1LL << a5)) )
    v18 = v17;
  if ( v18 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  v32 = a8;
  v25 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))off_140401458[0])(1LL, 24LL, &v32, &v25) < 0
    || v25 != 24
    || !v33 )
  {
    return 3221225659LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v20 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v21 = 16LL * a9;
      if ( v21 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v21 + a10 > 0x7FFFFFFF0000LL || v21 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v39[0] = 1310721;
  memset(&v39[1], 0, 0xA4uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v29 = *v15;
    else
      v29 = *v15;
    if ( !KeVerifyGroupAffinity((__int64)&v29, 0) )
      return 3221225485LL;
    if ( LOWORD(v39[0]) <= WORD4(v29) )
      LOWORD(v39[0]) = WORD4(v29) + 1;
    *(_QWORD *)&v39[2 * WORD4(v29) + 2] |= v29;
    --a9;
    ++v15;
  }
  if ( a2 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               1024,
               (__int64)PsProcessType,
               PreviousMode,
               0x66507845u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    Object = 0LL;
  }
  if ( ExIsRestrictedCaller(PreviousMode) && a4 && (a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  v34 = 48;
  v35 = 0LL;
  v37 = 32;
  v36 = 0LL;
  v38 = 0LL;
  inserted = ObCreateObjectEx(0, ExProfileObjectType, (int)&v34, PreviousMode, Tag, 240, 0, 488, &v30, 0LL);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v23 = v30;
    *(_QWORD *)v30 = Object;
    v23[1] = a3;
    v23[2] = a4;
    v23[3] = Address;
    *((_DWORD *)v23 + 8) = Length;
    *((_DWORD *)v23 + 9) = a5;
    v23[6] = 0LL;
    *((_DWORD *)v23 + 16) = 0;
    *((_DWORD *)v23 + 17) = a8;
    KeCopyAffinityEx((__int64)(v23 + 9), (unsigned __int16 *)v39);
    inserted = ObInsertObjectEx(v23, 0LL, 1LL, 0, 0, 0LL, (unsigned __int64 *)&v31);
    LODWORD(Address) = inserted;
    if ( inserted >= 0 )
      *v28 = v31;
  }
  return (unsigned int)inserted;
}
