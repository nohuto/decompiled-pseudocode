/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x140610054
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x14060FF80 (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x1406BD710 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140610868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x140610F4C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifySubscription @ 0x1406B8AA8 (ExpWnfNotifySubscription.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v8; // rax
  ACCESS_MASK v9; // r14d
  int v10; // esi
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  struct _KPROCESS *Process; // rax
  int v14; // eax
  int v15; // r12d
  struct _EX_RUNDOWN_REF *v16; // rbx
  BOOL v17; // ecx
  int v18; // r8d
  __int64 v19; // r8
  struct _EX_RUNDOWN_REF *v21; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  struct _KPROCESS *v23; // [rsp+78h] [rbp-60h]
  int v24[2]; // [rsp+80h] [rbp-58h] BYREF
  _DWORD v25[2]; // [rsp+88h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v27[8]; // [rsp+98h] [rbp-40h] BYREF

  v8 = a3;
  P = 0LL;
  *(_QWORD *)v24 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v9 = 0;
  LOBYTE(a3) = a8;
  v10 = ExpCaptureWnfStateName(v8, v27, a3);
  v25[1] = v10;
  if ( v10 >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      v10 = -1073741811;
      goto LABEL_23;
    }
    v11 = v27[0];
    v12 = (v27[0] >> 4) & 3;
    if ( a8 )
    {
      v9 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v9 |= 2u;
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = v27[0];
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v23 = Process;
    v10 = ExpWnfResolveScopeInstance((int)v24, (int)Process, 0, (v27[0] >> 6) & 0xF, 0LL);
    if ( v10 >= 0 )
    {
      v14 = ExpWnfLookupNameInstance(*(_QWORD *)v24, v11, &v21);
      v10 = v14;
      if ( v14 != -1073741772 || (_DWORD)v12 == 3 )
      {
        if ( v14 < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          v10 = ExpWnfCheckCallerAccess(v21[9].Ptr, v9);
          if ( v10 < 0 )
            goto LABEL_23;
        }
        v15 = (int)v23;
      }
      else
      {
        v10 = ExpWnfLookupPermanentName(v11, &P);
        if ( v10 < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          v10 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v9);
          if ( v10 < 0 )
            goto LABEL_23;
        }
        v15 = (int)v23;
        v10 = ExpWnfCreateNameInstance(*(unsigned __int64 *)v24, v11, (__int64)P, v23, &v21);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( v10 < 0 )
          goto LABEL_23;
      }
      v16 = v21;
      v10 = ExpWnfSubscribeNameInstance((_DWORD)v21, v15, a5, a6, a4, a7, a8, a1, a2, (__int64)&v26, (__int64)v25);
      if ( v10 >= 0 )
      {
        v17 = 0;
        if ( a4 != LODWORD(v16[12].Count) )
          v17 = v16[11].Count != 0;
        v18 = v17 | 8;
        if ( HIDWORD(v21[20].Ptr) )
          v18 = v17;
        if ( !v25[0] )
        {
          if ( LODWORD(v21[20].Count) )
            v18 |= 2u;
          else
            v18 |= 4u;
        }
        v19 = a7 & (unsigned int)v18;
        if ( (_DWORD)v19 )
          ExpWnfNotifySubscription(v21, v26, v19, a8 != 0);
      }
    }
  }
LABEL_23:
  if ( v26 )
    ExReleaseRundownProtection_0(v26 + 1);
  if ( v21 )
    ExReleaseRundownProtection_0(v21 + 1);
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v10;
}
