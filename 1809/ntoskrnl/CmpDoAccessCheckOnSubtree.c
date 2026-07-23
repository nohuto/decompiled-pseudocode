/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x1407F616C
 * Callers:
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x1407F5A24 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // bl
  int SubKeyByNumber; // ebx
  unsigned int *TransientPoolWithTag; // rax
  void *v10; // r14
  __int64 v11; // r12
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // eax
  __int64 v18; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v20[0] = -1;
  v20[1] = 0;
  v7 = a5 & 1;
  if ( (a5 & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x2800uLL, 0x74634D43u);
    v10 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      TransientPoolWithTag[3] = 0;
      *TransientPoolWithTag = a2;
      v11 = 0LL;
      *((_BYTE *)TransientPoolWithTag + 16) = v7 ^ 1;
      v12 = TransientPoolWithTag;
      while ( 1 )
      {
        if ( !*((_BYTE *)v12 + 16) )
        {
          v13 = *v12;
          *((_BYTE *)v12 + 16) = 1;
          SubKeyByNumber = CmpCheckKeyAccess(a1, v13);
          if ( SubKeyByNumber < 0 )
            break;
        }
        v14 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v12, v20);
        v15 = v14;
        if ( !v14 )
        {
          SubKeyByNumber = -1073741670;
          break;
        }
        v16 = v12[3];
        if ( v16 >= v14[5] + v14[6] )
        {
          v12 -= 5;
          v18 = -1LL;
        }
        else
        {
          SubKeyByNumber = CmpFindSubKeyByNumber(a1, v14, v16, &a5);
          if ( SubKeyByNumber < 0 )
            goto LABEL_19;
          v17 = a5;
          if ( a5 == -1 || (++v12[3], v12 += 5, v11 == 511) )
          {
            SubKeyByNumber = -1073741670;
            goto LABEL_19;
          }
          v12[3] = 0;
          *v12 = v17;
          v18 = 1LL;
          *((_BYTE *)v12 + 16) = 0;
        }
        v11 += v18;
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v20);
        if ( v11 < 0 )
        {
          SubKeyByNumber = 0;
          v15 = 0LL;
LABEL_19:
          if ( v15 )
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v20);
          break;
        }
      }
      CmpFreeTransientPoolWithTag(v10, 0x74634D43u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)SubKeyByNumber;
}
