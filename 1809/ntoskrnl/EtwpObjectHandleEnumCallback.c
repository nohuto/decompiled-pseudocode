/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x1408BFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1401B7570 (ExCheckSingleFilter.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v7; // r13
  unsigned __int16 v8; // r13
  unsigned __int64 v9; // rdx
  bool v10; // zf
  void *v12; // r14
  unsigned int v13; // edi
  _WORD *v14; // r11
  __int64 v15; // r8
  int v16; // r9d
  int v17; // r8d
  unsigned int v18; // r10d
  unsigned int v19; // r8d
  _WORD *PoolWithTag; // rbx
  int v21; // r15d
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int16 v27; // [rsp+20h] [rbp-49h]
  unsigned int v28; // [rsp+28h] [rbp-41h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-31h] BYREF
  int v31; // [rsp+40h] [rbp-29h]
  unsigned int v32; // [rsp+44h] [rbp-25h]
  __int16 v33; // [rsp+48h] [rbp-21h]
  unsigned __int64 *v34; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-11h]
  int v36; // [rsp+68h] [rbp-1h]
  int v37; // [rsp+6Ch] [rbp+3h]

  v5 = *a2;
  v7 = -(*(_BYTE *)(a4 + 104) != 0);
  v31 = *(_DWORD *)(a4 + 44);
  v8 = v7 + 4391;
  v9 = (v5 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v32 = a3;
  v10 = *(_BYTE *)(a4 + 108) == 0;
  v12 = (void *)(v9 + 48);
  v30 = v9 + 48;
  if ( !v10 )
    v32 = a3 | 0x80000000;
  v13 = 1;
  v14 = *(_WORD **)(a4 + 8);
  v33 = (unsigned __int8)(BYTE1(v9) ^ ObHeaderCookie ^ *(_BYTE *)(v9 + 24));
  if ( v14 )
  {
    v15 = 0LL;
    if ( !*v14 )
    {
LABEL_8:
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v26, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      return 0;
    }
    v16 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v9) ^ (unsigned __int64)*(unsigned __int8 *)(v9 + 24)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v16, *(_DWORD *)&v14[2 * v15 + 2]) )
    {
      v15 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v15 >= v18 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v12, 0x54777445u);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v26, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  v19 = *(unsigned __int16 *)(a4 + 24);
  PoolWithTag = *(_WORD **)(a4 + 16);
  v34 = &v30;
  LODWORD(NumberOfBytes) = v19;
  v35[0] = 18LL;
  while ( 1 )
  {
    v21 = ObQueryNameStringMode((char *)v12, (__int64)PoolWithTag, v19, &NumberOfBytes, 0);
    if ( v21 != -1073741820 )
      break;
    if ( PoolWithTag != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v19 = NumberOfBytes;
  }
  ObfDereferenceObjectWithTag(v12, 0x54777445u);
  if ( !v21 )
  {
    v22 = 0x2000;
    if ( *PoolWithTag < 0x2000u )
      v22 = (unsigned __int16)*PoolWithTag;
    v13 = 2;
    v35[1] = *((_QWORD *)PoolWithTag + 1);
    v36 = v22;
    v37 = 0;
  }
  v23 = 2LL * v13;
  v28 = 4200450;
  v27 = v8;
  v35[v23] = 2LL;
  v24 = *(_QWORD *)(a4 + 32);
  v35[v23 - 1] = &EtwpNull;
  EtwpLogKernelEvent((__int64)&v34, *(_QWORD *)(v24 + 1080), *(_DWORD *)v24, v13 + 1, v27, v28);
  if ( PoolWithTag && PoolWithTag != *(_WORD **)(a4 + 16) )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0;
}
