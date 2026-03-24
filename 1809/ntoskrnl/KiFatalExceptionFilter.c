/*
 * XREFs of KiFatalExceptionFilter @ 0x1409DB23C
 * Callers:
 *     KiLockServiceTable @ 0x1401738E4 (KiLockServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x140191260 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x1401BBBA0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rsi
  NTSTATUS v1; // eax
  __int64 v2; // r9
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  char *v5; // rbx
  unsigned int *v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // eax
  __int64 result; // rax
  int i; // r10d
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v1 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, 1, 3u, (int)&v11, &v12);
  v3 = v12;
  if ( v1 < 0 )
    v3 = 0LL;
  if ( !v3 )
    goto LABEL_20;
  v4 = v11 / 0xCuLL;
  if ( !(_DWORD)v4 )
    goto LABEL_20;
  v5 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v6 = (unsigned int *)(v3 + 12LL * (unsigned int)(v4 - 1));
  v7 = *v6;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v7 )
  {
    v2 = (unsigned int)(v4 - 2);
    for ( i = 0; (int)v2 >= i; LODWORD(v7) = *v6 )
    {
      v4 = (unsigned int)(((int)v2 + i) >> 1);
      v6 = (unsigned int *)(v3 + 12LL * (int)v4);
      if ( (unsigned __int64)v5 >= *v6 )
      {
        LODWORD(v7) = *v6;
        if ( (unsigned __int64)v5 < v6[3] )
          break;
        i = v4 + 1;
      }
      else
      {
        v2 = (unsigned int)(v4 - 1);
      }
    }
  }
  if ( (unsigned __int64)v5 < (unsigned int)v7 || (unsigned __int64)v5 >= v6[1] )
    v6 = 0LL;
  if ( !v6 )
LABEL_20:
    KeBugCheck(0x31u);
  v8 = RtlLookupExceptionHandler((__int64)v6, v4, 1u, v2, &v13, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v13;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
