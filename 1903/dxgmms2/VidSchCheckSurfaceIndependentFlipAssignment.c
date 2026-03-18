/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x1C00138C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 */

_DWORD *__fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        unsigned int *a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _LUID *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  unsigned int v15; // ebx
  _DWORD *result; // rax
  char v20; // r15
  int v21; // r8d
  char v22; // si
  __int64 v23; // rdi
  __int128 v24; // xmm6
  __int128 v25; // xmm7
  char v26; // r14
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int i; // eax
  int v31; // r8d
  __int64 v32; // rdx
  _LUID v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm1
  struct _LUID DestinationLuid; // [rsp+28h] [rbp-89h] BYREF
  _LUID DestinationLuid_8[2]; // [rsp+30h] [rbp-81h]
  __int128 v40; // [rsp+40h] [rbp-71h]
  _BYTE v41[36]; // [rsp+50h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int8 v43; // [rsp+F8h] [rbp+47h]
  char v45; // [rsp+140h] [rbp+8Fh]
  char v46; // [rsp+148h] [rbp+97h]

  v15 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  result = a12;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  DestinationLuid = 0LL;
  RtlCopyLuid(&DestinationLuid, a3);
  v46 = 0;
  v43 = 0;
  memset(v41, 0, sizeof(v41));
  *(_OWORD *)&DestinationLuid_8[0].LowPart = 0uLL;
  v20 = 0;
  v40 = 0uLL;
  v45 = *(_BYTE *)(a1 + 144);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v21 = 0;
  if ( *(int *)(a1 + 2864) < 0 )
  {
LABEL_3:
    v22 = (char)a8;
    LODWORD(v23) = (_DWORD)a8;
    v15 = (unsigned int)a8;
    v24 = v40;
    v25 = *(_OWORD *)&DestinationLuid_8[0].LowPart;
LABEL_4:
    v26 = v45;
    goto LABEL_5;
  }
  v27 = *(_DWORD **)(a1 + 2704);
  v28 = 0LL;
  while ( *v27 != DestinationLuid.LowPart || v27[1] != DestinationLuid.HighPart )
  {
    ++v21;
    ++v28;
    v27 += 34;
    if ( v28 > *(int *)(a1 + 2864) )
      goto LABEL_3;
  }
  v29 = *(_QWORD *)(a1 + 2704) + 136LL * v21;
  v20 = 1;
  for ( i = *(_DWORD *)(v29 + 16); (i & 1) == 0; i >>= 1 )
    ++v15;
  v31 = *(_DWORD *)(v29 + 112);
  v23 = *(unsigned int *)(v29 + 20);
  v32 = *(_QWORD *)(a1 + 8LL * v15 + 2576);
  v22 = *(_BYTE *)(v32 + 2296);
  v25 = *(_OWORD *)(v32 + 2300);
  v24 = *(_OWORD *)(v32 + 2316);
  if ( (unsigned int)(v31 - 1) > 1 )
  {
    if ( v31 == 3 && a4 != -1 && a4 == *(_QWORD *)(v29 + 8) )
    {
      *a11 = 1;
      v20 = 1;
    }
    goto LABEL_4;
  }
  if ( a4 == *(_QWORD *)(v29 + 8) || a4 == -1 )
  {
    if ( *(_BYTE *)(v29 + 96) )
    {
      v26 = v45;
      v46 = 1;
      v43 = *(_BYTE *)(v29 + 108);
      DestinationLuid_8[0] = *(_LUID *)(v29 + 88);
      if ( v43 || v45 )
      {
        v34 = *(_OWORD *)(216 * v23 + v32 + 136);
        v35 = *(_OWORD *)(216 * v23 + v32 + 152);
        *(_DWORD *)&v41[32] = *(_DWORD *)(216 * v23 + v32 + 168);
        *(_OWORD *)v41 = v34;
        *(_OWORD *)&v41[16] = v35;
      }
      goto LABEL_23;
    }
    v46 = 0;
  }
  else
  {
    *a10 = 1;
    *a8 = v23;
  }
  v26 = v45;
LABEL_23:
  v20 = 1;
LABEL_5:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v46 )
  {
    *a6 = 1;
    *a8 = v23;
    v33 = DestinationLuid_8[0];
    *a7 = v43;
    *a9 = v33;
    if ( v43 || v26 )
    {
      v36 = *(_DWORD *)&v41[32];
      v37 = *(_OWORD *)&v41[16];
      *(_OWORD *)a5 = *(_OWORD *)v41;
      *(_OWORD *)(a5 + 16) = v37;
      *(_DWORD *)(a5 + 32) = v36;
    }
  }
  if ( v20 )
    *a2 = v15;
  *a12 = v22 != 0;
  if ( a13 )
    *a13 = v25;
  result = a14;
  if ( a14 )
    *a14 = v24;
  return result;
}
