/*
 * XREFs of RtlpHpTagContextGetTag @ 0x180106E98
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180064780 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagContextFindMapping @ 0x1800650DC (RtlpHpTagContextFindMapping.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTagContextGetTag(__int64 a1, unsigned __int64 a2)
{
  void *SubProcessTag; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 *v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 Mapping; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0uLL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  *(_QWORD *)&v16 = SubProcessTag;
  v4 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v4 = *((_QWORD *)&v16 + 1) - qword_1801663F0;
  if ( !v4 )
    return 0LL;
  if ( word_180163AC4 )
  {
    v6 = *(_QWORD *)(qword_180163AB8 + 8LL * (unsigned __int16)word_180163AC4 - 8);
    v7 = *(_QWORD *)(v6 + 16) - (_QWORD)SubProcessTag;
    if ( !v7 )
      v7 = *(_QWORD *)(v6 + 24) - *((_QWORD *)&v16 + 1);
    if ( !v7 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a2);
      result = *(unsigned __int16 *)(v6 + 40);
      goto LABEL_17;
    }
  }
  v8 = &v16;
  v9 = 314159LL;
  v10 = 2LL;
  do
  {
    v11 = *(unsigned __int8 *)v8;
    v8 = (__int128 *)((char *)v8 + 8);
    v12 = *((unsigned __int8 *)v8 - 2)
        + 37
        * (*((unsigned __int8 *)v8 - 3)
         + 37
         * (*((unsigned __int8 *)v8 - 4)
          + 37
          * (*((unsigned __int8 *)v8 - 5)
           + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v11 + 37 * v9))))));
    v13 = *((unsigned __int8 *)v8 - 1);
    v9 = v13 + 37 * v12;
    --v10;
  }
  while ( v10 );
  Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)&v16, v13 + 37 * v12);
  if ( Mapping )
  {
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a2);
    result = *(unsigned __int16 *)(Mapping + 40);
  }
  else
  {
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    result = RtlpHpTagContextAllocateTag(v15, &v16, v9, a2);
LABEL_17:
    if ( !(_WORD)result )
      return result;
  }
  word_180163AC4 = result;
  return result;
}
