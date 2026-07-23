/*
 * XREFs of ExGetPoolTagInfo @ 0x1406A5C1C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetPoolTagInfo(struct _SINGLE_LIST_ENTRY *a1, unsigned int a2, int *a3)
{
  __int64 v6; // r15
  struct _SINGLE_LIST_ENTRY *v7; // r14
  SIZE_T v8; // rdx
  struct _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  struct _SINGLE_LIST_ENTRY *v10; // rbx
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // rcx
  unsigned int v13; // eax
  unsigned int Next; // eax
  unsigned int Next_high; // eax
  int v17; // [rsp+20h] [rbp-68h]
  unsigned int v18; // [rsp+24h] [rbp-64h]
  struct _SINGLE_LIST_ENTRY *v19; // [rsp+28h] [rbp-60h]
  struct _SINGLE_LIST_ENTRY *v20; // [rsp+30h] [rbp-58h]
  struct _SINGLE_LIST_ENTRY v21[10]; // [rsp+38h] [rbp-50h] BYREF

  v18 = 0;
  v20 = a1 + 1;
  v17 = 8;
  LODWORD(a1->Next) = 0;
  v6 = PoolTrackTableSize;
  v7 = (struct _SINGLE_LIST_ENTRY *)PoolTrackTableExpansionSize;
  v8 = 56 * PoolTrackTableSize + 56 * PoolTrackTableExpansionSize;
  if ( v8 < 56 * PoolTrackTableSize )
    return 3221225626LL;
  PoolWithTag = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6F666E49u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v21[0].Next = PoolWithTag;
  v21[1].Next = (struct _SINGLE_LIST_ENTRY *)PoolTrackTableSize;
  v21[2].Next = &PoolWithTag[7 * PoolTrackTableSize];
  v21[3].Next = v7;
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)ExpGetPoolTagInfoTarget, v21);
  v11 = v10;
  v19 = v10;
  while ( v11 < &v10[7 * ((_QWORD)v7 + v6)] )
  {
    if ( !LODWORD(v11->Next) )
      goto LABEL_6;
    ++LODWORD(a1->Next);
    v13 = v17 + 40;
    v17 = v13;
    if ( v13 < 0x28 )
    {
      v18 = -1073741675;
      break;
    }
    if ( a2 < v13 )
    {
      v18 = -1073741820;
LABEL_6:
      v12 = v19;
      goto LABEL_7;
    }
    LODWORD(v20->Next) = v19->Next;
    v12 = v19;
    HIDWORD(v20->Next) = v19[5].Next;
    LODWORD(v20[1].Next) = v19[6].Next;
    v20[2].Next = v19[4].Next;
    LODWORD(v20[3].Next) = v19[2].Next;
    HIDWORD(v20[3].Next) = v19[3].Next;
    v20[4].Next = v19[1].Next;
    Next = (unsigned int)v20[1].Next;
    if ( HIDWORD(v20->Next) < Next )
      HIDWORD(v20->Next) = Next;
    Next_high = HIDWORD(v20[3].Next);
    if ( LODWORD(v20[3].Next) < Next_high )
      LODWORD(v20[3].Next) = Next_high;
    v20 += 5;
LABEL_7:
    v11 = v12 + 7;
    v19 = v11;
  }
  ExFreePoolWithTag(v10, 0);
  if ( a3 )
    *a3 = v17;
  return v18;
}
