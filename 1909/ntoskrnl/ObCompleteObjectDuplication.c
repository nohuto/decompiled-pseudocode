/*
 * XREFs of ObCompleteObjectDuplication @ 0x140653AD0
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x1405E0630 (AlpcpExposeHandleAttribute.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1406539CC (AlpcpQueryHandleInformationMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x140013CE0 (ObpFilterOperation.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleEx @ 0x1405E71E0 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406D129C (ObpPreInterceptHandleDuplicate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14089E908 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1408DB088 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1408F3554 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, ULONG_PTR a2, unsigned __int8 a3, __int64 *a4, int *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  bool v12; // r12
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // edx
  int v18; // r10d
  __int64 Handle; // r14
  int v20; // edx
  int *v21; // rcx
  int v22; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  _QWORD *v28; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v29; // [rsp+58h] [rbp-8h]
  int v30; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v30 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v30, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v29 = &v28;
      v28 = &v28;
      v27 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v30, *((_DWORD *)a1 + 9), (_DWORD *)a1 + 7);
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
        if ( v12 )
          Handle |= 0xFFFFFFFF80000000uLL;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
        if ( v28 != &v28 )
        {
          LOBYTE(v20) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v20, v13, v30, (__int64)&v28);
        }
        if ( v13 >= 0 )
        {
          v21 = a5;
          v22 = v30;
          *a4 = Handle;
          *v21 = v22;
        }
        if ( (xmmword_140572410 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 744), *(_DWORD *)(a2 + 744), v27);
        return (unsigned int)v13;
      }
      v24 = *a1;
      LOBYTE(v17) = v12;
      v26 = v30;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v26, v24, a2, (__int64)&v28);
      if ( v13 >= 0 )
      {
        v25 = v30;
        if ( !v12 )
          v25 = v26;
        v30 = v25;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v15);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
