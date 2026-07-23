/*
 * XREFs of KiLockServiceTable @ 0x14017A9A0
 * Callers:
 *     KeCompactServiceTable @ 0x14017A928 (KeCompactServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 *     KeExitRetpoline @ 0x1400FF0D8 (KeExitRetpoline.c)
 *     RtlLookupExceptionHandler @ 0x14013B3AC (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1401AA168 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x1409ED414 (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x140A201F4 (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  __int64 v9; // r11
  __int64 CallersAddress; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned int *v14; // rcx
  int v15; // edx
  int v16; // r10d
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  unsigned int i; // ecx
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v22; // [rsp+48h] [rbp-30h]
  unsigned int *v23; // [rsp+50h] [rbp-28h]
  unsigned int *v24; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+20h] BYREF

  if ( a4 )
    KeExitRetpoline();
  else
    _mm_lfence();
  result = KiLockExtendedServiceTable(BugCheckParameter1);
  if ( !a4 )
  {
    _mm_lfence();
    LOBYTE(v7) = 1;
    v8 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, v7, 3LL, (__int64)&v25, &v21);
    v9 = v21;
    if ( v8 < 0 )
      v9 = 0LL;
    v21 = v9;
    if ( !v9 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v12 = v25 / 0xCuLL;
    if ( !(_DWORD)v12 )
      goto LABEL_38;
    v13 = CallersAddress - 0x140000000LL;
    v14 = (unsigned int *)(v11 + 12LL * (unsigned int)(v12 - 1));
    v22 = v14;
    if ( v13 < *v14 )
    {
      v15 = 0;
      v12 = (unsigned int)(v12 - 2);
      while ( (int)v12 >= v15 )
      {
        v16 = ((int)v12 + v15) >> 1;
        v14 = (unsigned int *)(v11 + 12LL * v16);
        v22 = v14;
        if ( v13 >= *v14 )
        {
          if ( v13 < v14[3] )
            break;
          v15 = v16 + 1;
        }
        else
        {
          v12 = (unsigned int)(v16 - 1);
        }
      }
    }
    if ( v13 < *v14 || v13 >= v14[1] )
      v14 = 0LL;
    if ( !v14 )
LABEL_38:
      KeBugCheck(0x31u);
    v23 = v14;
    v17 = v14[2];
    if ( (v17 & 1) != 0 )
    {
      v14 = (unsigned int *)(v17 + 0x140000000LL - 1);
      v23 = v14;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL && ((unsigned __int8)v14 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v18 = RtlLookupExceptionHandler((__int64)v14, 0x140000000uLL, 1u, v12, 0LL, &v24);
    if ( v18 < 0 )
      KeBugCheckEx(0x31u, v18, 0LL, 0LL, 0LL);
    v19 = 1LL;
    for ( i = 0; i < *v24; ++i )
    {
      if ( i )
      {
        if ( v24[4 * i + 3] != (_DWORD)v19 )
          KeBugCheck(0x31u);
      }
      v19 = v24[4 * i + 3];
    }
    if ( (_DWORD)v19 == 1 )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned int *))(0x140000000LL + (unsigned int)v19))(
             0LL,
             0LL,
             v19,
             v24);
  }
  return result;
}
