/*
 * XREFs of SdbpCheckAllAttributes @ 0x1407215E4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpCheckAttribute @ 0x140721820 (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x1407218F4 (AslFileAllocAndGetAttributes.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  char *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  __int16 v13; // bx
  unsigned int FirstTag; // eax
  char *v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 *p_QWORDTag; // r14
  int v20; // ecx
  unsigned int v21; // r15d
  __int64 StringTagPtr; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  BOOL v25; // eax
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v33; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  *a1 = 0;
  v7 = a4;
  v8 = a3;
  v9 = 1;
  v26 = 1;
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 80) )
  {
    v25 = *(_QWORD *)(a5 + 32) != 0LL;
    goto LABEL_34;
  }
  if ( !*(_QWORD *)(a5 + 8) )
  {
    v25 = 0;
LABEL_34:
    if ( !v25 )
      return Attributes;
  }
  v10 = (char *)AslAlloc((__int64)a1, 0x420uLL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140405D74;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v33 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_7;
    p_QWORDTag = 0LL;
    v20 = v13 & 0xF000;
    v21 = 0;
    switch ( v20 )
    {
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = &QWORDTag;
        v21 = 8;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
        p_QWORDTag = (__int64 *)&DWORDTag;
        v21 = 4;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        v23 = -1LL;
        p_QWORDTag = (__int64 *)StringTagPtr;
        do
          ++v23;
        while ( *(_WORD *)(StringTagPtr + 2 * v23) );
        v21 = 2 * v23 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (*(_DWORD *)&v10[32 * *v12 + 24] & 1) == 0 )
      goto LABEL_9;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v26, v33, (_DWORD)p_QWORDTag, v21, (__int64)&v10[32 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_10;
    }
    v9 = v26;
    v24 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 976);
    if ( v24 )
      v24(v33, p_QWORDTag, v21, v26);
    if ( !v9 )
    {
LABEL_8:
      *a1 = v9;
LABEL_9:
      Attributes = 0;
      goto LABEL_10;
    }
    v8 = a3;
    v7 = a4;
LABEL_7:
    ++v11;
    v12 += 2;
    if ( v11 >= 0x22 )
      goto LABEL_8;
  }
  AslLogCallPrintf(1LL);
LABEL_10:
  v15 = v10 + 16;
  v16 = 33LL;
  do
  {
    v17 = *((_DWORD *)v15 + 2);
    if ( (v17 & 1) != 0 && *((_DWORD *)v15 - 4) == 4 && (v17 & 4) != 0 && *(_QWORD *)v15 )
      ExFreePoolWithTag(*(PVOID *)v15, 0x74705041u);
    v15 += 32;
    --v16;
  }
  while ( v16 );
  memset(v10, 0, 0x420uLL);
  ExFreePoolWithTag(v10, 0x74705041u);
  return Attributes;
}
