/*
 * XREFs of PspInitializeProcessSecurity @ 0x14064F9D4
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     ObInitializeFastReference @ 0x14064FBA4 (ObInitializeFastReference.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     SeAssignPrimaryToken @ 0x140749D14 (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x14088A5C0 (PspIdentityBasedJobBreakaway.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // rsi
  PACCESS_TOKEN v15; // r15
  int *v20; // r14
  int SessionId; // eax
  int v22; // r9d
  int v23; // r12d
  int v24; // eax
  signed __int64 v25; // rax
  _DWORD v27[4]; // [rsp+60h] [rbp-20h] BYREF
  PEPROCESS v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a14;
  v15 = 0LL;
  *a14 = 0;
  v20 = v14 + 1;
  v14[1] = 0;
  if ( Process )
  {
    v27[0] = a5;
    v27[1] = a12;
    v27[2] = a6;
    v27[3] = a7;
    v28 = Process;
    v29 = a13;
    SessionId = MmGetSessionId(a2);
    v23 = SeSubProcessToken(
            a2,
            a3,
            (unsigned int)&v30,
            v22 != 0 ? 1 : 3,
            SessionId,
            (__int64)v27,
            a8,
            a9,
            a10,
            a11,
            (__int64)&a14);
    if ( v23 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v30);
      if ( a4 || (_BYTE)a14 )
        *v14 = 1;
      if ( BYTE1(a14) )
      {
        *v20 = 1;
        v24 = 1;
      }
      else
      {
        v24 = *v20;
      }
      if ( !v24 && BYTE2(a14) )
      {
        v15 = PsReferencePrimaryToken(Process);
        v23 = PspIdentityBasedJobBreakaway(v15, v30, v14 + 1);
      }
    }
    if ( *v14
      || (Process[2].UserTime & 0x80000000) != 0
      || (*(_DWORD *)(a2 + 1740) & 0x800000) != 0 && !*(_QWORD *)&Process[2].AddressPolicy )
    {
      v25 = _InterlockedIncrement64(&PsNextSecurityDomain);
    }
    else
    {
      v25 = *(_QWORD *)&Process[2].AddressPolicy;
    }
    *(_QWORD *)(a2 + 2096) = v25;
    *(_QWORD *)(a2 + 2104) = v25;
  }
  else
  {
    ObInitializeFastReference(a2 + 856, 0LL);
    SeAssignPrimaryToken(a2, a3);
    v23 = 0;
  }
  if ( v15 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v15);
  return (unsigned int)v23;
}
