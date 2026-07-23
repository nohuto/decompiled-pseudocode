/*
 * XREFs of PnpConcatPWSTR @ 0x1406FDD28
 * Callers:
 *     PiSwInstanceInfoInit @ 0x1406D8070 (PiSwInstanceInfoInit.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406DAF20 (PiDqOpenUserObjectRegKey.c)
 *     PiSwStopDestroy @ 0x1406EE438 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x14070B1F0 (PipCheckForDenyExecute.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpConcatPWSTR(size_t cchMax, ULONG Tag, PVOID *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rsi
  STRSAFE_PCNZWCH *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // r11
  size_t v12; // rbp
  _WORD *PoolWithTag; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  NTSTRSAFE_PCWSTR *v16; // rdi
  size_t pcchLength[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = a4;
  *a3 = 0LL;
  v7 = 1LL;
  v8 = 0LL;
  if ( a4 )
  {
    v9 = (STRSAFE_PCNZWCH *)&v19;
    do
    {
      if ( *++v9 )
      {
        v10 = RtlStringCchLengthW(*v9, cchMax, pcchLength);
        if ( v10 < 0 )
          goto LABEL_20;
        v7 = pcchLength[0] + v11;
        a4 = v19;
      }
      ++v8;
    }
    while ( v8 < a4 );
  }
  if ( v7 > cchMax )
  {
    v10 = -1073741811;
    goto LABEL_20;
  }
  v12 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v10 = -1073741675;
LABEL_20:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, Tag);
      *a3 = 0LL;
    }
    return (unsigned int)v10;
  }
  v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v7, Tag);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  *PoolWithTag = 0;
  v14 = v19;
  v15 = 0LL;
  if ( v19 )
  {
    v16 = (NTSTRSAFE_PCWSTR *)&v19;
    do
    {
      if ( *++v16 )
      {
        v10 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, v12, *v16);
        if ( v10 < 0 )
          goto LABEL_20;
        v14 = v19;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
  return (unsigned int)v10;
}
