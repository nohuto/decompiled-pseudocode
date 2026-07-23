/*
 * XREFs of KiLockServiceTable @ 0x1401739E4
 * Callers:
 *     KeCompactServiceTable @ 0x14017396C (KeCompactServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     RtlLookupExceptionHandler @ 0x1401913A0 (RtlLookupExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x14019F9A8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     KiFastGetCallersAddress @ 0x1409AC1DC (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x1409DC23C (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  __int64 v9; // r11
  __int64 CallersAddress; // r8
  __int64 v11; // r11
  unsigned __int128 v12; // rax
  signed int v13; // r9d
  unsigned __int64 v14; // r8
  unsigned int *v15; // rcx
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
    v12 = v25 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v13 = v25 / 0xC;
    if ( !(v25 / 0xC) )
      goto LABEL_38;
    v14 = CallersAddress - 0x140000000LL;
    v15 = (unsigned int *)(v11 + 12LL * (unsigned int)(v13 - 1));
    v22 = v15;
    if ( v14 < *v15 )
    {
      DWORD2(v12) = 0;
      v13 -= 2;
      while ( v13 >= SDWORD2(v12) )
      {
        v16 = (v13 + DWORD2(v12)) >> 1;
        v15 = (unsigned int *)(v11 + 12LL * v16);
        v22 = v15;
        if ( v14 < *v15 )
        {
          v13 = v16 - 1;
        }
        else
        {
          if ( v14 < v15[3] )
            break;
          DWORD2(v12) = v16 + 1;
        }
      }
    }
    if ( v14 < *v15 || v14 >= v15[1] )
      v15 = 0LL;
    if ( !v15 )
LABEL_38:
      KeBugCheck(0x31u);
    v23 = v15;
    v17 = v15[2];
    if ( (v17 & 1) != 0 )
    {
      v15 = (unsigned int *)(v17 + 0x140000000LL - 1);
      v23 = v15;
      if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        DWORD2(v12) = -65536;
      }
    }
    v18 = RtlLookupExceptionHandler((_DWORD)v15, DWORD2(v12), 1, v13, 0LL, (__int64)&v24);
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
