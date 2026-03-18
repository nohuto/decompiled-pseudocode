/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1405C4A10
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1405C4840 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14070BE24 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     strnlen @ 0x140197380 (strnlen.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C4680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405C4D00 (EtwpGetProviderGroupFromTraits.c)
 *     TraitsCompare @ 0x1406A3E54 (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1408C3648 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  __int16 v8; // bp
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  UINT *v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  bool v16; // r14
  char v17; // r12
  int v18; // eax
  unsigned __int64 v19; // rax
  __int128 *ProviderGroupFromTraits; // rax
  UINT puResult; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-74h]
  PVOID P; // [rsp+38h] [rbp-70h]
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-68h]
  unsigned int *v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF

  v8 = 0;
  v10 = (__int64)a5;
  Mutex = FastMutex;
  v26 = a3;
  v23 = a2;
  v27 = a1;
  P = a5;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( *((unsigned __int16 *)a5 + 14) != a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  v12 = (unsigned int)strnlen((const char *)a5 + 30, a6 - 2) + 3;
  if ( (unsigned int)v12 > a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      LODWORD(v12) = *(unsigned __int16 *)((char *)a5 + v12 + 28) + (_DWORD)v12;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_10;
    }
LABEL_2:
    v11 = -1073741566;
    goto LABEL_44;
  }
LABEL_10:
  if ( (_DWORD)v12 != a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  a5[2] = 0LL;
  v13 = (UINT *)(a5 + 3);
  *((_DWORD *)a5 + 6) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v14 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_17:
      v16 = 0;
      v14 = 0LL;
      v17 = 0;
LABEL_18:
      RtlRbInsertNodeEx(a8, v14, v16, a5);
      P = 0LL;
      goto LABEL_19;
    }
    v15 = a8 ^ v14;
  }
  else
  {
    v15 = *(_QWORD *)a8;
    v14 = *(_QWORD *)a8;
  }
  if ( !v15 )
    goto LABEL_17;
  v16 = 0;
  v17 = 0;
  if ( !v14 )
    goto LABEL_32;
  while ( 1 )
  {
    v18 = TraitsCompare(a5, v14);
    if ( v18 > 0 )
    {
      v19 = *(_QWORD *)(v14 + 8);
      if ( !v19 )
      {
        v16 = 1;
        goto LABEL_18;
      }
      goto LABEL_29;
    }
    if ( v18 >= 0 )
      break;
    v19 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
    {
      v16 = 0;
      goto LABEL_18;
    }
LABEL_29:
    v14 = v19;
  }
  v17 = 1;
LABEL_32:
  if ( !v17 )
    goto LABEL_18;
  v13 = (UINT *)(v14 + 24);
  v10 = v14;
  v11 = RtlUIntAdd(*(_DWORD *)(v14 + 24), 1u, &puResult);
  if ( v11 < 0 )
  {
    KeReleaseGuardedMutex(Mutex);
  }
  else
  {
    *v13 = puResult;
LABEL_19:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v10, 0LL) )
    {
      if ( v17 )
      {
        --*v13;
      }
      else
      {
        RtlRbRemoveNode(a8, v10);
        P = (PVOID)v10;
      }
      v11 = -1073741823;
    }
    else
    {
      v11 = 0;
    }
    KeReleaseGuardedMutex(Mutex);
    if ( !v11 )
    {
      if ( *(_WORD *)(v10 + 28) == 22 && *(_DWORD *)(v10 + 30) == 33559296 )
      {
        if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
          v8 = 1024;
LABEL_43:
        _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v8 | 0x200);
      }
      else
      {
        if ( *(_QWORD *)(a4 + 40) )
          goto LABEL_43;
        ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits(v10 + 28);
        if ( !ProviderGroupFromTraits )
          goto LABEL_43;
        v28 = *ProviderGroupFromTraits;
        v11 = EtwpAddRegEntryToGroup(a4, &v28, v27, v23, v26);
        if ( !v11 )
          goto LABEL_43;
        EtwpReleaseProviderTraitsReference(a4);
      }
    }
  }
LABEL_44:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
