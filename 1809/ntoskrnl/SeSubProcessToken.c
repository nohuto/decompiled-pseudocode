/*
 * XREFs of SeSubProcessToken @ 0x14064FC0C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x1400D9E94 (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400DA0A0 (SepDesktopAppxSubProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x1400DA1CC (SepSetTokenBnoIsolation.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1400DA264 (SeTokenGetNoChildProcessRestricted.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1403001EC (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1403003E4 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepSetProcessUniqueAttribute @ 0x140650054 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D6E5C (EtwTimLogProhibitChildProcessCreation.c)
 *     SepAddTokenOriginClaim @ 0x1408A2FC8 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  int inserted; // edi
  _QWORD *v13; // rbx
  int v14; // r14d
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r14d
  bool v19; // bl
  void *v20; // rax
  void *v21; // rbx
  int v22; // eax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  bool v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh] BYREF
  char v26; // [rsp+43h] [rbp-BDh] BYREF
  char v27; // [rsp+44h] [rbp-BCh]
  bool v28; // [rsp+45h] [rbp-BBh] BYREF
  bool v29; // [rsp+46h] [rbp-BAh] BYREF
  bool v30; // [rsp+47h] [rbp-B9h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v39; // [rsp+88h] [rbp-78h]
  struct _LIST_ENTRY *Flink; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+B8h] [rbp-48h]
  struct _ACCESS_STATE AccessState; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v47[28]; // [rsp+170h] [rbp+70h] BYREF

  *a3 = 0LL;
  v32 = a4;
  v37 = a3;
  v34 = a2;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v35 = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v24, &v29, &v28);
  if ( v28 || v24 )
  {
    inserted = 0;
    v18 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v20 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v31, &v30, &v33, 0LL);
      v21 = v20;
      if ( v31 == 2 && v33 < 2
        || (v18 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v20) ? 0xC000049D : 0, v31 != 1) )
      {
        if ( v21 )
          ObfDereferenceObject(v21);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v21);
      }
    }
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v18;
    if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
      inserted &= -(*(_QWORD *)(a1 + 1808) != 0LL);
    if ( inserted < 0 )
    {
      if ( v29 && *(_DWORD *)(a6 + 12) )
        inserted = 0;
      if ( inserted < 0 )
      {
        v19 = v24;
        EtwTimLogProhibitChildProcessCreation(
          (unsigned int)v24 + 1,
          *(_QWORD *)(a6 + 16),
          (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
          (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
        if ( v19 )
          goto LABEL_43;
      }
    }
  }
  v41 = 48;
  v42 = 0LL;
  v44 = 0;
  v43 = 0LL;
  v45 = 0LL;
  inserted = SepDuplicateToken(v34, (int)&v41, 0, 1, 0, 0, 1, &Object);
  if ( inserted < 0 )
    goto LABEL_43;
  v13 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v16 = *((_DWORD *)Object + 30), v16 == a5)
    || (SepDereferenceLowBoxNumberEntry(v16, *((_QWORD *)Object + 135)),
        v13[135] = 0LL,
        SepSetTokenSessionById((_DWORD)v13, a5, 0, 0, 0LL),
        v22 = SepSetTokenLowboxNumber(v13, v13[98]),
        inserted = v22,
        v22 >= 0) )
  {
    SepSetTokenSessionById((_DWORD)v13, a5, 0, 0, 0LL);
    *((_DWORD *)v13 + 50) &= ~0x200000u;
    if ( (*(_DWORD *)a6 & 1) != 0 )
    {
      v17 = *((_DWORD *)v13 + 50) | 0x80000;
      *((_DWORD *)v13 + 50) = v17;
      if ( (*(_DWORD *)a6 & 4) != 0 )
        *((_DWORD *)v13 + 50) = v17 | 0x100000;
    }
    inserted = SepSetTokenBnoIsolation((__int64)v13, 0, 0LL, 0, 0LL);
    if ( inserted >= 0 )
    {
      v14 = v32 & 2;
      inserted = SepDesktopAppxSubProcessToken((PERESOURCE *)v13, a1, *(_DWORD *)(a6 + 4), &v25, &v26);
      if ( inserted >= 0 )
      {
        inserted = SepMandatorySubProcessToken((_DWORD *)(v34 & -(__int64)(v14 != 0)), (__int64)v13, a1, &v35);
        if ( inserted >= 0 )
        {
          inserted = SepSetTrustLevelForProcessToken((__int64)v13, a1, &v23);
          if ( inserted >= 0 )
          {
            inserted = 0;
            if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
              inserted = SepSetProcessUniqueAttribute(v13);
            if ( inserted >= 0 )
            {
              if ( (v13[25] & 0x4000) == 0
                || (a7 & 1) == 0
                || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v13, a7), inserted >= 0) )
              {
                if ( a8 )
                  SepAddTokenOriginClaim(a8, a9, v13);
                if ( !a10
                  || (inserted = SepSetTokenBnoIsolation(
                                   (__int64)v13,
                                   *(_BYTE *)(a10 + 32),
                                   (__int128 *)a10,
                                   *(_DWORD *)(a10 + 16),
                                   *(_QWORD *)(a10 + 24)),
                      inserted >= 0) )
                {
                  if ( !v14 || v35 )
                    v23 = 1;
                  if ( v23 )
                  {
                    v39 = v13;
                    *(_QWORD *)&v38 = 0LL;
                    DWORD2(v38) = 0;
                    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                    SepCreateAccessStateFromSubjectContext(&v38, &AccessState, v47, 0, 0LL);
                    v13 = Object;
                  }
                  else
                  {
                    SeCreateAccessState((int)&AccessState, (int)v47, 0, 0LL);
                  }
                  v27 = 1;
                  inserted = ObInsertObjectEx(v13, &AccessState, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted >= 0 )
                  {
                    SepFinalizeTokenAcls(v13);
                    *((_BYTE *)v13 + 204) = v32 & 1;
                    *v37 = v13;
                    *(_BYTE *)a11 = v23;
                    *(_BYTE *)(a11 + 1) = v25;
                    *(_BYTE *)(a11 + 2) = v26;
                    goto LABEL_23;
                  }
LABEL_43:
                  v13 = 0LL;
LABEL_23:
                  if ( inserted >= 0 )
                    goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_24:
  if ( v27 )
  {
    SepDeleteAccessState((__int64)&AccessState);
    if ( !v23 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
