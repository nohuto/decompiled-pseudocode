/*
 * XREFs of PsQueryProcessCommandLine @ 0x14012CA00
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int16 v12; // r14
  __int64 v13; // rbx
  int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-D8h]
  int v19; // [rsp+48h] [rbp-D0h]
  char v20; // [rsp+50h] [rbp-C8h]
  __int64 v21; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v22[48]; // [rsp+A0h] [rbp-78h] BYREF

  memset(v22, 0, sizeof(v22));
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    v20 = 0;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v22);
    v8 = 0LL;
    v9 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v9 )
      v8 = *v9;
    if ( v8 )
    {
      v13 = *(_QWORD *)(*(unsigned int *)(v8 + 16) + 0x40LL);
      v19 = v13;
      v12 = WORD1(v13);
      v7 = HIDWORD(v13);
      v20 = BYTE4(v13);
      v14 = 0;
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
        v12 = HIWORD(*(_DWORD *)v11);
        LOWORD(v13) = *(_DWORD *)v11;
        v14 = 0;
      }
      else
      {
        v14 = -1073741275;
        v12 = 0;
        LOWORD(v13) = 0;
      }
    }
    if ( HIWORD(v19) )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v7 + v12;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
    if ( v14 >= 0 )
    {
      if ( !(_WORD)v13 || (unsigned __int16)v13 > v12 || (v19 & 1) != 0 || (v19 & 0x10000) != 0 || !v7 )
      {
        v14 = -1073741275;
      }
      else
      {
        v16 = v12 + 16;
        if ( a5 )
          *a5 = v16;
        if ( a3 < v16 )
        {
          v14 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v13;
          *(_WORD *)(a2 + 2) = v12;
          if ( v12 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v14 = MmCopyVirtualMemory(BugCheckParameter1, HIWORD(v19), a4, (__int64)&v21);
          if ( v14 >= 0 )
            v14 = 0;
        }
      }
    }
  }
  else
  {
    v14 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  return (unsigned int)v14;
}
