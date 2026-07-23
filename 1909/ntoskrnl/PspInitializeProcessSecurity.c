/*
 * XREFs of PspInitializeProcessSecurity @ 0x1406853A0
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     ObInitializeFastReference @ 0x14068556C (ObInitializeFastReference.c)
 *     SeAssignPrimaryToken @ 0x14074AEAC (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x1408C6B80 (PspIdentityBasedJobBreakaway.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // rsi
  PACCESS_TOKEN v15; // r15
  int *v19; // r14
  int SessionId; // eax
  int v22; // r9d
  int v23; // r12d
  int v24; // eax
  signed __int64 v25; // rax
  _DWORD v27[4]; // [rsp+60h] [rbp-20h] BYREF
  PEPROCESS v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int16 v30; // [rsp+B0h] [rbp+30h] BYREF
  char v31; // [rsp+B2h] [rbp+32h]

  v14 = a14;
  v15 = 0LL;
  v30 = 0;
  v31 = 0;
  *a14 = 0;
  v19 = v14 + 1;
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
            (PERESOURCE **)&a14,
            v22 != 0 ? 1 : 3,
            SessionId,
            (__int64)v27,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v30);
    if ( v23 >= 0 )
    {
      ObInitializeFastReference(a2 + 864, a14);
      if ( a4 || (_BYTE)v30 )
        *v14 = 1;
      if ( HIBYTE(v30) )
      {
        *v19 = 1;
        v24 = 1;
      }
      else
      {
        v24 = *v19;
      }
      if ( !v24 && v31 )
      {
        v15 = PsReferencePrimaryToken(Process);
        v23 = PspIdentityBasedJobBreakaway(v15, a14, v14 + 1);
      }
    }
    if ( *v14
      || *(int *)&Process[2].Spare2[7] < 0
      || (*(_DWORD *)(a2 + 1788) & 0x800000) != 0 && !*(_QWORD *)&Process[2].Spare2[23] )
    {
      v25 = _InterlockedIncrement64(&PsNextSecurityDomain);
    }
    else
    {
      v25 = *(_QWORD *)&Process[2].Spare2[23];
    }
    *(_QWORD *)(a2 + 2144) = v25;
    *(_QWORD *)(a2 + 2152) = v25;
  }
  else
  {
    ObInitializeFastReference(a2 + 864, 0LL);
    SeAssignPrimaryToken(a2, a3);
    v23 = 0;
  }
  if ( v15 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v15);
  return (unsigned int)v23;
}
