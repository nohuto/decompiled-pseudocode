/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x180010D10
 * Callers:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagContextFindMapping @ 0x1800650DC (RtlpHpTagContextFindMapping.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 HeapInternal; // r8
  unsigned int v7; // ecx
  void *SubProcessTag; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 Tag; // r14
  unsigned __int8 *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 Mapping; // rax
  signed __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v20; // [rsp+28h] [rbp-90h]
  _QWORD v21[2]; // [rsp+70h] [rbp-48h] BYREF

  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return RtlpAllocateHeapInternal(HeapHandle, a2, a3, 0);
  if ( BYTE1(RtlpHpEnvHandle) >= 2u )
    v7 = 2;
  else
    v7 = BYTE1(RtlpHpEnvHandle);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 || HeapHandle == *((unsigned __int16 **)&unk_180169990 + 2 * v7) )
    goto LABEL_26;
  v21[0] = 0LL;
  v21[1] = 0LL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v21[0] = SubProcessTag;
  v9 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v9 = -qword_1801663F0;
  if ( !v9 )
  {
LABEL_26:
    Tag = 0;
    goto LABEL_17;
  }
  if ( !word_180163AC4 )
    goto LABEL_19;
  v10 = *(_QWORD *)(qword_180163AB8 + 8LL * (unsigned __int16)word_180163AC4 - 8);
  v11 = *(_QWORD *)(v10 + 16) - (_QWORD)SubProcessTag;
  if ( !v11 )
    v11 = *(_QWORD *)(v10 + 24);
  if ( v11 )
  {
LABEL_19:
    v13 = (unsigned __int8 *)v21;
    v20 = (unsigned __int8 *)v21;
    v14 = 16LL;
    v15 = 314159LL;
    v19 = 314159LL;
    while ( v14 >= 8 )
    {
      v15 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v13 + 37 * v15) + v13[1]) + v13[2]) + v13[3]) + v13[4]) + v13[5])
           + v13[6])
          + v13[7];
      v19 = v15;
      v13 += 8;
      v20 = v13;
      v14 -= 8LL;
    }
    if ( v14 >= 1 )
    {
      switch ( (int)v14 )
      {
        case 1:
          goto LABEL_35;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_33;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_31;
        case 6:
          goto LABEL_30;
        case 7:
          v15 = *v13++ + 37 * v15;
LABEL_30:
          v15 = *v13++ + 37 * v15;
LABEL_31:
          v15 = *v13++ + 37 * v15;
LABEL_32:
          v15 = *v13++ + 37 * v15;
LABEL_33:
          v15 = *v13++ + 37 * v15;
LABEL_34:
          v15 = *v13++ + 37 * v15;
LABEL_35:
          v15 = *v13 + 37 * v15;
          v19 = v15;
          v20 = v13 + 1;
          break;
        default:
          break;
      }
    }
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, v21, v15);
    if ( Mapping )
    {
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a2);
      Tag = *(_WORD *)(Mapping + 40);
      if ( Tag )
        goto LABEL_16;
    }
    Tag = RtlpHpTagContextAllocateTag(v17, v21, v15, a2, v19, v20);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 32), a2);
    Tag = *(_WORD *)(v10 + 40);
  }
  if ( Tag )
LABEL_16:
    word_180163AC4 = Tag;
LABEL_17:
  HeapInternal = RtlpAllocateHeapInternal(HeapHandle, a2, a3, Tag);
  if ( !HeapInternal && Tag )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(qword_180163AB8 + 8LL * Tag - 8) + 32LL),
      -(__int64)a2);
  return HeapInternal;
}
