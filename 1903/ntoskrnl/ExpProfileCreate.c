/*
 * XREFs of ExpProfileCreate @ 0x140917914
 * Callers:
 *     NtCreateProfile @ 0x140917FB0 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x140918090 (NtCreateProfileEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     ExIsRestrictedCaller @ 0x1406D2468 (ExIsRestrictedCaller.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall ExpProfileCreate(
        unsigned __int64 a1,
        void *a2,
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
  NTSTATUS result; // eax
  unsigned __int64 v17; // rcx
  char PreviousMode; // di
  __int64 v19; // rcx
  __int64 v20; // rax
  int inserted; // ebx
  _QWORD *v22; // rbx
  int v23; // [rsp+54h] [rbp-174h] BYREF
  volatile void *Address; // [rsp+58h] [rbp-170h]
  PVOID Object; // [rsp+60h] [rbp-168h] BYREF
  __int128 v26; // [rsp+68h] [rbp-160h] BYREF
  _QWORD *v27; // [rsp+78h] [rbp-150h]
  PVOID v28; // [rsp+80h] [rbp-148h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-140h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-130h] BYREF
  _OWORD v31[3]; // [rsp+B0h] [rbp-118h] BYREF
  _DWORD v32[44]; // [rsp+E0h] [rbp-E8h] BYREF

  v27 = (_QWORD *)a1;
  Address = a6;
  v15 = (__int128 *)a10;
  memset(&v32[2], 0, 0xA0uLL);
  v26 = 0uLL;
  memset(v31, 0, sizeof(v31));
  memset(v30, 0, sizeof(v30));
  if ( !Length )
    return -1073741579;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return -1073741811;
  v17 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v17 = a4 >> a5;
  if ( v17 > (unsigned __int64)Length >> 2 )
    return -1073741789;
  if ( a3 + a4 < a4 )
    return -2147483643;
  LODWORD(v30[0]) = a8;
  v23 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *, int *))off_140426798[0])(1LL, 24LL, v30, &v23) < 0
    || v23 != 24
    || !BYTE4(v30[0]) )
  {
    return -1073741637;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v19 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v20 = 16LL * a9;
      if ( v20 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + a10 > 0x7FFFFFFF0000LL || v20 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v32[0] = 1310721;
  memset(&v32[1], 0, 0xA4uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v26 = *v15;
    else
      v26 = *v15;
    if ( !KeVerifyGroupAffinity((__int64)&v26, 0) )
      return -1073741811;
    if ( LOWORD(v32[0]) <= WORD4(v26) )
      LOWORD(v32[0]) = WORD4(v26) + 1;
    *(_QWORD *)&v32[2 * WORD4(v26) + 2] |= v26;
    --a9;
    ++v15;
  }
  if ( a2 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a2,
               0x400u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x66507845u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return -1073741727;
    Object = 0LL;
  }
  if ( ExIsRestrictedCaller(PreviousMode) && a4 && (a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  LODWORD(v31[0]) = 48;
  *((_QWORD *)&v31[0] + 1) = 0LL;
  DWORD2(v31[1]) = 32;
  *(_QWORD *)&v31[1] = 0LL;
  v31[2] = 0LL;
  inserted = ObCreateObject(0, ExProfileObjectType, (int)v31, PreviousMode, 0, 240, 0, 488, &v28);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v22 = v28;
    *(_QWORD *)v28 = Object;
    v22[1] = a3;
    v22[2] = a4;
    v22[3] = Address;
    *((_DWORD *)v22 + 8) = Length;
    *((_DWORD *)v22 + 9) = a5;
    v22[6] = 0LL;
    *((_DWORD *)v22 + 16) = 0;
    *((_DWORD *)v22 + 17) = a8;
    KeCopyAffinityEx((__int64)(v22 + 9), (unsigned __int16 *)v32);
    inserted = ObInsertObject(v22, 0LL, 1u, 0, 0LL, &Handle);
    LODWORD(Address) = inserted;
    if ( inserted >= 0 )
      *v27 = Handle;
  }
  return inserted;
}
