/*
 * XREFs of ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074A90
 * Callers:
 *     RtlFlsFree @ 0x180074A80 (RtlFlsFree.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180074C4C (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x18009C2C4 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(struct _RTLP_FLS_CONTEXT *a1, int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  volatile signed __int64 *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  __int64 *i; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  _QWORD v24[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) > 0xFEE )
    return (unsigned int)-1073741811;
  v2 = a2 + 16;
  v3 = 0;
  _BitScanReverse((unsigned int *)&v4, a2 + 16);
  v5 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v4 - 4) + 1);
  if ( !v5 )
    return (unsigned int)-1073741811;
  v6 = 16 * (v2 ^ (unsigned __int64)(unsigned int)(1 << v4));
  v7 = v6 + v5 + 8;
  if ( !v7 || !*(_QWORD *)(v7 + 8) )
    return (unsigned int)-1073741811;
  v8 = 0LL;
  v9 = (volatile signed __int64 *)(v6 + v5 + 8);
  if ( *(_QWORD *)(v7 + 8) != -1LL )
    v8 = *(_QWORD *)(v7 + 8);
  RtlAcquireSRWLockExclusive(v9);
  while ( 2 )
  {
    v13 = 0LL;
    RtlAcquireSRWLockShared((volatile signed __int64 *)&RtlpFlsContext, v10, v11, v12);
    for ( i = (__int64 *)qword_180166178; i != &qword_180166178 && (unsigned int)v13 < 0x10; i = (__int64 *)*i )
    {
      if ( !v8 )
        goto LABEL_15;
      _BitScanReverse(&v15, v2);
      v16 = v2 ^ (1 << v15);
      v17 = i[v15 - 2];
      if ( v17 )
      {
        v18 = (__int64 *)(v17 + 8 * (v16 + 1LL));
        if ( v18 )
        {
          v19 = *v18;
          if ( v19 )
          {
            v20 = 2LL * (unsigned int)v13;
            v13 = (unsigned int)(v13 + 1);
            v24[v20 - 1] = v8;
            v24[v20] = v19;
LABEL_15:
            RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(i + 2, v2, 0LL);
            continue;
          }
        }
      }
    }
    RtlReleaseSRWLockShared((volatile signed __int64 *)&RtlpFlsContext);
    if ( (_DWORD)v13 )
    {
      v21 = v24;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v21 - 1))(*v21);
        v21 += 2;
        --v13;
      }
      while ( v13 );
      continue;
    }
    break;
  }
  *(_QWORD *)(v7 + 8) = -2LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v7);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  *(_QWORD *)(v7 + 8) = 0LL;
  RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&unk_180166138);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  return v3;
}
