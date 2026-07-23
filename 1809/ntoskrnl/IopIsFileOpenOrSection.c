/*
 * XREFs of IopIsFileOpenOrSection @ 0x14081F810
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     MmSectionToSectionObjectPointers @ 0x14085A09C (MmSectionToSectionObjectPointers.c)
 */

bool __fastcall IopIsFileOpenOrSection(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdi
  bool v6; // bl
  unsigned __int64 v8; // rcx
  POBJECT_TYPE *v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a4;
  v6 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)];
  if ( v9 == IoFileObjectType )
  {
    v10 = v8 + 48;
    if ( v4 == v8 + 48 )
    {
      v6 = *((_BYTE *)a4 + 8) == 0;
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(v4 + 40);
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 40) )
        goto LABEL_12;
    }
    else if ( *(_QWORD *)(v4 + 24) != *(_QWORD *)(v10 + 24) )
    {
      goto LABEL_12;
    }
    v6 = 1;
    goto LABEL_12;
  }
  if ( v9 == (POBJECT_TYPE *)MmSectionObjectType && *(_QWORD *)(v4 + 40) )
    v6 = MmSectionToSectionObjectPointers(v8 + 48) == *(_QWORD *)(v4 + 40);
LABEL_12:
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v6;
}
