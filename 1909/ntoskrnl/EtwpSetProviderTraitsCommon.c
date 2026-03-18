/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1405C48F0
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1405C471C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407397D4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strnlen @ 0x1401A22C0 (strnlen.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405C4B84 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1406C6BD4 (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1409001A8 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  __int16 v8; // bp
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  _DWORD *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  bool v15; // r15
  char v16; // r13
  int v17; // eax
  unsigned __int64 v18; // rax
  void *v19; // r14
  unsigned int v20; // ebx
  __int128 *ProviderGroupFromTraits; // rax
  PVOID P; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF

  v8 = 0;
  v10 = a5;
  P = (PVOID)a5;
  if ( a6 < 3 )
    goto LABEL_40;
  if ( *(unsigned __int16 *)(a5 + 28) != a6 )
  {
    v20 = -1073741566;
    v19 = (void *)a5;
    goto LABEL_29;
  }
  v11 = (unsigned int)strnlen((const char *)(a5 + 30), a6 - 2) + 3;
  if ( (unsigned int)v11 > a6 )
  {
    v20 = -1073741566;
    v19 = (void *)a5;
    goto LABEL_29;
  }
  if ( (unsigned int)v11 < a6 )
  {
    while ( (int)v11 + 2 <= a6 )
    {
      LODWORD(v11) = *(unsigned __int16 *)(v11 + a5 + 28) + (_DWORD)v11;
      if ( (unsigned int)v11 >= a6 )
        goto LABEL_7;
    }
LABEL_40:
    v20 = -1073741566;
    v19 = (void *)a5;
    goto LABEL_29;
  }
LABEL_7:
  if ( (_DWORD)v11 != a6 )
  {
    v20 = -1073741566;
    v19 = (void *)a5;
    goto LABEL_29;
  }
  *(_QWORD *)a5 = 0LL;
  v12 = (_DWORD *)(a5 + 24);
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_DWORD *)(a5 + 24) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v14 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
      goto LABEL_33;
    v13 = a8 ^ v14;
  }
  else
  {
    v13 = *(_QWORD *)a8;
    v14 = *(_QWORD *)a8;
  }
  if ( !v13 )
  {
LABEL_33:
    v15 = 0;
    v14 = 0LL;
    v16 = 0;
    goto LABEL_34;
  }
  v15 = 0;
  v16 = 0;
  if ( !v14 )
  {
LABEL_19:
    if ( !v16 )
      goto LABEL_34;
    ++*(_DWORD *)(v14 + 24);
    v12 = (_DWORD *)(v14 + 24);
    v10 = v14;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v17 = TraitsCompare(a5, v14);
    if ( v17 > 0 )
      break;
    if ( v17 >= 0 )
    {
      v16 = 1;
      goto LABEL_19;
    }
    v18 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
    {
      v15 = 0;
      goto LABEL_34;
    }
LABEL_14:
    v14 = v18;
  }
  v18 = *(_QWORD *)(v14 + 8);
  if ( v18 )
    goto LABEL_14;
  v15 = 1;
LABEL_34:
  RtlRbInsertNodeEx((unsigned __int64 *)a8, v14, v15, a5);
  P = 0LL;
LABEL_21:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v10, 0LL) )
  {
    if ( v16 )
    {
      --*v12;
      v19 = P;
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, v10);
      v19 = (void *)v10;
    }
    v20 = -1073741823;
  }
  else
  {
    v19 = P;
    v20 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v20 )
  {
    if ( *(_WORD *)(v10 + 28) == 22 && *(_DWORD *)(v10 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v8 = 1024;
LABEL_28:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v8 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_28;
      v28 = 0uLL;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits(v10 + 28);
      if ( !ProviderGroupFromTraits )
        goto LABEL_28;
      v28 = *ProviderGroupFromTraits;
      v20 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v28, a1, a2, a3);
      if ( !v20 )
        goto LABEL_28;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_29:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return v20;
}
