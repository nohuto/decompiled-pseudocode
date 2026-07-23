/*
 * XREFs of ObCompleteObjectDuplication @ 0x140613FA0
 * Callers:
 *     AlpcpQueryHandleInformationMessage @ 0x140613E9C (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x140634888 (AlpcpExposeHandleAttribute.c)
 * Callees:
 *     ObpFilterOperation @ 0x14001679C (ObpFilterOperation.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406AF8CC (ObpPreInterceptHandleDuplicate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408638B4 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14089DFCC (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1408B8500 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, ULONG_PTR a2, unsigned __int8 a3, __int64 *a4, int *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  bool v12; // r12
  int v13; // esi
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
  _QWORD v28[2]; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
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
      v28[1] = v28;
      v28[0] = v28;
      v27 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v29, *((_DWORD *)a1 + 9), (_DWORD *)a1 + 7);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && SeAuditingWithTokenForSubcategory(124, 0LL) )
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
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
        if ( (_QWORD *)v28[0] != v28 )
        {
          LOBYTE(v20) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v20, v13, v29, (__int64)v28);
        }
        if ( v13 >= 0 )
        {
          v21 = a5;
          v22 = v29;
          *a4 = Handle;
          *v21 = v22;
        }
        if ( (xmmword_140542350 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 736), *(_DWORD *)(a2 + 736), v27);
        return (unsigned int)v13;
      }
      v24 = *a1;
      LOBYTE(v17) = v12;
      v26 = v29;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v26, v24, a2, (__int64)v28);
      if ( v13 >= 0 )
      {
        v25 = v29;
        if ( !v12 )
          v25 = v26;
        v29 = v25;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v15);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
