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

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rsi
  NTSTATUS v1; // eax
  __int64 v2; // r9
  __int64 v3; // rdi
  unsigned int v4; // edx
  char *v5; // rbx
  unsigned int *v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // eax
  __int64 result; // rax
  int i; // r10d
  int v11; // edx
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v1 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v12, &v13);
  v3 = v13;
  if ( v1 < 0 )
    v3 = 0LL;
  if ( !v3 )
    goto LABEL_20;
  v4 = v12 / 0xC;
  if ( !(v12 / 0xC) )
    goto LABEL_20;
  v5 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v6 = (unsigned int *)(v3 + 12LL * (v4 - 1));
  v7 = *v6;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v7 )
  {
    v2 = v4 - 2;
    for ( i = 0; (int)v2 >= i; LODWORD(v7) = *v6 )
    {
      v11 = ((int)v2 + i) >> 1;
      v6 = (unsigned int *)(v3 + 12LL * v11);
      if ( (unsigned __int64)v5 >= *v6 )
      {
        LODWORD(v7) = *v6;
        if ( (unsigned __int64)v5 < v6[3] )
          break;
        i = v11 + 1;
      }
      else
      {
        v2 = (unsigned int)(v11 - 1);
      }
    }
  }
  if ( (unsigned __int64)v5 < (unsigned int)v7 || (unsigned __int64)v5 >= v6[1] )
    v6 = 0LL;
  if ( !v6 )
LABEL_20:
    KeBugCheck(0x31u);
  v8 = RtlLookupExceptionHandler((__int64)v6, 0x140000000uLL, 1u, v2, &v14, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v14;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
