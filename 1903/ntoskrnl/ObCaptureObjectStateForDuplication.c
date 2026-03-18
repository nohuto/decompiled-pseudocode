/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x1406CB8FC
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CB630 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        unsigned __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // r14d
  int v10; // edi
  unsigned __int64 v11; // rax
  int v12; // esi
  char *v13; // rsi
  bool v14; // zf
  int v15; // r12d
  __int64 v16; // rdi
  int v17; // r13d
  __int64 v18; // r15
  int v19; // r14d
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v26; // [rsp+B8h] [rbp+58h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v7 = a3;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  v12 = ObpReferenceProcessObjectByHandle(
          a2,
          (struct _KTHREAD *)Object,
          v11,
          a5,
          0x7544624Fu,
          (struct _KTHREAD **)&Objecta,
          &v21,
          &v22);
  if ( v12 < 0 )
  {
    ExReleaseRundownProtection_0(Object + 96);
    return (unsigned int)v12;
  }
  if ( (v21 & 4) != 0 )
    LODWORD(v22) = 0;
  v13 = (char *)Objecta;
  v14 = v10 == 0;
  v15 = HIDWORD(v21);
  v16 = a6;
  if ( !v14 )
    v7 = HIDWORD(v21);
  AccessMask = v7;
  v17 = v21 & 4 | 8;
  if ( (a4 & 8) == 0 )
    v17 = v21 & 0xC;
  *(_QWORD *)(a6 + 28) = v22;
  v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v18 + 76));
    v7 = AccessMask;
  }
  v26 = v7 & (*(_DWORD *)(v18 + 92) | 0x1000000);
  if ( (~v15 & v26) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 96);
    ObfDereferenceObjectWithTag(v13, 0x7544624Fu);
    return 3221225506LL;
  }
  v19 = ObpIncrementHandleCountEx(2u, (__int64)&v26, (ULONG_PTR)Object, (__int64)v13, a5, v17, 0LL);
  ExReleaseRundownProtection_0(Object + 96);
  if ( v19 < 0 )
  {
    ObfDereferenceObjectWithTag(v13, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v16 + 24) = v26;
    *(_QWORD *)(v16 + 8) = a2;
    *(_DWORD *)(v16 + 36) = v17;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)v16 = Object;
    *(_QWORD *)(v16 + 16) = v13;
  }
  return (unsigned int)v19;
}
