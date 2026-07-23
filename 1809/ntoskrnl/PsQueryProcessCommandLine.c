/*
 * XREFs of PsQueryProcessCommandLine @ 0x14012A330
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // esi
  unsigned __int16 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-D8h]
  int v19; // [rsp+48h] [rbp-D0h]
  char v20; // [rsp+50h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+80h] [rbp-98h]
  __int64 v22; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v23[48]; // [rsp+A0h] [rbp-78h] BYREF

  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    v20 = 0;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v23);
    v8 = 0LL;
    v9 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v9 )
      v8 = *v9;
    if ( v8 )
    {
      v14 = *(_QWORD *)(*(unsigned int *)(v8 + 16) + 0x40LL);
      v19 = v14;
      v13 = WORD1(v14);
      v7 = HIDWORD(v14);
      v20 = BYTE4(v14);
      v12 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter1 + 1016);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32) + 112LL;
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v19 = *(_DWORD *)v11;
        v7 = *(_QWORD *)(v11 + 8);
        v20 = v7;
        v12 = 0;
        v13 = HIWORD(*(_DWORD *)v11);
        LOWORD(v14) = *(_DWORD *)v11;
      }
      else
      {
        v12 = -1073741275;
        v13 = 0;
        LOWORD(v14) = 0;
      }
    }
    if ( HIWORD(v19) )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v7 + v13;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    KiUnstackDetachProcess((__int64)v23, 0LL);
    if ( v12 >= 0 )
    {
      if ( !(_WORD)v14 || (unsigned __int16)v14 > v13 || (v19 & 1) != 0 || (v19 & 0x10000) != 0 || !v7 )
      {
        v12 = -1073741275;
      }
      else
      {
        v16 = v13 + 16;
        if ( a5 )
          *a5 = v16;
        if ( a3 < v16 )
        {
          v12 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v14;
          *(_WORD *)(a2 + 2) = v13;
          if ( v13 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v12 = MmCopyVirtualMemory(BugCheckParameter1, HIWORD(v19), a4, (__int64)&v22);
          if ( v12 >= 0 )
            v12 = 0;
        }
      }
    }
  }
  else
  {
    v12 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v12;
}
