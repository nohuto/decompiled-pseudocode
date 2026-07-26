/*
 * XREFs of ethAddOneOpenMulticastAddress @ 0x1C00402F4
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(__int64 a1, char *a2, char *a3)
{
  char *v4; // r15
  __int64 v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // r8d
  int v9; // ecx
  unsigned int v10; // r14d
  int v11; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned __int16 v17; // ax
  char v18[4]; // [rsp+30h] [rbp-38h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      13,
      (struct _GUID *)&WPP_5f5e11ddc3553b39f46a042846d29103_Traceguids,
      a1);
  }
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  if ( (_DWORD)v6 )
  {
    v13 = *(_QWORD *)(a1 + 448);
    while ( *(_DWORD *)(v13 + 12LL * v8 + 6) != *(_DWORD *)(v4 + 2) || *(_WORD *)(v13 + 12LL * v8 + 4) != *(_WORD *)v4 )
    {
      if ( ++v8 >= (unsigned int)v6 )
        goto LABEL_4;
    }
    ++*(_DWORD *)(v13 + 12LL * v8);
  }
  else
  {
LABEL_4:
    if ( (unsigned int)(v6 + 1) > *(_DWORD *)(a1 + 440) )
    {
      v7 = -1073676279;
    }
    else
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v9 = *(_DWORD *)(a1 + 456);
      v10 = 0;
      *(_DWORD *)(a1 + 472) = v9;
      v11 = 1;
      *(_DWORD *)(a1 + 456) = v9 + 1;
      if ( v9 )
      {
        v14 = *(_QWORD *)(a1 + 464);
        v15 = *(_DWORD *)(v4 + 2);
        while ( 1 )
        {
          v16 = *(_DWORD *)(v14 + 12LL * v10 + 6);
          if ( v16 > v15 )
            break;
          if ( v16 >= v15 )
          {
            v17 = *(_WORD *)(v14 + 12LL * v10 + 4);
            if ( v17 > *(_WORD *)v4 )
              break;
            v11 = -(v17 < *(_WORD *)v4);
          }
          else
          {
            v11 = -1;
          }
          if ( ++v10 >= *(_DWORD *)(a1 + 472) )
            goto LABEL_6;
        }
        v11 = 1;
      }
LABEL_6:
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12LL * v10);
      memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 12LL * v10), v4, 6uLL);
      *(_DWORD *)(*(_QWORD *)(a1 + 448) + 12LL * v10) = 1;
      if ( v11 > 0 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 448) + 12LL * (v10 + 1)),
          (const void *)(*(_QWORD *)(a1 + 464) + 12LL * v10),
          12LL * (*(_DWORD *)(a1 + 472) - v10));
      *a3 = 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v7;
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_5f5e11ddc3553b39f46a042846d29103_Traceguids,
      *a3,
      *(_DWORD *)v18);
  }
  return v7;
}
