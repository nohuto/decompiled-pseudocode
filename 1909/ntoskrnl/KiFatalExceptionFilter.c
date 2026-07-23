/*
 * XREFs of KiFatalExceptionFilter @ 0x140A203D4
 * Callers:
 *     KiLockServiceTable @ 0x14017B090 (KiLockServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x14013B9CC (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiFatalExceptionFilter(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned int v6; // edx
  char *v7; // rbx
  unsigned int *v8; // rcx
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 result; // rax
  int i; // r10d
  int v13; // edx
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v3 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, a2, 3LL, (__int64)&v14, &v15);
  v5 = v15;
  if ( v3 < 0 )
    v5 = 0LL;
  if ( !v5 )
    goto LABEL_20;
  v6 = v14 / 0xC;
  if ( !(v14 / 0xC) )
    goto LABEL_20;
  v7 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v8 = (unsigned int *)(v5 + 12LL * (v6 - 1));
  v9 = *v8;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v9 )
  {
    v4 = v6 - 2;
    for ( i = 0; (int)v4 >= i; LODWORD(v9) = *v8 )
    {
      v13 = ((int)v4 + i) >> 1;
      v8 = (unsigned int *)(v5 + 12LL * v13);
      if ( (unsigned __int64)v7 >= *v8 )
      {
        LODWORD(v9) = *v8;
        if ( (unsigned __int64)v7 < v8[3] )
          break;
        i = v13 + 1;
      }
      else
      {
        v4 = (unsigned int)(v13 - 1);
      }
    }
  }
  if ( (unsigned __int64)v7 < (unsigned int)v9 || (unsigned __int64)v7 >= v8[1] )
    v8 = 0LL;
  if ( !v8 )
LABEL_20:
    KeBugCheck(0x31u);
  v10 = RtlLookupExceptionHandler((__int64)v8, 0x140000000uLL, 1u, v4, &v16, 0LL);
  if ( v10 < 0 )
    KeBugCheckEx(0x31u, v10, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v16;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
