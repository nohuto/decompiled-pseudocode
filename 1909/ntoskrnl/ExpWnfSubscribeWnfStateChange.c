/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x140655464
 * Callers:
 *     ExSubscribeWnfStateChange @ 0x140652D70 (ExSubscribeWnfStateChange.c)
 *     NtSubscribeWnfStateChange @ 0x140655390 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140655C90 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140655D08 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x14065637C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x140656614 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifySubscription @ 0x1406D97B8 (ExpWnfNotifySubscription.c)
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
  char v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // r13d
  struct _KPROCESS *Process; // rax
  int v16; // eax
  int v17; // r15d
  struct _EX_RUNDOWN_REF *v18; // rbx
  BOOL v19; // ecx
  int v20; // r8d
  __int64 v21; // r8
  PVOID v23; // r14
  struct _EX_RUNDOWN_REF *v24; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  struct _KPROCESS *v26; // [rsp+78h] [rbp-60h]
  int v27[2]; // [rsp+80h] [rbp-58h] BYREF
  _DWORD v28[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+98h] [rbp-40h] BYREF

  v8 = a3;
  v29 = 0LL;
  P = 0LL;
  *(_QWORD *)v27 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v9 = 0;
  LOBYTE(a3) = a8;
  v10 = ExpCaptureWnfStateName(v8, &v29, a3);
  v28[1] = v10;
  if ( v10 >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      v10 = -1073741811;
      goto LABEL_24;
    }
    v12 = v29;
    v13 = (v29 >> 4) & 3;
    if ( v11 )
    {
      v14 = 0;
      v9 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v9 |= 2u;
    }
    else
    {
      v14 = 1;
    }
    if ( v11 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v12 = v29;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v26 = Process;
    v10 = ExpWnfResolveScopeInstance((int)v27, (int)Process, 0, (v29 >> 6) & 0xF, 0LL);
    if ( v10 >= 0 )
    {
      v16 = ExpWnfLookupNameInstance(*(_QWORD *)v27, v12, &v24);
      v10 = v16;
      if ( v16 != -1073741772 || (_DWORD)v13 == 3 )
      {
        if ( v16 < 0 )
          goto LABEL_24;
        if ( !v14 )
        {
          v10 = ExpWnfCheckCallerAccess(v24[9].Ptr, v9);
          if ( v10 < 0 )
            goto LABEL_24;
        }
        v17 = (int)v26;
      }
      else
      {
        v10 = ExpWnfLookupPermanentName(v12, &P);
        if ( v10 < 0 )
          goto LABEL_24;
        if ( !v14 )
        {
          v10 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v9);
          if ( v10 < 0 )
            goto LABEL_24;
        }
        v17 = (int)v26;
        v23 = P;
        v10 = ExpWnfCreateNameInstance(*(unsigned __int64 *)v27, v12, (__int64)P, v26, &v24);
        ExFreePoolWithTag(v23, 0x20666E57u);
        P = 0LL;
        if ( v10 < 0 )
          goto LABEL_24;
      }
      v18 = v24;
      v10 = ExpWnfSubscribeNameInstance((_DWORD)v24, v17, a5, a6, a4, a7, a8, a1, a2, (__int64)&v30, (__int64)v28);
      if ( v10 >= 0 )
      {
        v19 = 0;
        if ( a4 != LODWORD(v18[12].Count) )
          v19 = v18[11].Count != 0;
        v20 = v19 | 8;
        if ( HIDWORD(v24[20].Ptr) )
          v20 = v19;
        if ( !v28[0] )
        {
          if ( LODWORD(v24[20].Count) )
            v20 |= 2u;
          else
            v20 |= 4u;
        }
        v21 = a7 & (unsigned int)v20;
        if ( (_DWORD)v21 )
          ExpWnfNotifySubscription(v24, v30, v21, a8 != 0);
      }
    }
  }
LABEL_24:
  if ( v30 )
    ExReleaseRundownProtection_0(v30 + 1);
  if ( v24 )
    ExReleaseRundownProtection_0(v24 + 1);
  if ( *(_QWORD *)v27 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v10;
}
