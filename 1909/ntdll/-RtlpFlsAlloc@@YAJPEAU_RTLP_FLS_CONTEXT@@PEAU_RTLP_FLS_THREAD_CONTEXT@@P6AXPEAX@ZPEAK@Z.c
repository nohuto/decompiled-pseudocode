/*
 * XREFs of ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180068E24
 * Callers:
 *     RtlFlsAlloc @ 0x180068E10 (RtlFlsAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x180068F70 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180074C4C (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_THREAD_CONTEXT *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v6; // esi
  unsigned int v7; // edx
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // eax

  v6 = 1;
  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  v7 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(&unk_180166138);
  if ( v7 == -1 )
    goto LABEL_8;
  v8 = 8LL;
  while ( 1 )
  {
    v9 = v7 - 16;
    if ( v7 != 16 )
      break;
    _BitScanReverse(&v10, 0x10u);
    v11 = (1 << v10) ^ 0x10;
    v12 = *((_QWORD *)&RtlpFlsContext + v10 - 3);
    if ( v12 )
      v13 = v12 + 16 * (v11 + 1LL);
    else
      v13 = 8LL;
    *(_QWORD *)v13 = -1LL;
    v7 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(&unk_180166138);
    if ( v7 == -1 )
      goto LABEL_8;
  }
  if ( v9 >= 0xFF0 )
  {
LABEL_8:
    v14 = -1073741801;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v16, v7);
    v17 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v16 - 4) + 1);
    if ( v17 )
      v8 = v17 + 16 * ((v7 ^ (unsigned __int64)(unsigned int)(1 << v16)) + 1);
    if ( !a3 )
      a3 = -1LL;
    *(_QWORD *)v8 = a3;
    v18 = qword_180166188;
    if ( v9 > (unsigned int)qword_180166188 )
      v18 = v7 - 16;
    LODWORD(qword_180166188) = v18;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    v6 = 0;
    *a4 = v9;
    v14 = 0;
    v7 = -1;
  }
  if ( v7 != -1 )
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&unk_180166138);
  if ( v6 )
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  return v14;
}
