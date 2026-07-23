/*
 * XREFs of KiFatalExceptionFilter @ 0x1409DC23C
 * Callers:
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlLookupExceptionHandler @ 0x1401913A0 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall KiFatalExceptionFilter(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  char *v7; // rbx
  unsigned int *v8; // rcx
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 result; // rax
  int i; // r10d
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  v3 = RtlpImageDirectoryEntryToDataEx(0x140000000uLL, a2, 3LL, (__int64)&v13, &v14);
  v5 = v14;
  if ( v3 < 0 )
    v5 = 0LL;
  if ( !v5 )
    goto LABEL_20;
  v6 = v13 / 0xCuLL;
  if ( !(_DWORD)v6 )
    goto LABEL_20;
  v7 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v8 = (unsigned int *)(v5 + 12LL * (unsigned int)(v6 - 1));
  v9 = *v8;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v9 )
  {
    v4 = (unsigned int)(v6 - 2);
    for ( i = 0; (int)v4 >= i; LODWORD(v9) = *v8 )
    {
      v6 = (unsigned int)(((int)v4 + i) >> 1);
      v8 = (unsigned int *)(v5 + 12LL * (int)v6);
      if ( (unsigned __int64)v7 >= *v8 )
      {
        LODWORD(v9) = *v8;
        if ( (unsigned __int64)v7 < v8[3] )
          break;
        i = v6 + 1;
      }
      else
      {
        v4 = (unsigned int)(v6 - 1);
      }
    }
  }
  if ( (unsigned __int64)v7 < (unsigned int)v9 || (unsigned __int64)v7 >= v8[1] )
    v8 = 0LL;
  if ( !v8 )
LABEL_20:
    KeBugCheck(0x31u);
  v10 = RtlLookupExceptionHandler((__int64)v8, v6, 1u, v4, &v15, 0LL);
  if ( v10 < 0 )
    KeBugCheckEx(0x31u, v10, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v15;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
