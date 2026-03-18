/*
 * XREFs of ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150620
 * Callers:
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150524 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0150A40 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C025E790 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C02634C8 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DXGADAPTER::CheckKernelBlockList(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int BlockListStrings; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __m128i v14; // xmm0
  unsigned int v15; // r9d
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  unsigned int v23; // r9d
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int16 v29; // ax
  unsigned int v30; // r9d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  unsigned int v37; // r9d
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // edi
  struct _UNICODE_STRING *v44; // rbx
  unsigned int v46[4]; // [rsp+40h] [rbp-1B8h] BYREF
  __m128i v47; // [rsp+50h] [rbp-1A8h]
  struct _UNICODE_STRING v48; // [rsp+60h] [rbp-198h] BYREF

  v46[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel",
                       a2,
                       a3,
                       a4,
                       a5,
                       v46,
                       &v48);
  v8 = v46[0];
  v9 = BlockListStrings;
  if ( v46[0] >= 0x14 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 721LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !(_DWORD)v8 )
    return v9;
  v11 = (__m128i *)&v48;
  v12 = v8;
  v13 = v8;
  do
  {
    v14 = *v11;
    v15 = 0;
    v16 = _mm_cvtsi128_si32(*v11);
    v47 = *v11;
    v17 = v16;
    if ( v16 )
    {
      v18 = 0LL;
      while ( 2 )
      {
        v19 = v18 + v47.m128i_i64[1];
        v20 = -1LL;
        do
          ++v20;
        while ( *(_WORD *)(v19 + 2 * v20) );
        if ( (_DWORD)v20 )
        {
          v21 = -1LL;
          do
          {
            if ( *(_WORD *)(v19 + 2 * v21 + 2) != aGpuPvAll[v21 + 1] )
              break;
            v21 += 2LL;
            if ( v21 == 11 )
            {
              **((_DWORD **)this + 514) |= 0x80u;
              goto LABEL_17;
            }
          }
          while ( *(_WORD *)(v19 + 2 * v21) == aGpuPvAll[v21] );
          v15 += v20 + 1;
          v18 = 2LL * v15;
          if ( v18 < v17 )
            continue;
        }
        break;
      }
    }
LABEL_17:
    v22 = _mm_cvtsi128_si32(v14);
    v23 = 0;
    v47 = v14;
    v24 = v22;
    if ( v22 )
    {
      v25 = 0LL;
      while ( 2 )
      {
        v26 = v25 + v47.m128i_i64[1];
        v27 = -1LL;
        do
          ++v27;
        while ( *(_WORD *)(v26 + 2 * v27) );
        if ( (_DWORD)v27 )
        {
          v28 = -1LL;
          do
          {
            if ( *(_WORD *)(v26 + 2 * v28 + 2) != aGpuPvHighSecur[v28 + 1] )
              break;
            v28 += 2LL;
            if ( v28 == 21 )
            {
              **((_DWORD **)this + 514) |= 0x200u;
              goto LABEL_29;
            }
          }
          while ( *(_WORD *)(v26 + 2 * v28) == aGpuPvHighSecur[v28] );
          v23 += v27 + 1;
          v25 = 2LL * v23;
          if ( v25 < v24 )
            continue;
        }
        break;
      }
    }
LABEL_29:
    v29 = _mm_cvtsi128_si32(v14);
    v30 = 0;
    v47 = v14;
    v31 = v29;
    if ( v29 )
    {
      v32 = 0LL;
      do
      {
        v33 = v32 + v47.m128i_i64[1];
        v34 = -1LL;
        do
          ++v34;
        while ( *(_WORD *)(v33 + 2 * v34) );
        if ( !(_DWORD)v34 )
          break;
        v35 = 0LL;
        while ( *(_WORD *)(v33 + 2 * v35) == aGpuPAll[v35] && *(_WORD *)(v33 + 2 * v35 + 2) == aGpuPAll[v35 + 1] )
        {
          v35 += 2LL;
          if ( v35 == 10 )
          {
            **((_DWORD **)this + 514) |= 0x100u;
            goto LABEL_39;
          }
        }
        v30 += v34 + 1;
        v32 = 2LL * v30;
      }
      while ( v32 < v31 );
    }
LABEL_39:
    v36 = _mm_cvtsi128_si32(v14);
    v37 = 0;
    v47 = v14;
    v38 = v36;
    if ( v36 )
    {
      v39 = 0LL;
      do
      {
        v40 = v39 + v47.m128i_i64[1];
        v41 = -1LL;
        do
          ++v41;
        while ( *(_WORD *)(v40 + 2 * v41) );
        if ( !(_DWORD)v41 )
          break;
        v42 = 0LL;
        while ( *(_WORD *)(v40 + 2 * v42) == aDisableMpo[v42] && *(_WORD *)(v40 + 2 * v42 + 2) == aDisableMpo[v42 + 1] )
        {
          v42 += 2LL;
          if ( v42 == 12 )
          {
            **((_DWORD **)this + 514) |= 0x400u;
            goto LABEL_49;
          }
        }
        v37 += v41 + 1;
        v39 = 2LL * v37;
      }
      while ( v39 < v38 );
    }
LABEL_49:
    ++v11;
    --v13;
  }
  while ( v13 );
  v46[0] = 0;
  v43 = ConvertStringsToOneMultiString(&v48, v8, (unsigned __int16 **)this + 515, v46);
  if ( v43 >= 0 )
    *((_DWORD *)this + 1032) = 2 * v46[0];
  if ( v43 == -1073741637 )
    *((_BYTE *)this + 4132) = 1;
  v44 = &v48;
  do
  {
    DxgkFreeUnicodeString(v44++);
    --v12;
  }
  while ( v12 );
  return (unsigned int)v43;
}
