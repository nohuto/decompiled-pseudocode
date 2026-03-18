/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002A794
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqUR4 @ 0x1C002C78C (McTemplateK0pqqqqUR4.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, __m128i **a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __m128i *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int8 *v11; // rsi
  unsigned int v12; // edi
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // r12d
  unsigned __int64 v20; // rdi
  int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __m128i v36; // [rsp+50h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-19h] BYREF
  __m128i *v38; // [rsp+78h] [rbp-1h] BYREF
  int v39; // [rsp+80h] [rbp+7h]
  __int64 v40; // [rsp+88h] [rbp+Fh]
  int v41; // [rsp+90h] [rbp+17h]
  unsigned int v42; // [rsp+94h] [rbp+1Bh]
  unsigned int v43; // [rsp+98h] [rbp+1Fh]
  int v44; // [rsp+9Ch] [rbp+23h]
  int v46; // [rsp+F0h] [rbp+77h]
  int v47; // [rsp+F0h] [rbp+77h]
  __int64 v48; // [rsp+F8h] [rbp+7Fh]

  if ( (qword_1C004D010 & 0x61C8ED7) != 0
    && (qword_1C004D018 & 0xFFFFFFFFF9E37128uLL) == 0
    && (qword_1C004D010 & 0x4000) != 0 )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *((unsigned int *)a2 + 2);
    v4 = *a2;
    v48 = v2;
    v5 = *(_QWORD *)(v2 + 96);
    v46 = *((_DWORD *)a2 + 2);
    v6 = *(_QWORD *)(v5 + 24);
    v7 = *(unsigned __int16 *)(v5 + 4);
    v8 = *(_QWORD *)(v6 + 616);
    v9 = *(unsigned int *)(v6 + 688);
    v10 = v8 + 8 * v7;
    if ( (unsigned int)v7 < (unsigned int)v9 )
      v8 += 8 * v7;
    else
      v10 = *(_QWORD *)(v6 + 616);
    v11 = &v4->m128i_i8[v3];
    v36 = *v4;
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v4, 8));
    v13 = (unsigned __int64)v4[1].m128i_u64 + v12;
    if ( v13 < (unsigned __int64)v4 || v13 > (unsigned __int64)v11 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v9);
      v24[3] = v12;
LABEL_42:
      WdLogEvent5_WdAssertion(v24);
      return;
    }
    v14 = *(_QWORD *)(v6 + 8);
    v15 = 352LL * *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL);
    v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 2416LL) + v15 + 32)
                    + 4LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 8LL));
    if ( v16 )
    {
      v17 = v4->m128i_i64[0];
      v18 = 8;
      if ( v16 <= 0x20 )
        v18 = 4;
      v19 = 8064;
      if ( v16 <= 0x20 )
        v19 = 16128;
      v47 = v18;
      v20 = HIDWORD(v36.m128i_i64[0]);
      while ( 1 )
      {
        v21 = v19;
        if ( v19 >= (unsigned int)v20 )
          v21 = v20;
        v22 = (unsigned int)(v18 * v21);
        v23 = (unsigned int)v22;
        if ( (unsigned int)v22 > (unsigned __int64)&v11[-v13] )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0pqqqqUR4(
            (unsigned int)&DxgkControlGuid_Context,
            v17,
            v15,
            *(_QWORD *)(v2 + 56),
            v17,
            *((_DWORD *)a1 + 24),
            v16,
            v22,
            v13);
          v17 = v36.m128i_i64[0];
          v2 = v48;
        }
        v13 += v23;
        LODWORD(v20) = v20 - v21;
        if ( !(_DWORD)v20 )
          return;
        v18 = v47;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v17);
      v24[3] = v13;
      v24[4] = v11;
      v24[5] = v23;
      goto LABEL_42;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 1000), &LockHandle);
    v25 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 992LL);
    if ( v25 )
    {
      v44 = 0;
      while ( 1 )
      {
        v42 = 0;
        v43 = 0;
        v26 = *(_QWORD *)(v48 + 64);
        v27 = *(_QWORD *)(v6 + 8);
        v39 = v46;
        v38 = v4;
        v40 = v25;
        v41 = 64512;
        v28 = ((__int64 (__fastcall *)(__int64, __int64, __m128i **))DxgCoreInterface[46])(v27, v26, &v38);
        v32 = v28;
        if ( v28 < 0 )
          break;
        if ( v42 )
        {
          if ( v43 == 32 )
          {
            v33 = 4;
          }
          else
          {
            if ( v43 != 64 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v43);
              v35[3] = v43;
              goto LABEL_39;
            }
            v33 = 8;
          }
          v34 = v42 * v33;
          if ( (unsigned int)v34 > 0xFC00 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v34, v43);
            v35[3] = v42;
            v35[4] = v43;
            v35[5] = 64512LL;
            goto LABEL_39;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0pqqqqUR4(
              (unsigned int)&DxgkControlGuid_Context,
              v43,
              v31,
              *(_QWORD *)(v48 + 56),
              v36.m128i_i8[0],
              *((_DWORD *)a1 + 24),
              v43,
              v34,
              v25);
        }
        if ( !v44 )
          goto LABEL_40;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v29);
      v35[3] = v32;
LABEL_39:
      WdLogEvent5_WdAssertion(v35);
    }
LABEL_40:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
