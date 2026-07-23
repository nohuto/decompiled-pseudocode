/*
 * XREFs of SeQuerySigningPolicy @ 0x14060E5D0
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14075F000 (PspCreateProcess.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SeQuerySigningPolicyWorker @ 0x14060B60C (SeQuerySigningPolicyWorker.c)
 *     SepIsMinTCB @ 0x14060E770 (SepIsMinTCB.c)
 *     RtlRunOnceExecuteOnce @ 0x14060E910 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 v7; // r14
  int IsMinTCB; // ebp
  __int64 v12; // r9
  int SigningPolicyExt; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int (__fastcall *v20)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = RtlRunOnceExecuteOnce(&SeQuerySigningPolicyInit, SepInitQuerySigningPolicyExt, 0LL, 0LL);
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  if ( SeQuerySigningPolicyExtAllowed )
  {
    LOBYTE(v12) = a4;
    SigningPolicyExt = SeQuerySigningPolicyExt(a1, a2, a3, v12, a5, a6, a7);
    IsMinTCB = SigningPolicyExt;
    if ( SigningPolicyExt == -1073741637 )
    {
      if ( SeFailIfExtensionNotSupported )
        KeBugCheckEx(0x29u, 2uLL, 0xFFFFFFFFC00000BBuLL, 0LL, 0LL);
    }
    else if ( SigningPolicyExt >= 0 )
    {
      goto LABEL_9;
    }
  }
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( IsMinTCB < 0 )
  {
    IsMinTCB = SeQuerySigningPolicyWorker(a1, &a2->Length, a3, a4, v7, a5, a6, a7);
    if ( IsMinTCB < 0 )
      return (unsigned int)IsMinTCB;
  }
LABEL_9:
  v15 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else
  {
    v15 = (*a7 & 7u) - 2;
    if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
  }
  if ( IsMinTCB < 0 )
    return (unsigned int)IsMinTCB;
  v16 = 8;
  if ( (*a5 & 0xF) == 8 )
    return (unsigned int)IsMinTCB;
  if ( !qword_14040EE00 )
    return (unsigned int)IsMinTCB;
  LOBYTE(v14) = 8;
  LOBYTE(v15) = *a5;
  if ( !(unsigned int)qword_14040EE00(v15, v14)
    || (SeCiDebugOptions & 4) == 0
    && ((SeCiDebugOptions & 2) == 0 || !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent) )
  {
    return (unsigned int)IsMinTCB;
  }
  if ( !qword_14040EE00 || (LOBYTE(v17) = 8, LOBYTE(v18) = v7, !(unsigned int)qword_14040EE00(v18, v17)) )
  {
    if ( (*a7 & 7) != 0 )
    {
      *a5 = *a5 & 0x30 | 8;
      v20 = (unsigned int (__fastcall *)(__int64, __int64))qword_14040EE00;
      if ( qword_14040EE00 )
      {
        LOBYTE(v18) = 8;
        goto LABEL_33;
      }
LABEL_34:
      *a6 = v16 | *a6 & 0x30;
      return (unsigned int)IsMinTCB;
    }
  }
  v16 = v7 & 0xF;
  *a5 = v7 & 0xF | *a5 & 0x30;
  v20 = (unsigned int (__fastcall *)(__int64, __int64))qword_14040EE00;
  if ( !qword_14040EE00 )
    goto LABEL_34;
  LOBYTE(v18) = v7;
LABEL_33:
  LOBYTE(v17) = *a6;
  if ( !v20(v18, v17) )
    goto LABEL_34;
  return (unsigned int)IsMinTCB;
}
