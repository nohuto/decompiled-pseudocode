/*
 * XREFs of PspSetEffectiveJobLimits @ 0x1406BAC04
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x1406BABD0 (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspSetEffectiveLimit @ 0x1406BAEC0 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // al
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned __int8 v7; // cl
  int v8; // r8d
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // dl
  unsigned int v18; // ecx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _OWORD *v23; // rbp
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27[88]; // [rsp+20h] [rbp-E8h] BYREF

  v1 = *(_QWORD *)(a1 + 1072);
  v3 = PspSetEffectiveLimit(16LL);
  v5 = v4 - 15;
  v6 = (unsigned int)(v4 + 112);
  if ( v3 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v4) != 0 )
    {
      if ( !v1 || (v23 = (_OWORD *)(v1 + 616), (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v1 + 616))) )
      {
        v13 = a1 + 616;
        v14 = (unsigned __int16 *)(a1 + 264);
      }
      else
      {
        KeAndAffinityEx((unsigned __int16 *)(v1 + 616), (unsigned __int16 *)(a1 + 264), v27);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), v27)
          || (unsigned int)KeIsEmptyAffinityEx(v27) )
        {
          *(_OWORD *)(a1 + 616) = *v23;
          *(_OWORD *)(a1 + 632) = *(_OWORD *)(v1 + 632);
          *(_OWORD *)(a1 + 648) = *(_OWORD *)(v1 + 648);
          *(_OWORD *)(a1 + 664) = *(_OWORD *)(v1 + 664);
          *(_OWORD *)(a1 + 680) = *(_OWORD *)(v1 + 680);
          *(_OWORD *)(a1 + 696) = *(_OWORD *)(v1 + 696);
          *(_OWORD *)(a1 + 712) = *(_OWORD *)(v1 + 712);
          v15 = v6 + a1 + 616;
          *(_OWORD *)(v15 - 16) = *(_OWORD *)(v1 + 728);
          *(_OWORD *)v15 = *(_OWORD *)((char *)v23 + v6);
          *(_OWORD *)(v15 + 16) = *(_OWORD *)((char *)v23 + v6 + 16);
          v16 = *(_QWORD *)((char *)v23 + v6 + 32);
          goto LABEL_18;
        }
        v13 = a1 + 616;
        v14 = v27;
      }
    }
    else
    {
      v13 = a1 + 616;
      if ( !v1 )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)v13 = 1310721;
        memset((void *)(a1 + 624), 0, 0xA0uLL);
        goto LABEL_2;
      }
      v14 = (unsigned __int16 *)(v1 + 616);
    }
    *(_OWORD *)v13 = *(_OWORD *)v14;
    *(_OWORD *)(v13 + 16) = *((_OWORD *)v14 + 1);
    *(_OWORD *)(v13 + 32) = *((_OWORD *)v14 + 2);
    *(_OWORD *)(v13 + 48) = *((_OWORD *)v14 + 3);
    *(_OWORD *)(v13 + 64) = *((_OWORD *)v14 + 4);
    *(_OWORD *)(v13 + 80) = *((_OWORD *)v14 + 5);
    *(_OWORD *)(v13 + 96) = *((_OWORD *)v14 + 6);
    v15 = v6 + v13;
    *(_OWORD *)(v15 - 16) = *((_OWORD *)v14 + 7);
    *(_OWORD *)v15 = *(_OWORD *)((char *)v14 + v6);
    *(_OWORD *)(v15 + 16) = *(_OWORD *)((char *)v14 + v6 + 16);
    v16 = *(_QWORD *)((char *)v14 + v6 + 32);
LABEL_18:
    *(_QWORD *)(v15 + 32) = v16;
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(32LL) )
  {
    if ( v1 )
      v17 = *(_BYTE *)(v1 + 872);
    else
      v17 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & v7) != 0
      && *((_BYTE *)&PspPriorityClassRank + v17) >= *((_BYTE *)&PspPriorityClassRank + *(unsigned __int8 *)(a1 + 873)) )
    {
      v17 = *(_BYTE *)(a1 + 873);
    }
    *(_BYTE *)(a1 + 872) = v17;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit((unsigned int)v6) )
  {
    if ( v1 )
      v18 = *(_DWORD *)(v1 + 852);
    else
      v18 = 10;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 && (v24 = *(_DWORD *)(a1 + 484), v24 < v18) )
      *(_DWORD *)(a1 + 852) = v24;
    else
      *(_DWORD *)(a1 + 852) = v18;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v5) )
  {
    if ( v1 )
    {
      v19 = *(_QWORD *)(v1 + 792);
      v20 = *(_QWORD *)(v1 + 800);
    }
    else
    {
      v19 = 0LL;
      v20 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v5) == 0
      || (v25 = *(_QWORD *)(a1 + 248), v25 >= v20) && v20 )
    {
      *(_QWORD *)(a1 + 800) = v20;
      *(_QWORD *)(a1 + 792) = v19;
    }
    else
    {
      *(_QWORD *)(a1 + 800) = v25;
      *(_QWORD *)(a1 + 792) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL) )
  {
    if ( v1 )
    {
      v9 = *(_QWORD *)(v1 + 808);
      v10 = *(_QWORD *)(v1 + 816);
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    if ( (v8 & *(_DWORD *)(a1 + 256)) == 0 || (v22 = *(_QWORD *)(a1 + 576), v22 >= v9) && v9 )
    {
      *(_QWORD *)(a1 + 808) = v9;
      *(_QWORD *)(a1 + 816) = v10;
    }
    else
    {
      *(_QWORD *)(a1 + 808) = v22;
      *(_QWORD *)(a1 + 816) = a1;
    }
  }
  result = PspSetEffectiveLimit(2LL);
  if ( (_BYTE)result )
  {
    if ( v1 )
    {
      result = *(_QWORD *)(v1 + 784);
      v21 = *(_QWORD *)(v1 + 824);
    }
    else
    {
      result = 0LL;
      v21 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v26 = *(_QWORD *)(a1 + 224), v26 >= result) && result )
    {
      *(_QWORD *)(a1 + 784) = result;
      *(_QWORD *)(a1 + 824) = v21;
    }
    else
    {
      *(_QWORD *)(a1 + 784) = v26;
      *(_QWORD *)(a1 + 824) = a1;
    }
  }
  v12 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 848) = v12;
  if ( v1 )
  {
    result = v12 | *(_DWORD *)(v1 + 848);
    *(_DWORD *)(a1 + 848) = result;
  }
  return result;
}
