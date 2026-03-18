/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x1405BD44C
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF280 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14086330C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140001F80 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x140002780 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BB680 (PiPnpRtlObjectEventRelease.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x1405BEB90 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(__int64 a1, unsigned int a2, __int64 a3, char **a4)
{
  PVOID v8; // rsi
  int v9; // ebx
  char **v10; // rax
  char *v11; // rdi
  int Object; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v15; // rdi
  PVOID v16; // rax
  PVOID inserted; // rax
  PVOID v18; // [rsp+30h] [rbp-D0h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[112]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  NodeOrParent = 0LL;
  v8 = 0LL;
  Buffer = v23;
  *a4 = 0LL;
  v18 = 0LL;
  v9 = PiDmInitializeComparisonObject(a1, a2, v24);
  if ( v9 >= 0 )
  {
    v23[1] = v24;
    v10 = (char **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0LL;
    if ( v11 )
      goto LABEL_5;
    Object = PiDmGetObject(a2, a1, &v18);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v8 = v18;
      v9 = 0;
      goto LABEL_19;
    }
    if ( Object < 0 )
    {
      v8 = v18;
LABEL_16:
      if ( v11 )
        PiPnpRtlObjectEventRelease(v11);
      goto LABEL_18;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x41706E50u);
    P = PoolWithTag;
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v16 = v18;
      *v15 = 1;
      v15[18] = 5;
      v8 = 0LL;
      *((_QWORD *)v15 + 1) = v16;
      inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &P, 8u, 0LL, NodeOrParent, SearchResult);
      v11 = (char *)P;
      if ( inserted )
      {
LABEL_5:
        *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
      goto LABEL_16;
    }
    v8 = v18;
    v9 = -1073741670;
  }
LABEL_18:
  *a4 = 0LL;
LABEL_19:
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)v9;
}
