/*
 * XREFs of ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00E9D68
 * Callers:
 *     ndisOidPostWakeUpPatternList @ 0x1C004AFE0 (ndisOidPostWakeUpPatternList.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisCreatePMPacketPattern @ 0x1C00E6508 (ndisCreatePMPacketPattern.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r9d
  SIZE_T v4; // r10
  char *v5; // rbp
  char *v6; // r8
  __int64 v7; // rax
  int v8; // eax
  size_t v9; // rbx
  size_t v10; // r8
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r15
  int v13; // r12d
  _DWORD *v14; // rsi
  _DWORD *PMPacketPattern; // rax
  void *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rax
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x73u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  *(_DWORD *)(v1 + 52) = 0;
  v6 = v5;
  *(_DWORD *)(v1 + 56) = 0;
  while ( v6 )
  {
    if ( *((_DWORD *)v6 + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)v6 + 43) + *((_DWORD *)v6 + 41) + 24;
      v2 += Size;
    }
    v7 = *((unsigned int *)v6 + 38);
    if ( (_DWORD)v7 )
      v6 = &v5[v7];
    else
      v6 = 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v8 = 0;
  if ( *(_DWORD *)(v1 + 48) < v2 )
  {
    v8 = -1073676268;
    *(_DWORD *)(v1 + 56) = v2;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  v9 = v4;
  if ( v8 )
  {
    v10 = v4;
LABEL_16:
    memset(v5, 0, v10);
    return;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7877444Eu);
  v12 = PoolWithTag;
  v10 = v9;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_16;
  }
  memmove(PoolWithTag, v5, v9);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v13 = 0;
  v14 = v12;
  while ( v14[3] != 1 )
  {
LABEL_23:
    v18 = (unsigned int)v14[38];
    if ( (_DWORD)v18 )
      v14 = (_DWORD *)((char *)v12 + v18);
    else
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_29;
  }
  PMPacketPattern = ndisCreatePMPacketPattern(v14, (unsigned int *)&Size);
  v16 = PMPacketPattern;
  if ( PMPacketPattern )
  {
    v17 = (unsigned int)Size;
    memmove(v5, PMPacketPattern, (unsigned int)Size);
    ExFreePoolWithTag(v16, 0);
    v13 += Size;
    v5 += v17;
    goto LABEL_23;
  }
  *(_DWORD *)(a1 + 40) = -1073741670;
LABEL_29:
  *(_DWORD *)(v1 + 52) = v13;
  *(_DWORD *)(v1 + 56) = v13;
  ExFreePoolWithTag(v12, 0);
}
