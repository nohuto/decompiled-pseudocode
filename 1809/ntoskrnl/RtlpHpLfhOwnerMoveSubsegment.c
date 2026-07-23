/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x14010E7A0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E4C0 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, __int64 *a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  _QWORD *v5; // rbx
  __int64 **v6; // r9
  _QWORD *v7; // r11
  __int64 **v8; // rax
  __int64 *v10; // rax
  __int64 **v11; // r10
  __int64 *v12; // rax

  v3 = *((unsigned __int8 *)a2 + 38);
  if ( v3 == 2 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0LL;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a2 + 38) )
  {
    if ( v3 != 1 )
      return a2;
    v4 = a1 + 40;
    goto LABEL_3;
  }
  v4 = a1 + 24;
  v5 = (_QWORD *)(a1 + 8);
LABEL_4:
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = (__int64 **)(a1 + 40);
      v7 = 0LL;
    }
    else
    {
      if ( a3 != 2 )
        return a2;
      v6 = 0LL;
      v7 = 0LL;
    }
  }
  else
  {
    v6 = (__int64 **)(a1 + 24);
    v7 = (_QWORD *)(a1 + 8);
  }
  if ( v4 )
  {
    v10 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 )
      goto LABEL_28;
    v11 = (__int64 **)a2[1];
    if ( *v11 != a2 )
      goto LABEL_28;
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( v5 )
      --*v5;
  }
  *((_BYTE *)a2 + 38) = a3;
  if ( v6 )
  {
    v8 = (__int64 **)v6[1];
    if ( *v8 != (__int64 *)v6 )
      goto LABEL_28;
    *a2 = (__int64)v6;
    a2[1] = (__int64)v8;
    *v8 = a2;
    v6[1] = a2;
    if ( v7 )
      ++*v7;
    a2 = 0LL;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 && *(_QWORD *)(a1 + 8) > 8uLL )
  {
    a2 = *v6;
    if ( (__int64 **)(*v6)[1] == v6 )
    {
      v12 = (__int64 *)*a2;
      if ( *(__int64 **)(*a2 + 8) == a2 )
      {
        *v6 = v12;
        v12[1] = (__int64)v6;
        --*v7;
        *((_BYTE *)a2 + 38) = 2;
        goto LABEL_13;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_13:
  if ( a2 && *((_BYTE *)a2 + 38) == 2 )
    a2[2] = 0LL;
  return a2;
}
