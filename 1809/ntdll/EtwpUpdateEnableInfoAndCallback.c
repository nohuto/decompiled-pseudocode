/*
 * XREFs of EtwpUpdateEnableInfoAndCallback @ 0x180021104
 * Callers:
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     EtwpDisableTraceProviders @ 0x180050414 (EtwpDisableTraceProviders.c)
 *     EtwpProcessNotification @ 0x180050CB0 (EtwpProcessNotification.c)
 *     EtwpSetProviderTraits @ 0x1800760E4 (EtwpSetProviderTraits.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x180020FF4 (EtwpFindGuidEntry.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180050DC4 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180050DE8 (EtwpAllocateUmGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180077B20 (EtwpEventApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x18008523C (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180085380 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpIsPrivateLoggerOn @ 0x1800866CC (EtwpIsPrivateLoggerOn.c)
 *     EtwpGetUmProcessImageInfo @ 0x18010F5A0 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpUpdateEnableInfoAndCallback(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r14d
  _QWORD *GuidEntry; // rbx
  unsigned int v6; // r12d
  char v9; // bp
  char v10; // r15
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r8
  char v13; // dl
  _BYTE *v14; // rax
  unsigned int i; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rcx
  _QWORD *v19; // r8
  unsigned int v20; // ecx
  _BYTE *v21; // rax

  v4 = *(_DWORD *)(a2 + 72);
  GuidEntry = *(_QWORD **)(a1 + 248);
  v6 = 4;
  v9 = 0;
  v10 = 0;
  v11 = 0x3FFFLL;
  if ( v4 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v12 = (_QWORD *)(a1 + 104);
LABEL_4:
      v9 = *((_BYTE *)v12 + 20);
      *v12 = *(_QWORD *)(a2 + 96);
      v12[1] = *(_QWORD *)(a2 + 88);
      *((_BYTE *)v12 + 21) = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v12 + 4) = *(_DWORD *)(a2 + 80);
      *((_BYTE *)v12 + 20) = v4 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v6 < 4 )
        {
          v16 = 3LL * v6;
          *(_OWORD *)(a1 + 8 * v16 + 128) = *(_OWORD *)v12;
          *(_QWORD *)(a1 + 8 * v16 + 144) = v12[2];
        }
        EtwpUpdatePrivateEnableInfo(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v10 )
      {
        *((_DWORD *)GuidEntry + 12) = 0;
        RtlReleaseSRWLockExclusive(GuidEntry + 5);
        if ( v6 < 4 && !v4 )
          EtwpDereferenceUmGuidEntry(GuidEntry);
      }
      goto LABEL_6;
    }
    v10 = 1;
    if ( v4 == 1 && !(unsigned __int8)EtwpIsPrivateLoggerOn(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !GuidEntry )
    {
      if ( !v4 )
        return;
      GuidEntry = EtwpFindGuidEntry((_QWORD *)(a1 + 32), v11, a3, a4);
      if ( !GuidEntry )
      {
        GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 32);
        if ( !GuidEntry )
          return;
      }
      *(_QWORD *)(a1 + 248) = GuidEntry;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry, v11);
    v13 = *(_BYTE *)(a2 + 78);
    v14 = (char *)GuidEntry + 78;
    for ( i = 0; i < 4; ++i )
    {
      if ( *(v14 - 2) && *v14 == v13 )
      {
        v6 = i;
        v12 = &GuidEntry[2 * i + 7 + i];
        goto LABEL_19;
      }
      v14 += 24;
    }
    v12 = 0LL;
LABEL_19:
    if ( v12 )
      goto LABEL_4;
    if ( v4 )
    {
      v17 = 0LL;
      v18 = (char *)GuidEntry + 76;
      do
      {
        if ( !*v18 )
        {
          v6 = v17;
          v19 = &GuidEntry[2 * v17 + 7 + v17];
          goto LABEL_36;
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 24;
      }
      while ( (unsigned int)v17 < 4 );
      v19 = 0LL;
LABEL_36:
      if ( v19 )
      {
        *((_BYTE *)v19 + 22) = v13;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_4;
      }
    }
    else
    {
      v20 = 0;
      v21 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v21 - 2) && *v21 == v13 )
        {
          v12 = (_QWORD *)(a1 + 8 * (v20 + 2 * (v20 + 8LL)));
          goto LABEL_48;
        }
        ++v20;
        v21 += 24;
      }
      while ( v20 < 4 );
      v12 = 0LL;
LABEL_48:
      if ( v12 )
        goto LABEL_4;
    }
    *((_DWORD *)GuidEntry + 12) = 0;
    RtlReleaseSRWLockExclusive(GuidEntry + 5);
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v9 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      EtwpRegisterGuidsApiCallback(a2, a1, 0LL);
    else
      EtwpEventApiCallback(a2, a1);
  }
}
