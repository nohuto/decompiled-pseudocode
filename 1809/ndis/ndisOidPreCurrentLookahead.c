/*
 * XREFs of ndisOidPreCurrentLookahead @ 0x1C00248B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

char __fastcall ndisOidPreCurrentLookahead(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // r15
  KIRQL v8; // cl
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // eax

  v1 = a1[4];
  v3 = 1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(87LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *a1, v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) != 0 )
  {
    if ( v4 != 1 )
      goto LABEL_15;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_qqd(88LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0LL, v1, -1073676268);
    }
    else
    {
      v5 = **(_DWORD **)(v1 + 40);
      if ( a1[3] )
      {
        v6 = *(_QWORD *)(v1 + 104);
        v7 = *(_QWORD *)(v6 + 16);
        if ( v5 <= *(_DWORD *)(v7 + 596) )
        {
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
          v9 = 0;
          v10 = *(_QWORD *)(v7 + 56);
          *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v7 + 1864) = 2300412;
          while ( v10 )
          {
            v11 = v9;
            v9 = *(_DWORD *)(v10 + 264);
            v10 = *(_QWORD *)(v10 + 392);
            if ( v9 <= v11 )
              v9 = v11;
          }
          *(_QWORD *)(v7 + 520) = 0LL;
          *(_DWORD *)(v7 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v8);
          if ( v5 > v9 )
          {
            *(_DWORD *)(v1 + 164) = v5;
            *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
            *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
            *(_QWORD *)(v1 + 40) = v1 + 164;
            *(_DWORD *)(v1 + 48) = 4;
LABEL_14:
            v3 = 0;
            goto LABEL_15;
          }
          *(_DWORD *)(v6 + 264) = v5;
LABEL_21:
          *((_DWORD *)a1 + 10) = 0;
          goto LABEL_15;
        }
      }
      else
      {
        v13 = *a1;
        if ( !*a1 )
          goto LABEL_15;
        v14 = *(_DWORD *)(v13 + 596);
        if ( v5 <= v14 )
        {
          v15 = *(_DWORD *)(v13 + 592);
          if ( v5 >= v15 )
          {
            if ( v15 )
              v14 = **(_DWORD **)(v1 + 40);
            if ( v14 > v15 )
            {
              *((_DWORD *)a1 + 10) = 0;
              goto LABEL_14;
            }
          }
          *(_DWORD *)(v1 + 52) = 4;
          *(_DWORD *)(v1 + 56) = 4;
          goto LABEL_21;
        }
      }
      *(_DWORD *)(v1 + 52) = 0;
      *(_DWORD *)(v1 + 56) = 0;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676266;
      goto LABEL_15;
    }
    v16 = a1[3];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 264);
    }
    else
    {
      if ( !*a1 )
        goto LABEL_15;
      v17 = *(_DWORD *)(*a1 + 596LL);
    }
    **(_DWORD **)(v1 + 40) = v17;
    *(_DWORD *)(v1 + 52) = 4;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(89LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *a1, v1);
  return v3;
}
