/*
 * XREFs of ndisOidPostIovAllocateVF @ 0x1C00B1FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisOidPostIovAllocateVF(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  KIRQL v7; // r9
  __int64 *v8; // rcx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // ax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *i; // rax
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *j; // rax
  __int64 *v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // rax

  v1 = a1[4];
  v3 = *a1;
  v4 = *a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      33,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
    v4 = *a1;
  }
  if ( v4 )
  {
    v5 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v5 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(v1 + 40);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    if ( v5 )
    {
      *(_WORD *)(v5 + 1722) = *(_WORD *)(v6 + 1626);
      *(_DWORD *)(v5 + 1724) = *(_DWORD *)(v6 + 1628);
    }
    v8 = *(__int64 **)(v3 + 4720);
    if ( v8 == (__int64 *)(v3 + 4720) )
    {
LABEL_17:
      v11 = (__int64 *)v8[1];
      v12 = *v11;
      if ( *(__int64 **)(*v11 + 8) != v11 )
        goto LABEL_28;
      *(_QWORD *)v5 = v12;
      *(_QWORD *)(v5 + 8) = v11;
      *(_QWORD *)(v12 + 8) = v5;
      *v11 = v5;
      ++*(_DWORD *)(v3 + 4712);
    }
    else
    {
      v9 = *(_WORD *)(v5 + 1722);
      while ( 1 )
      {
        v10 = *((_WORD *)v8 + 861);
        if ( v10 == v9 )
          break;
        if ( v10 <= v9 )
        {
          v8 = (__int64 *)*v8;
          if ( v8 != (__int64 *)(v3 + 4720) )
            continue;
        }
        goto LABEL_17;
      }
    }
    v13 = *(_QWORD *)(v5 + 56);
    for ( i = *(__int64 **)(v13 + 808); i != (__int64 *)(v13 + 808); i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 853) > *(_WORD *)(v5 + 1722) )
        break;
    }
    v15 = (__int64 *)i[1];
    v16 = (_QWORD *)(v5 + 16);
    v17 = *v15;
    if ( *(__int64 **)(*v15 + 8) == v15 )
    {
      *(_QWORD *)(v5 + 24) = v15;
      *v16 = v17;
      *(_QWORD *)(v17 + 8) = v16;
      *v15 = (__int64)v16;
      ++*(_DWORD *)(v13 + 800);
      v18 = *(_QWORD *)(v5 + 64);
      for ( j = *(__int64 **)(v18 + 80); j != (__int64 *)(v18 + 80); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 845) > *(_WORD *)(v5 + 1722) )
          break;
      }
      v20 = (__int64 *)j[1];
      v21 = (_QWORD *)(v5 + 32);
      v22 = *v20;
      if ( *(__int64 **)(*v20 + 8) == v20 )
      {
        v21[1] = v20;
        *v21 = v22;
        *(_QWORD *)(v22 + 8) = v21;
        *v20 = (__int64)v21;
        ++*(_DWORD *)(v18 + 72);
        *(_QWORD *)(v3 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
        goto LABEL_7;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      34,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
}
