/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x1402FF7C0
 * Callers:
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepGetCurrentLogLevel @ 0x1402FF798 (SepGetCurrentLogLevel.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

_QWORD *__fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v1; // r14
  PVOID v2; // r12
  int CurrentLogLevel; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *Teb; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  UNICODE_STRING *v15; // rdi
  PVOID v16; // r15
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v18[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0LL;
  CurrentLogLevel = SepGetCurrentLogLevel();
  *v4 = 0;
  result = *(_QWORD **)(v5 + 1888);
  if ( !result || *((_DWORD *)result + 2) != CurrentLogLevel )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = CurrentThread->Teb;
      if ( !Teb )
        return 0LL;
      v9 = Teb[5];
      if ( !v9 )
        return 0LL;
      if ( (v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + 24 > 0x7FFFFFFF0000LL || v9 + 24 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( *(_DWORD *)v9 != -1395763957 )
        return 0LL;
      v20 = *(_QWORD *)(v9 + 8);
      v10 = *(_QWORD *)(v9 + 16);
      if ( (v20 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v20 + 16 > 0x7FFFFFFF0000LL || v20 + 16 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v10 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v10 + 16 > 0x7FFFFFFF0000LL || v10 + 16 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      *(_OWORD *)Src = *(_OWORD *)v20;
      *(_OWORD *)v18 = *(_OWORD *)v10;
      if ( WORD1(*(_OWORD *)v20) )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)Src[1] + WORD1(Src[0]);
        if ( v11 > 0x7FFFFFFF0000LL || (void *)v11 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( WORD1(v18[0]) )
      {
        if ( ((__int64)v18[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)v18[1] + WORD1(v18[0]);
        if ( v12 > 0x7FFFFFFF0000LL || (void *)v12 < v18[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x494F6553u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        v15 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x544F6553u);
        if ( v15 )
        {
          *(_QWORD *)&v15->Length = 0LL;
          v15->Buffer = 0LL;
          v2 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]), 0x544F6553u);
          if ( v2 )
          {
            v1 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4E4F6553u);
            if ( v1 )
            {
              *(_QWORD *)&v1->Length = 0LL;
              v1->Buffer = 0LL;
              v16 = ExAllocatePoolWithTag(PagedPool, WORD1(v18[0]), 0x4E4F6553u);
              if ( v16 )
              {
                memmove(v2, Src[1], WORD1(Src[0]));
                RtlInitUnicodeString(v15, (PCWSTR)v2);
                memmove(v16, v18[1], WORD1(v18[0]));
                RtlInitUnicodeString(v1, (PCWSTR)v16);
                v14[2] = v15;
                v14[3] = v1;
                *a1 = 1;
                return v14;
              }
            }
          }
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        if ( v1 )
          ExFreePoolWithTag(v1, 0);
        ExFreePoolWithTag(v14, 0);
      }
    }
    return 0LL;
  }
  return result;
}
