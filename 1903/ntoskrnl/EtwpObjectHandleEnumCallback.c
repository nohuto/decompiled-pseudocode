/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x1408FB9C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     ExCheckSingleFilter @ 0x1403391EC (ExCheckSingleFilter.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  bool v4; // cf
  int v5; // eax
  unsigned __int16 v7; // r12
  unsigned __int64 v8; // rcx
  void *v11; // r14
  unsigned int v12; // edi
  _WORD *v13; // r10
  unsigned int v14; // r8d
  int v15; // r11d
  int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  _WORD *PoolWithTag; // rbx
  int v20; // r15d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int16 v26; // [rsp+20h] [rbp-49h]
  unsigned int v27; // [rsp+28h] [rbp-41h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-31h] BYREF
  int v30; // [rsp+40h] [rbp-29h]
  unsigned int v31; // [rsp+44h] [rbp-25h]
  __int16 v32; // [rsp+48h] [rbp-21h]
  int v33; // [rsp+4Ah] [rbp-1Fh]
  __int16 v34; // [rsp+4Eh] [rbp-1Bh]
  unsigned __int64 *v35; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-11h]
  int v37; // [rsp+68h] [rbp-1h]
  int v38; // [rsp+6Ch] [rbp+3h]

  v4 = *(_BYTE *)(a4 + 64) != 0;
  v33 = 0;
  v5 = *(_DWORD *)(a4 + 44);
  v7 = 4391 - v4;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v34 = 0;
  v30 = v5;
  v31 = a3;
  v11 = (void *)(v8 + 48);
  v29 = v8 + 48;
  if ( *(_BYTE *)(a4 + 68) )
    v31 = a3 | 0x80000000;
  v12 = 1;
  v13 = *(_WORD **)(a4 + 8);
  v32 = (unsigned __int8)(BYTE1(v8) ^ ObHeaderCookie ^ *(_BYTE *)(v8 + 24));
  if ( v13 )
  {
    v14 = 0;
    if ( !*v13 )
    {
LABEL_8:
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v25, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      return 0;
    }
    v15 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v8) ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v15, *(_DWORD *)&v13[2 * v14 + 2]) )
    {
      v14 = v16 + 1;
      if ( v14 >= v17 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v11, 0x54777445u);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v25, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  v18 = *(unsigned __int16 *)(a4 + 24);
  PoolWithTag = *(_WORD **)(a4 + 16);
  v35 = &v29;
  LODWORD(NumberOfBytes) = v18;
  v36[0] = 18LL;
  while ( 1 )
  {
    v20 = ObQueryNameStringMode((char *)v11, (__int64)PoolWithTag, v18, &NumberOfBytes, 0);
    if ( v20 != -1073741820 )
      break;
    if ( PoolWithTag != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v18 = NumberOfBytes;
  }
  ObfDereferenceObjectWithTag(v11, 0x54777445u);
  if ( !v20 )
  {
    v21 = 0x2000;
    if ( *PoolWithTag < 0x2000u )
      v21 = (unsigned __int16)*PoolWithTag;
    v12 = 2;
    v36[1] = *((_QWORD *)PoolWithTag + 1);
    v37 = v21;
    v38 = 0;
  }
  v22 = 2LL * v12;
  v27 = 4200450;
  v26 = v7;
  v36[v22] = 2LL;
  v23 = *(_QWORD *)(a4 + 32);
  v36[v22 - 1] = &EtwpNull;
  EtwpLogKernelEvent((__int64)&v35, *(_QWORD *)(v23 + 1112), *(_DWORD *)v23, v12 + 1, v26, v27);
  if ( PoolWithTag && PoolWithTag != *(_WORD **)(a4 + 16) )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0;
}
