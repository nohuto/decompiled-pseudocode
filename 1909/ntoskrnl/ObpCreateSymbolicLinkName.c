/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1406E67F0
 * Callers:
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1400894F4 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 */

char __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int16 *v2; // rax
  __int64 v4; // r9
  void **v5; // r9
  __int16 v6; // r10
  char v7; // r12
  char v8; // r13
  struct _LIST_ENTRY *CurrentSilo; // rax
  PVOID v10; // rbx
  __m128i v11; // xmm6
  void ***CurrentServerSiloGlobals; // rsi
  void *v13; // r14
  __int16 v14; // di
  _QWORD *v15; // xmm0_8
  _WORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  struct _OBJECT_TYPE *v19; // rax
  char v20; // bl
  __int64 v21; // rdi
  unsigned int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // zf
  __m128i v28; // [rsp+38h] [rbp-49h]
  __m128i v29; // [rsp+48h] [rbp-39h] BYREF
  __int64 v30[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v31; // [rsp+68h] [rbp-19h]
  int v32; // [rsp+70h] [rbp-11h]
  __int16 v33; // [rsp+74h] [rbp-Dh]
  __int16 v34; // [rsp+76h] [rbp-Bh]
  int v35; // [rsp+78h] [rbp-9h]
  int v36; // [rsp+7Ch] [rbp-5h]
  int v38; // [rsp+F0h] [rbp+6Fh]
  void *v39; // [rsp+F8h] [rbp+77h]
  PVOID Object; // [rsp+100h] [rbp+7Fh]

  v1 = a1 - 48;
  v31 = 0LL;
  LOBYTE(v2) = *(_BYTE *)(a1 - 48 + 26);
  v32 = 0;
  v33 = 0;
  v38 = 64;
  v36 = 0;
  if ( ((unsigned __int8)v2 & 2) != 0 )
  {
    v2 = (unsigned __int16 *)ObpInfoMaskToOffset[(unsigned __int8)v2 & 3];
    v4 = v1 - (_QWORD)v2;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return (char)v2;
  v2 = *(unsigned __int16 **)v4;
  if ( !*(_QWORD *)(*(_QWORD *)v4 + 304LL) )
    return (char)v2;
  LOBYTE(v2) = 4;
  if ( *(_WORD *)(v4 + 8) != 4 )
    return (char)v2;
  v2 = *(unsigned __int16 **)(v4 + 16);
  if ( v2[1] != 58 )
    return (char)v2;
  LOWORD(v2) = NLS_UPCASE(*v2);
  if ( (unsigned __int16)((_WORD)v2 - 65) > 0x19u )
    return (char)v2;
  v34 = v6;
  *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
  v7 = v6;
  v8 = v6;
  v39 = *v5;
  *(_OWORD *)v30 = 0LL;
  v35 = -60876;
  CurrentSilo = PsGetCurrentSilo();
  Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v10 = Object;
  ObfReferenceObject(Object);
  v11 = *(__m128i *)(a1 + 8);
  v28 = v11;
  CurrentServerSiloGlobals = (void ***)PsGetCurrentServerSiloGlobals();
  while ( 1 )
  {
    v13 = v10;
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) & 7) != 0 || !**CurrentServerSiloGlobals )
    {
      v14 = v28.m128i_i16[0];
LABEL_48:
      v16 = (_WORD *)v28.m128i_i64[1];
      goto LABEL_15;
    }
    v14 = _mm_cvtsi128_si32(v11);
    v28.m128i_i16[0] = v14;
    if ( (unsigned __int16)v14 < 8u )
      goto LABEL_48;
    v15 = (_QWORD *)_mm_srli_si128(v11, 8).m128i_u64[0];
    v16 = v15;
    if ( *v15 == ObpDosDevicesShortNamePrefix )
    {
      v16 = v15 + 1;
      v14 -= 8;
      v28.m128i_i64[1] = (__int64)(v15 + 1);
      v28.m128i_i16[0] = v14;
      v13 = **CurrentServerSiloGlobals;
      v11 = v28;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v16 == 92 )
      {
        ++v16;
        v14 -= 2;
        v28.m128i_i64[1] = (__int64)v16;
        v28.m128i_i16[0] = v14;
        v11 = v28;
      }
      v29 = v11;
      if ( v14 )
      {
        do
        {
          if ( *v16 == 92 )
            break;
          ++v16;
          v26 = v14 == 2;
          v14 -= 2;
          v28.m128i_i16[0] = v14;
        }
        while ( !v26 );
        v28.m128i_i64[1] = (__int64)v16;
        v11 = v28;
      }
      v29.m128i_i16[0] -= v14;
      if ( !v29.m128i_i16[0] )
        goto LABEL_42;
      if ( v13 == v39 )
      {
        v34 = 257;
      }
      else
      {
        v7 = 0;
        v8 = 0;
      }
      v17 = ObpLookupDirectoryEntryEx(v13, (unsigned __int16 *)&v29, 0, 0LL, 0, (__int64)v30);
      v18 = v17;
      if ( v13 == v39 )
      {
        LOBYTE(v34) = v7;
        HIBYTE(v34) = v8;
      }
      else
      {
        v8 = HIBYTE(v34);
        v7 = v34;
      }
      if ( !v17 )
        goto LABEL_30;
      v19 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8)];
      if ( v19 != ObpDirectoryObjectType )
        break;
      v13 = (void *)v18;
    }
    if ( v19 != ObpSymbolicLinkObjectType || *(_DWORD *)(v18 + 24) )
      break;
    if ( !v38 )
    {
      v18 = 0LL;
      break;
    }
    v11 = *(__m128i *)(v18 + 8);
    v10 = Object;
    --v38;
    v28 = v11;
  }
LABEL_30:
  v20 = 1;
  v21 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v18
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v18 - 48) >> 8)] == IoDeviceObjectType )
  {
    v22 = *(_DWORD *)(v18 + 72);
    if ( v22 <= 0x13 )
    {
      if ( v22 < 0x12 )
      {
        if ( v22 < 2 )
          goto LABEL_44;
        if ( v22 <= 3 )
        {
          v20 = 5;
          goto LABEL_39;
        }
        if ( v22 <= 6 )
          goto LABEL_44;
        if ( v22 <= 9 )
        {
          v20 = ((*(_DWORD *)(v18 + 52) & 1) == 0) + 2;
          goto LABEL_39;
        }
        v26 = v22 == 16;
LABEL_59:
        if ( v26 )
          goto LABEL_60;
LABEL_44:
        v20 = 0;
        goto LABEL_39;
      }
LABEL_60:
      v20 = 4;
      goto LABEL_39;
    }
    if ( v22 == 20 )
      goto LABEL_60;
    if ( v22 != 36 )
    {
      v26 = v22 == 40;
      goto LABEL_59;
    }
    v20 = 6;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  v24 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v25 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v24 + v21 + 32) = v20;
  *(_DWORD *)(v21 + 28) |= v25;
  if ( (void **)v21 == *CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v25;
  else
    ++*((_DWORD *)CurrentServerSiloGlobals + v24 + 3);
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_42:
  ObpReleaseLookupContext((__int64)v30);
  LOBYTE(v2) = ObfDereferenceObject(Object);
  return (char)v2;
}
