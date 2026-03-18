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
  NTSTATUS v7; // eax
  __int64 v8; // r11
  __int64 CallersAddress; // r8
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned int *v13; // rcx
  int v14; // edx
  int v15; // r10d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  unsigned int i; // ecx
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v21; // [rsp+48h] [rbp-30h]
  unsigned int *v22; // [rsp+50h] [rbp-28h]
  unsigned int *v23; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+20h] BYREF

  if ( a4 )
    KeExitRetpoline();
  else
    _mm_lfence();
  result = KiLockExtendedServiceTable(BugCheckParameter1);
  if ( !a4 )
  {
    _mm_lfence();
    v7 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v24, &v20);
    v8 = v20;
    if ( v7 < 0 )
      v8 = 0LL;
    v20 = v8;
    if ( !v8 )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v11 = v24 / 0xCuLL;
    if ( !(_DWORD)v11 )
      goto LABEL_38;
    v12 = CallersAddress - 0x140000000LL;
    v13 = (unsigned int *)(v10 + 12LL * (unsigned int)(v11 - 1));
    v21 = v13;
    if ( v12 < *v13 )
    {
      v14 = 0;
      v11 = (unsigned int)(v11 - 2);
      while ( (int)v11 >= v14 )
      {
        v15 = ((int)v11 + v14) >> 1;
        v13 = (unsigned int *)(v10 + 12LL * v15);
        v21 = v13;
        if ( v12 >= *v13 )
        {
          if ( v12 < v13[3] )
            break;
          v14 = v15 + 1;
        }
        else
        {
          v11 = (unsigned int)(v15 - 1);
        }
      }
    }
    if ( v12 < *v13 || v12 >= v13[1] )
      v13 = 0LL;
    if ( !v13 )
LABEL_38:
      KeBugCheck(0x31u);
    v22 = v13;
    v16 = v13[2];
    if ( (v16 & 1) != 0 )
    {
      v13 = (unsigned int *)(v16 + 0x140000000LL - 1);
      v22 = v13;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL && ((unsigned __int8)v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v17 = RtlLookupExceptionHandler((__int64)v13, 0x140000000uLL, 1u, v11, 0LL, &v23);
    if ( v17 < 0 )
      KeBugCheckEx(0x31u, v17, 0LL, 0LL, 0LL);
    v18 = 1LL;
    for ( i = 0; i < *v23; ++i )
    {
      if ( i )
      {
        if ( v23[4 * i + 3] != (_DWORD)v18 )
          KeBugCheck(0x31u);
      }
      v18 = v23[4 * i + 3];
    }
    if ( (_DWORD)v18 == 1 )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned int *))(0x140000000LL + (unsigned int)v18))(
             0LL,
             0LL,
             v18,
             v23);
  }
  return result;
}
