/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x18000AD08
 * Callers:
 *     EtwpProcessNotification @ 0x180008510 (EtwpProcessNotification.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18000A68C (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x1800875B4 (EtwpDisableTraceProviders.c)
 * Callees:
 *     EtwpAllocateUmGuidEntry @ 0x180005F8C (EtwpAllocateUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800062DC (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x18000630C (EtwpReferenceUmGuidEntry.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180006330 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180007A48 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpFindGuidEntry @ 0x18000AB50 (EtwpFindGuidEntry.c)
 *     EtwpEventApiCallback @ 0x18000B0D4 (EtwpEventApiCallback.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x18008262C (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpIsPrivateLoggerOn @ 0x180083F04 (EtwpIsPrivateLoggerOn.c)
 *     EtwpGetUmProcessImageInfo @ 0x18010D670 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2)
{
  int v2; // r14d
  char *GuidEntry; // rbx
  unsigned int v4; // r12d
  char v7; // bp
  char v8; // r15
  char *v9; // r8
  char v10; // dl
  _BYTE *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rcx
  char *v16; // r8
  unsigned int v17; // ecx
  _BYTE *v18; // rax

  v2 = *(_DWORD *)(a2 + 72);
  GuidEntry = *(char **)(a1 + 248);
  v4 = 4;
  v7 = 0;
  v8 = 0;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v9 = (char *)(a1 + 104);
LABEL_4:
      v7 = v9[20];
      *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a2 + 88);
      v9[21] = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v9 + 4) = *(_DWORD *)(a2 + 80);
      v9[20] = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v13 = 3LL * v4;
          *(_OWORD *)(a1 + 8 * v13 + 128) = *(_OWORD *)v9;
          *(_QWORD *)(a1 + 8 * v13 + 144) = *((_QWORD *)v9 + 2);
        }
        EtwpUpdatePrivateEnableInfo(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *((_DWORD *)GuidEntry + 12) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
        if ( v4 < 4 && !v2 )
          EtwpDereferenceUmGuidEntry((__int64)GuidEntry);
      }
      goto LABEL_6;
    }
    v8 = 1;
    if ( v2 == 1 && !(unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !GuidEntry )
    {
      if ( !v2 )
        return;
      GuidEntry = (char *)EtwpFindGuidEntry((_QWORD *)(a1 + 32));
      if ( !GuidEntry )
      {
        GuidEntry = EtwpAllocateUmGuidEntry((_OWORD *)(a1 + 32));
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 248) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive((__int64)GuidEntry);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = GuidEntry + 78;
    v12 = 0;
    while ( !*(v11 - 2) || *v11 != v10 )
    {
      ++v12;
      v11 += 24;
      if ( v12 >= 4 )
      {
        v9 = 0LL;
        goto LABEL_21;
      }
    }
    v4 = v12;
    v9 = &GuidEntry[16 * v12 + 56 + 8 * v12];
LABEL_21:
    if ( v9 )
      goto LABEL_4;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = GuidEntry + 76;
      do
      {
        if ( !*v15 )
        {
          v4 = v14;
          v16 = &GuidEntry[16 * v14 + 56 + 8 * v14];
          goto LABEL_36;
        }
        v14 = (unsigned int)(v14 + 1);
        v15 += 24;
      }
      while ( (unsigned int)v14 < 4 );
      v16 = 0LL;
LABEL_36:
      if ( v16 )
      {
        v16[22] = v10;
        EtwpReferenceUmGuidEntry((__int64)GuidEntry);
        goto LABEL_4;
      }
    }
    else
    {
      v17 = 0;
      v18 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v18 - 2) && *v18 == v10 )
        {
          v9 = (char *)(a1 + 8 * (v17 + 2 * (v17 + 8LL)));
          goto LABEL_48;
        }
        ++v17;
        v18 += 24;
      }
      while ( v17 < 4 );
      v9 = 0LL;
LABEL_48:
      if ( v9 )
        goto LABEL_4;
    }
    *((_DWORD *)GuidEntry + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      EtwpRegisterGuidsApiCallback(a2, a1, 0);
    else
      EtwpEventApiCallback(a2, a1);
  }
}
