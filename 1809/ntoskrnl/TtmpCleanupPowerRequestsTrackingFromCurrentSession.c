/*
 * XREFs of TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1408819CC
 * Callers:
 *     TtmCleanupCurrentSession @ 0x14088097C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpCleanupPowerRequestsTrackingFromCurrentSession(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *i; // rdx
  _QWORD **v6; // rbp
  _QWORD *j; // rcx
  _QWORD **v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  void *v11; // rcx

  v1 = *(_QWORD **)(a1 + 280);
  v3 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = (_QWORD *)*v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      for ( i = v1 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 280) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = (_QWORD *)*i;
      v1 = i;
      v4 = (_QWORD *)*i;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = (_QWORD **)v3;
    for ( j = v1; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)(a1 + 272);
        *v3 |= 0x8000000000000002uLL;
        v3 = j;
        goto LABEL_20;
      }
    }
    v6 = 0LL;
LABEL_20:
    v8 = v6 + 6;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
        __fastfail(3u);
      *v8 = v10;
      v10[1] = v8;
      ExFreePoolWithTag(v9 - 1, 0x52507454u);
    }
    ExFreePoolWithTag(v6, 0x52507454u);
  }
  v11 = *(void **)(a1 + 280);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52507454u);
}
