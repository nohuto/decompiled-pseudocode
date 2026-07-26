/*
 * XREFs of ethDeleteOneOpenMulticastAddress @ 0x1C00A2154
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF3C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // r14
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  unsigned int v13; // r9d
  int v14; // [rsp+30h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      11,
      (struct _GUID *)&WPP_5f5e11ddc3553b39f46a042846d29103_Traceguids,
      a1);
  }
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0LL;
  *a3 = 1;
  v8 = 1;
  if ( !(_DWORD)v6 )
    goto LABEL_8;
  v9 = *(_QWORD *)(a1 + 448);
  while ( *(_DWORD *)(v9 + 12 * v7 + 6) != *(_DWORD *)(v4 + 2) || *(_WORD *)(v9 + 12 * v7 + 4) != *(_WORD *)v4 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 = 1;
    if ( (unsigned int)v7 >= (unsigned int)v6 )
      goto LABEL_8;
  }
  v13 = *(_DWORD *)(v9 + 12 * v7);
  v8 = 0;
  if ( v13 > 1 )
  {
    *(_DWORD *)(v9 + 12 * v7) = v13 - 1;
  }
  else
  {
LABEL_8:
    if ( (_DWORD)v7 != (_DWORD)v6 || !v8 )
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v10 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 472) = v10--;
      *(_DWORD *)(a1 + 456) = v10;
      if ( v10 )
      {
        memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12 * v7);
        v11 = *(_DWORD *)(a1 + 472);
        if ( (unsigned int)v7 < v11 - 1 )
          memmove(
            (void *)(12 * v7 + *(_QWORD *)(a1 + 448)),
            (const void *)(*(_QWORD *)(a1 + 464) + 12LL * (unsigned int)(v7 + 1)),
            12LL * (unsigned int)(v11 - v7 - 1));
      }
      *a3 = 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 0;
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_5f5e11ddc3553b39f46a042846d29103_Traceguids,
      *a3,
      v14);
  }
  return 0LL;
}
