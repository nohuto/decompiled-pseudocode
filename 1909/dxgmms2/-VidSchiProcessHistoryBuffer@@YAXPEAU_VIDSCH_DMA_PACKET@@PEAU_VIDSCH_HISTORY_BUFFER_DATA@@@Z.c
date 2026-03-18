/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002B204
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00067D0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqUR4 @ 0x1C002CEA0 (McTemplateK0pqqqqUR4.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, __m128i **a2)
{
  __int64 v2; // r11
  __m128i *v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int8 *v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v14; // r13d
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdi
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __m128i v34; // [rsp+50h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-19h] BYREF
  __m128i *v36; // [rsp+78h] [rbp-1h] BYREF
  int v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+84h] [rbp+Bh]
  __int64 v39; // [rsp+88h] [rbp+Fh]
  __int64 v40; // [rsp+90h] [rbp+17h]
  unsigned int v41; // [rsp+98h] [rbp+1Fh]
  int v42; // [rsp+9Ch] [rbp+23h]
  int v44; // [rsp+F0h] [rbp+77h]
  int v45; // [rsp+F0h] [rbp+77h]
  __int64 v46; // [rsp+F8h] [rbp+7Fh]

  if ( (qword_1C004E010 & 0x61C8ED7) != 0
    && (qword_1C004E018 & 0xFFFFFFFFF9E37128uLL) == 0
    && (qword_1C004E010 & 0x4000) != 0 )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *a2;
    v46 = v2;
    v4 = *(_QWORD *)(v2 + 96);
    v44 = *((_DWORD *)a2 + 2);
    v5 = *(_QWORD *)(v4 + 24);
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(_QWORD *)(v5 + 616);
    v8 = v7 + 8 * v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 688) )
      v7 += 8 * v6;
    else
      v8 = *(_QWORD *)(v5 + 616);
    v9 = &v3->m128i_i8[*((unsigned int *)a2 + 2)];
    v34 = *v3;
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(*v3, 8));
    v11 = (unsigned __int64)v3[1].m128i_u64 + v10;
    if ( v11 < (unsigned __int64)v3 || v11 > (unsigned __int64)v9 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6, a2);
      v22[3] = v10;
LABEL_42:
      WdLogEvent5_WdAssertion(v22);
      return;
    }
    v12 = *(_QWORD *)(v5 + 8);
    v13 = 352LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 6LL);
    v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 2440LL) + v13 + 32)
                    + 4LL * *(unsigned __int16 *)(*(_QWORD *)v7 + 8LL));
    if ( v14 )
    {
      v15 = v3->m128i_i64[0];
      v16 = 8;
      if ( v14 <= 0x20 )
        v16 = 4;
      v17 = 8064;
      if ( v14 <= 0x20 )
        v17 = 16128;
      v45 = v16;
      v18 = HIDWORD(v34.m128i_i64[0]);
      while ( 1 )
      {
        v19 = v17;
        if ( v17 >= (unsigned int)v18 )
          v19 = v18;
        v20 = (unsigned int)(v16 * v19);
        v21 = (unsigned int)v20;
        if ( (unsigned int)v20 > (unsigned __int64)&v9[-v11] )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0pqqqqUR4(
            (unsigned int)&DxgkControlGuid_Context,
            v15,
            v13,
            *(_QWORD *)(v2 + 56),
            v15,
            *((_DWORD *)a1 + 24),
            v14,
            v20,
            v11);
          v15 = v34.m128i_i64[0];
          v2 = v46;
        }
        v11 += v21;
        LODWORD(v18) = v18 - v19;
        if ( !(_DWORD)v18 )
          return;
        v16 = v45;
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v20, v15);
      v22[3] = v11;
      v22[4] = v9;
      v22[5] = v21;
      goto LABEL_42;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1000), &LockHandle);
    v23 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 992LL);
    if ( v23 )
    {
      v38 = 0;
      v42 = 0;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v46 + 64);
        v25 = *(_QWORD *)(v5 + 8);
        v37 = v44;
        v36 = v3;
        v39 = v23;
        v40 = 64512LL;
        v41 = 0;
        v26 = ((__int64 (__fastcall *)(__int64, __int64, __m128i **))DxgCoreInterface[46])(v25, v24, &v36);
        v30 = v26;
        if ( v26 < 0 )
          break;
        if ( HIDWORD(v40) )
        {
          if ( v41 == 32 )
          {
            v31 = 4;
          }
          else
          {
            if ( v41 != 64 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v41);
              v33[3] = v41;
              goto LABEL_39;
            }
            v31 = 8;
          }
          v32 = (unsigned int)(HIDWORD(v40) * v31);
          if ( (unsigned int)v32 > 0xFC00 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v32, v41);
            v33[3] = HIDWORD(v40);
            v33[4] = v41;
            v33[5] = 64512LL;
            goto LABEL_39;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0pqqqqUR4(
              (unsigned int)&DxgkControlGuid_Context,
              v41,
              v29,
              *(_QWORD *)(v46 + 56),
              v34.m128i_i8[0],
              *((_DWORD *)a1 + 24),
              v41,
              v32,
              v23);
        }
        if ( !v42 )
          goto LABEL_40;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v27);
      v33[3] = v30;
LABEL_39:
      WdLogEvent5_WdAssertion(v33);
    }
LABEL_40:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
