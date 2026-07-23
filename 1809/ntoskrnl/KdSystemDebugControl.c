/*
 * XREFs of KdSystemDebugControl @ 0x140843510
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     KdpSysReadIoSpace @ 0x14028D010 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x14028D0CC (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x14028D100 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x14028D1B8 (KdpSysWriteMsr.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     KdpSysCheckLowMemory @ 0x140918AB0 (KdpSysCheckLowMemory.c)
 *     KdpSysGetVersion @ 0x140918AD0 (KdpSysGetVersion.c)
 *     KdpSysReadBusData @ 0x140918AFC (KdpSysReadBusData.c)
 *     KdpSysWriteBusData @ 0x140918B68 (KdpSysWriteBusData.c)
 *     KdpSysReadControlSpace @ 0x140919718 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140919800 (KdpSysWriteControlSpace.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdSystemDebugControl(
        int a1,
        __m128i *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        KPROCESSOR_MODE a7)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx
  int Msr; // eax
  unsigned int v17; // esi
  int v18; // esi
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // esi
  int v26; // esi
  _DWORD v27[3]; // [rsp+44h] [rbp-134h] BYREF
  PVOID P; // [rsp+50h] [rbp-128h] BYREF
  __m128i v29; // [rsp+58h] [rbp-120h]
  __int64 v30; // [rsp+68h] [rbp-110h]
  __m128i v31; // [rsp+70h] [rbp-108h]
  __int64 v32; // [rsp+80h] [rbp-F8h]
  __m128i v33; // [rsp+88h] [rbp-F0h]
  __m128i v34; // [rsp+98h] [rbp-E0h]
  __m128i v35; // [rsp+A8h] [rbp-D0h]
  __m128i v36; // [rsp+B8h] [rbp-C0h]
  __m128i v37; // [rsp+C8h] [rbp-B0h]
  __m128i v38; // [rsp+D8h] [rbp-A0h]
  __m128i v39; // [rsp+E8h] [rbp-90h]
  __m128i v40; // [rsp+F8h] [rbp-80h]
  PVOID BaseAddress[2]; // [rsp+108h] [rbp-70h]
  __int64 v42; // [rsp+118h] [rbp-60h]
  __m128i v43; // [rsp+120h] [rbp-58h]
  __int64 v44; // [rsp+130h] [rbp-48h]
  __m128i v45; // [rsp+138h] [rbp-40h]
  __int64 v46; // [rsp+148h] [rbp-30h]
  __m128i v47; // [rsp+150h] [rbp-28h]
  __int64 v48; // [rsp+160h] [rbp-18h]

  memset(v27, 0, sizeof(v27));
  P = 0LL;
  if ( (KdpBootedNodebug || KdPitchDebugger || !(_BYTE)KdDebuggerEnabled) && !KdLocalDebugEnabled )
    return 3221225506LL;
  if ( a1 > 14 )
  {
    v19 = a1 - 15;
    if ( !v19 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v39 = *a2;
      v40 = a2[1];
      v26 = _mm_cvtsi128_si32(v40);
      if ( v26 )
      {
        v15 = ExLockUserBuffer(v39.m128i_u64[1], v26, a7, IoReadAccess, &v27[1], (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteIoSpace(
                  v40.m128i_i32[1],
                  v40.m128i_i32[2],
                  v40.m128i_i32[3],
                  v39.m128i_u16[0],
                  *(unsigned __int8 **)&v27[1],
                  v26,
                  v27);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( a3 != 16 )
        return 3221225476LL;
      Msr = KdpSysReadMsr(a2->m128i_i32[0], &a2->m128i_i64[1]);
      goto LABEL_83;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( a3 != 16 )
        return 3221225476LL;
      Msr = KdpSysWriteMsr(a2->m128i_i32[0], &a2->m128i_u64[1]);
      goto LABEL_83;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v37 = *a2;
      v38 = a2[1];
      v25 = _mm_cvtsi128_si32(v38);
      if ( v25 )
      {
        v15 = ExLockUserBuffer(v37.m128i_u64[1], v25, a7, IoWriteAccess, &v27[1], (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysReadBusData(
                  v38.m128i_u32[1],
                  v38.m128i_u32[2],
                  v38.m128i_u32[3],
                  v37.m128i_u32[0],
                  *(_QWORD *)&v27[1],
                  v25,
                  v27);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      if ( a3 != 32 )
        return 3221225476LL;
      v35 = *a2;
      v36 = a2[1];
      v24 = _mm_cvtsi128_si32(v36);
      if ( v24 )
      {
        v15 = ExLockUserBuffer(v35.m128i_u64[1], v24, a7, IoReadAccess, &v27[1], (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteBusData(
                  v36.m128i_u32[1],
                  v36.m128i_u32[2],
                  v36.m128i_u32[3],
                  v35.m128i_u32[0],
                  *(_QWORD *)&v27[1],
                  v24,
                  v27);
          goto LABEL_83;
        }
        goto LABEL_84;
      }
      goto LABEL_43;
    }
    if ( v23 == 1 )
    {
      Msr = KdpSysCheckLowMemory(0LL);
      goto LABEL_83;
    }
    goto LABEL_60;
  }
  if ( a1 == 14 )
  {
    if ( a3 != 32 )
      return 3221225476LL;
    v33 = *a2;
    v34 = a2[1];
    v18 = _mm_cvtsi128_si32(v34);
    if ( v18 )
    {
      v15 = ExLockUserBuffer(v33.m128i_u64[1], v18, a7, IoWriteAccess, &v27[1], (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpSysReadIoSpace(
                v34.m128i_i32[1],
                v34.m128i_i32[2],
                v34.m128i_i32[3],
                v33.m128i_u16[0],
                *(_BYTE **)&v27[1],
                v18,
                v27);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v8 = a1 - 7;
  if ( !v8 )
  {
    if ( a5 != 40 )
      return 3221225476LL;
    KdpSysGetVersion(a4);
    v15 = 0;
    goto LABEL_84;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v47 = *a2;
    v48 = a2[1].m128i_i64[0];
    if ( (_DWORD)v48 )
    {
      v15 = ExLockUserBuffer(v47.m128i_u64[1], v48, a7, IoWriteAccess, &v27[1], (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks((PVOID)v47.m128i_i64[0], 0, (__int64)v27);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v45 = *a2;
    v46 = a2[1].m128i_i64[0];
    if ( (_DWORD)v46 )
    {
      v15 = ExLockUserBuffer(v45.m128i_u64[1], v46, a7, IoReadAccess, &v27[1], (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks((PVOID)v45.m128i_i64[0], 1, (__int64)v27);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    v43 = *a2;
    v44 = a2[1].m128i_i64[0];
    if ( (_DWORD)v44 )
    {
      v15 = ExLockUserBuffer(v43.m128i_u64[1], v44, a7, IoWriteAccess, &v27[1], (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks((PVOID)v43.m128i_i64[0], 2, (__int64)v27);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 != 24 )
      return 3221225476LL;
    *(__m128i *)BaseAddress = *a2;
    v42 = a2[1].m128i_i64[0];
    if ( (_DWORD)v42 )
    {
      v15 = ExLockUserBuffer((unsigned __int64)BaseAddress[1], v42, a7, IoReadAccess, &v27[1], (struct _MDL **)&P);
      if ( v15 >= 0 )
      {
        Msr = KdpCopyMemoryChunks(BaseAddress[0], 3, (__int64)v27);
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    goto LABEL_43;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( a3 != 24 )
        return 3221225476LL;
      v29 = *a2;
      v30 = a2[1].m128i_i64[0];
      v14 = v30;
      if ( (_DWORD)v30 )
      {
        v15 = ExLockUserBuffer(v29.m128i_u64[1], v30, a7, IoReadAccess, &v27[1], (struct _MDL **)&P);
        if ( v15 >= 0 )
        {
          Msr = KdpSysWriteControlSpace(HIDWORD(v30), v29.m128i_i64[0], *(_QWORD *)&v27[1], v14, v27);
LABEL_83:
          v15 = Msr;
          goto LABEL_84;
        }
        goto LABEL_84;
      }
LABEL_43:
      v15 = -1073741819;
      goto LABEL_84;
    }
LABEL_60:
    v15 = -1073741821;
    goto LABEL_84;
  }
  if ( a3 != 24 )
    return 3221225476LL;
  v31 = *a2;
  v32 = a2[1].m128i_i64[0];
  v17 = v32;
  if ( !(_DWORD)v32 )
    goto LABEL_43;
  v15 = ExLockUserBuffer(v31.m128i_u64[1], v32, a7, IoWriteAccess, &v27[1], (struct _MDL **)&P);
  if ( v15 >= 0 )
  {
    Msr = KdpSysReadControlSpace(HIDWORD(v32), v31.m128i_i64[0], *(_QWORD *)&v27[1], v17, v27);
    goto LABEL_83;
  }
LABEL_84:
  if ( a6 )
    *a6 = v27[0];
  if ( *(_QWORD *)&v27[1] )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)v15;
}
