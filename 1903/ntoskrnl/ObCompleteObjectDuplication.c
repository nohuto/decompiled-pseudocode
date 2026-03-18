/*
 * XREFs of ObCompleteObjectDuplication @ 0x14063FF80
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x1405DFE00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpQueryHandleInformationMessage @ 0x14063FE7C (AlpcpQueryHandleInformationMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x140013AB0 (ObpFilterOperation.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleEx @ 0x1405E6A10 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14063E7C8 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14089F0C8 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1408DB788 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1408F3BE4 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, ULONG_PTR a2, unsigned __int8 a3, __int64 *a4, int *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  char v12; // r12
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 Handle; // r14
  int v19; // edx
  int *v20; // rcx
  int v21; // eax
  __int64 v23; // r9
  int v24; // eax
  int v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h]
  _QWORD *v27; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v29 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v29, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v28 = &v27;
      v27 = &v27;
      v26 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v29, *((_DWORD *)a1 + 9), (_DWORD *)a1 + 7);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          ObpDecrementHandleCount((_KPROCESS *)a2, v15);
          v13 = -1073741670;
        }
        if ( v12 == 1 )
          Handle |= 0xFFFFFFFF80000000uLL;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
        if ( v27 != &v27 )
        {
          LOBYTE(v19) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v19, v13, v29, (__int64)&v27);
        }
        if ( v13 >= 0 )
        {
          v20 = a5;
          v21 = v29;
          *a4 = Handle;
          *v20 = v21;
        }
        if ( (xmmword_140572410 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 744), *(_DWORD *)(a2 + 744), v26);
        return (unsigned int)v13;
      }
      v23 = *a1;
      v25 = v29;
      v13 = ObpPreInterceptHandleDuplicate(v17, v12, &v25, v23, a2, &v27);
      if ( v13 >= 0 )
      {
        v24 = v29;
        if ( !v12 )
          v24 = v25;
        v29 = v24;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v15);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
