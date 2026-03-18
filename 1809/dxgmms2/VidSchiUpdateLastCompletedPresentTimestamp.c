/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0009DE0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C000EE78 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0013C90 (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0013E94 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0013F60 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqx @ 0x1C00269DC (McTemplateK0pqx.c)
 *     McTemplateK0pqxxxx @ 0x1C002CFC4 (McTemplateK0pqxxxx.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  LARGE_INTEGER *v4; // r15
  char v7; // bl
  LARGE_INTEGER v8; // rdi
  __int64 v9; // rsi
  LARGE_INTEGER v10; // rax
  int v11; // edx
  LARGE_INTEGER v12; // rcx
  int v13; // r8d
  LARGE_INTEGER v14; // r9
  LARGE_INTEGER v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11
  char v26; // r12
  unsigned int v27; // ebx
  int v28; // esi
  __int64 *v29; // rcx
  __int64 v30; // r9
  unsigned int i; // esi
  __int64 *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned int refreshed; // eax
  unsigned __int64 v36; // r10
  int v37; // ecx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // r8
  unsigned __int64 v45; // [rsp+50h] [rbp-68h]
  union _LARGE_INTEGER v46; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v47; // [rsp+60h] [rbp-58h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  LARGE_INTEGER v49; // [rsp+70h] [rbp-48h]
  LARGE_INTEGER *v50; // [rsp+78h] [rbp-40h]
  unsigned int v51; // [rsp+C0h] [rbp+8h]
  int v53; // [rsp+D8h] [rbp+20h]

  *((_QWORD *)&v3 + 1) = a2;
  v4 = *(LARGE_INTEGER **)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 404);
  v50 = v4;
  v7 = BYTE8(v3);
  v8 = v4[4];
  v9 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  v53 = v9;
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return v3;
  v10 = KeQueryPerformanceCounter(&v46);
  v14 = v4[23];
  v15 = v10;
  v49 = v10;
  v48 = v9;
  if ( !v14.QuadPart && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx(
        v12.LowPart,
        v11,
        v13,
        *(_QWORD *)(v8.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 404),
        v10.QuadPart,
        0,
        0);
LABEL_47:
    v26 = v51;
    goto LABEL_25;
  }
  v16 = v10.QuadPart - v14.QuadPart;
  if ( v7 || a3 )
  {
    QuadPart = v46.QuadPart;
  }
  else
  {
    QuadPart = v46.QuadPart;
    v12.QuadPart = 10000000 * v16;
    if ( is_mul_ok(v16, 0x989680uLL) )
    {
      if ( v46.QuadPart == 10000000 )
      {
        *(_QWORD *)&v3 = 7609472 * v16;
        *((_QWORD *)&v3 + 1) = v12.QuadPart / 0x989680uLL;
      }
      else
      {
        *(_QWORD *)&v3 = 10000000 * v16 / v46.QuadPart;
        *((_QWORD *)&v3 + 1) = v3;
      }
    }
    else
    {
      v12.QuadPart = v16 / v46.QuadPart;
      *(_QWORD *)&v3 = 10000000 * (v16 % v46.QuadPart) / v46.QuadPart;
      *((_QWORD *)&v3 + 1) = v3 + 10000000 * (v16 / v46.QuadPart);
    }
    if ( *((_QWORD *)&v3 + 1) < *(_QWORD *)(v8.QuadPart + 2264) )
      return v3;
  }
  v51 = *(_DWORD *)(v8.QuadPart + 4 * v9 + 188);
  v18 = v16 * v51;
  v3 = v18 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v19 = v18 / 0x64;
  v47 = v19;
  if ( !v19 && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx(
                         v12.LowPart,
                         DWORD2(v3),
                         QuadPart,
                         *(_QWORD *)(v8.QuadPart + 16),
                         2,
                         *(_DWORD *)(a1 + 404),
                         v16,
                         0,
                         0);
    return v3;
  }
  v20 = 10000000 * v19;
  v21 = 10000000 * v19;
  if ( is_mul_ok(v19, 0x989680uLL) )
  {
    if ( QuadPart == 10000000 )
    {
      v22 = v21 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v23 = v21 / 0x989680;
    }
    else
    {
      *((_QWORD *)&v22 + 1) = v20 % QuadPart;
      v23 = v20 / QuadPart;
    }
  }
  else
  {
    v21 = v19 / QuadPart;
    *((_QWORD *)&v22 + 1) = 10000000 * (v19 % QuadPart) % QuadPart;
    v23 = 10000000 * (v19 % QuadPart) / QuadPart + 10000000 * (v19 / QuadPart);
  }
  v24 = *(_QWORD *)(v8.QuadPart + 2256);
  v45 = v23;
  if ( v23 > v24 )
  {
    if ( !a3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqxxxx(
          v21,
          DWORD2(v22),
          QuadPart,
          *(_QWORD *)(v8.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 404),
          v15.QuadPart,
          v14.QuadPart,
          0);
      goto LABEL_47;
    }
    LOBYTE(v23) = *(_QWORD *)(v8.QuadPart + 2256);
    v45 = *(_QWORD *)(v8.QuadPart + 2256);
    v38 = v24 * QuadPart;
    if ( is_mul_ok(v24, QuadPart) )
    {
      v25 = v38 / 0x989680;
      v47 = v38 / 0x989680;
    }
    else
    {
      v25 = QuadPart * (v24 / 0x989680) + QuadPart * (v24 % 0x989680) / 0x989680;
      LOBYTE(v23) = *(_QWORD *)(v8.QuadPart + 2256);
      v47 = v25;
    }
  }
  else
  {
    v25 = v47;
  }
  v26 = 0;
  v27 = 0;
  v28 = (1 << *(_DWORD *)(a1 + 404)) - 1;
  if ( !*(_DWORD *)(v8.QuadPart + 68) )
    goto LABEL_25;
  do
  {
    v29 = *(__int64 **)(v8.QuadPart + 616);
    if ( v27 < *(_DWORD *)(v8.QuadPart + 688) )
      v29 += v27;
    v30 = *v29;
    if ( (v28 & *(_DWORD *)(*v29 + 1752)) != 0 || (v28 & *(_DWORD *)(v30 + 1756)) != 0 )
    {
      v36 = *(_QWORD *)(v30 + 8 * v48 + 1952);
      if ( v36 <= v16 * (100 - v51) / 0x64 && !a3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_43:
          LOBYTE(v23) = v45;
          goto LABEL_23;
        }
        if ( is_mul_ok(v16, 0x989680uLL) )
          v39 = v16 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v39 = 10000000 * (v16 / QuadPart) + 10000000 * (v16 % QuadPart) / QuadPart;
        if ( is_mul_ok(v36, 0x989680uLL) )
          v40 = v36 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v40 = 10000000 * (v36 / QuadPart) + 10000000 * (v36 % QuadPart) / QuadPart;
        McTemplateK0pqxxxx(
          *(unsigned __int16 *)(v30 + 4),
          *(_DWORD *)(a1 + 404),
          v40,
          *(_QWORD *)(v8.QuadPart + 16),
          5,
          *(_DWORD *)(a1 + 404),
          v40,
          *(_WORD *)(v30 + 4),
          v39);
LABEL_74:
        QuadPart = v46.QuadPart;
        v25 = v47;
        goto LABEL_43;
      }
      LOBYTE(v23) = v45;
      v26 = 1;
      *(_BYTE *)(v30 + 2008) = 1;
      *(_QWORD *)(v30 + 2000) = v45;
      *(_QWORD *)(v30 + 1992) = v25;
      *(_QWORD *)(v30 + 1984) = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        if ( is_mul_ok(v16, 0x989680uLL) )
          v42 = v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)v46.QuadPart;
        else
          v42 = 10000000 * (v16 / v46.QuadPart) + 10000000 * (v16 % v46.QuadPart) / v46.QuadPart;
        v43 = *(_QWORD *)(v30 + 8 * v48 + 1952);
        if ( is_mul_ok(v43, 0x989680uLL) )
        {
          v41 = v43 * (unsigned __int128)0x989680uLL / (unsigned __int64)v46.QuadPart;
        }
        else
        {
          v43 /= v46.QuadPart;
          v41 = 10000000 * v43
              + (unsigned __int64)(10000000 * (*(_QWORD *)(v30 + 8 * v48 + 1952) % v46.QuadPart)) / v46.QuadPart;
        }
        McTemplateK0pqxxxx(
          *(unsigned __int16 *)(v30 + 4),
          *(_DWORD *)(a1 + 404),
          v43,
          *(_QWORD *)(v8.QuadPart + 16),
          0,
          *(_DWORD *)(a1 + 404),
          v41,
          *(_WORD *)(v30 + 4),
          v42);
        goto LABEL_74;
      }
      QuadPart = v46.QuadPart;
    }
LABEL_23:
    ++v27;
  }
  while ( v27 < *(_DWORD *)(v8.QuadPart + 68) );
  v15 = v49;
  if ( v26 )
  {
    v37 = *(_DWORD *)(a1 + 404) - 1;
    *(_DWORD *)(v8.QuadPart + 184) = v37;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqx(v37, (unsigned int)&EventYieldStartAdapter, QuadPart, *(_QWORD *)(v8.QuadPart + 16), v37, v23);
  }
LABEL_25:
  for ( i = 0; i < *(_DWORD *)(v8.QuadPart + 68); ++i )
  {
    v32 = *(__int64 **)(v8.QuadPart + 616);
    if ( i < *(_DWORD *)(v8.QuadPart + 688) )
      v32 += i;
    v33 = *v32;
    *(_QWORD *)(v33 + 8LL * v53 + 1920) = 0LL;
    *(_QWORD *)(v33 + 8LL * v53 + 1952) = 0LL;
    *(LARGE_INTEGER *)(v33 + 8LL * v53 + 1888) = v15;
    v34 = *(_QWORD *)(v33 + 8LL * *(unsigned int *)(v33 + 1552) + 1560);
    if ( v34 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v34 + 404)] >= v53 && v15.QuadPart )
      *(LARGE_INTEGER *)(v33 + 8LL * v53 + 1920) = v15;
    if ( v26
      && *(_BYTE *)(v33 + 2008)
      && !*(_QWORD *)(v33 + 1984)
      && v34
      && *(_DWORD *)(v34 + 404) <= *(_DWORD *)(v8.QuadPart + 184) )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v33);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v33,
        (LARGE_INTEGER)v15.QuadPart,
        (union _LARGE_INTEGER)v46.QuadPart,
        refreshed);
    }
  }
  *(_QWORD *)&v3 = v50;
  v50[23] = v15;
  return v3;
}
