/*
 * XREFs of SeSubProcessToken @ 0x14061AA40
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepDesktopAppxSubProcessToken @ 0x140084B54 (SepDesktopAppxSubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x140085D08 (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x140085F14 (SepSetTokenBnoIsolation.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140085FA4 (SeTokenGetNoChildProcessRestricted.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14031DC80 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14031DE78 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D7F5C (SepAppendAdminAceToTokenAcl.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     PsReferenceEffectiveToken @ 0x1405DF3D0 (PsReferenceEffectiveToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14061AEA4 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x14061B264 (SepSetTokenSessionById.c)
 *     SeDeleteAccessState @ 0x14061B630 (SeDeleteAccessState.c)
 *     SepSetTokenLowboxNumber @ 0x14061FBD8 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C5CC4 (SepDereferenceLowBoxNumberEntry.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406F876C (EtwTimLogProhibitChildProcessCreation.c)
 *     SepAddTokenOriginClaim @ 0x1408DFF80 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PERESOURCE **a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v14; // rcx
  int inserted; // edi
  PERESOURCE *v16; // rbx
  _BYTE *v17; // rcx
  PERESOURCE **v18; // rax
  __int64 v20; // rcx
  int v21; // ecx
  unsigned int v22; // esi
  bool v23; // bl
  void *v24; // rax
  void *v25; // rbx
  int v26; // eax
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  bool v28; // [rsp+41h] [rbp-BFh] BYREF
  char v29; // [rsp+42h] [rbp-BEh] BYREF
  char v30; // [rsp+43h] [rbp-BDh] BYREF
  char v31; // [rsp+44h] [rbp-BCh]
  bool v32; // [rsp+45h] [rbp-BBh] BYREF
  bool v33; // [rsp+46h] [rbp-BAh] BYREF
  bool v34; // [rsp+47h] [rbp-B9h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  PERESOURCE **v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+78h] [rbp-88h] BYREF
  PERESOURCE *v43; // [rsp+88h] [rbp-78h]
  struct _LIST_ENTRY *Flink; // [rsp+90h] [rbp-70h]
  _DWORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B4h] [rbp-4Ch]
  __int128 v50; // [rsp+B8h] [rbp-48h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v52[28]; // [rsp+170h] [rbp+70h] BYREF

  v40 = a3;
  v37 = a2;
  v41 = a11;
  v45[1] = 0;
  v49 = 0;
  HIDWORD(v42) = 0;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v52, 0, sizeof(v52));
  v14 = v37;
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v38 = 0LL;
  SeTokenGetNoChildProcessRestricted(v14, &v28, &v33, &v32);
  if ( v32 || v28 )
  {
    inserted = 0;
    v22 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v24 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v35, &v34, &v36, 0LL);
      v25 = v24;
      if ( v35 == 2 && v36 < 2
        || (v22 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v24) ? 0xC000049D : 0, v35 != 1) )
      {
        if ( v25 )
          ObfDereferenceObject(v25);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v25);
      }
    }
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v22;
    if ( (*(_DWORD *)(a1 + 1788) & 1) != 0 )
      inserted = *(_QWORD *)(a1 + 1856) != 0LL ? inserted : 0;
    if ( inserted < 0 )
    {
      if ( v33 && *(_DWORD *)(a6 + 12) )
        inserted = 0;
      if ( inserted < 0 )
      {
        v23 = v28;
        EtwTimLogProhibitChildProcessCreation(
          (unsigned int)v28 + 1,
          *(_QWORD *)(a6 + 16),
          (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
          (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
        if ( v23 )
          goto LABEL_43;
      }
    }
  }
  v45[0] = 48;
  v46 = 0LL;
  v48 = 0;
  v47 = 0LL;
  v50 = 0LL;
  inserted = SepDuplicateToken(v37, (int)v45, 0, 1, 0, 0, 1, (char **)&Object);
  if ( inserted < 0 )
    goto LABEL_43;
  v16 = (PERESOURCE *)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v20 = *((unsigned int *)Object + 30), (_DWORD)v20 == a5)
    || (SepDereferenceLowBoxNumberEntry(v20),
        v16[135] = 0LL,
        SepSetTokenSessionById((_DWORD)v16, a5, 0, 0, 0LL),
        *((_DWORD *)v16 + 30) = a5,
        v26 = SepSetTokenLowboxNumber(v16, v16[98]),
        inserted = v26,
        v26 >= 0) )
  {
    SepSetTokenSessionById((_DWORD)v16, a5, 0, 0, 0LL);
    *((_DWORD *)v16 + 30) = a5;
    *((_DWORD *)v16 + 50) &= ~0x200000u;
    if ( (*(_DWORD *)a6 & 1) != 0 )
    {
      v21 = *((_DWORD *)v16 + 50) | 0x80000;
      *((_DWORD *)v16 + 50) = v21;
      if ( (*(_DWORD *)a6 & 4) != 0 )
        *((_DWORD *)v16 + 50) = v21 | 0x100000;
    }
    inserted = SepSetTokenBnoIsolation((__int64)v16, 0, 0LL, 0, 0LL);
    if ( inserted >= 0 )
    {
      inserted = SepDesktopAppxSubProcessToken(v16, a1, *(_DWORD *)(a6 + 4), &v29, &v30);
      if ( inserted >= 0 )
      {
        inserted = SepMandatorySubProcessToken((_DWORD *)(v37 & -(__int64)((a4 & 2) != 0)), (__int64)v16, a1, &v38);
        if ( inserted >= 0 )
        {
          inserted = SepSetTrustLevelForProcessToken((__int64)v16, a1, &v27);
          if ( inserted >= 0 )
          {
            if ( (SepTokenSingletonAttributesConfig & 3) != 3
              || (inserted = SepSetProcessUniqueAttribute(v16), inserted >= 0) )
            {
              if ( (a7 & 1) == 0
                || ((_DWORD)v16[25] & 0x4000) == 0
                || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v16, a7), inserted >= 0) )
              {
                if ( a8 )
                  SepAddTokenOriginClaim(a8, a9, v16);
                if ( !a10
                  || (inserted = SepSetTokenBnoIsolation(
                                   (__int64)v16,
                                   *(_BYTE *)(a10 + 32),
                                   (__int128 *)a10,
                                   *(_DWORD *)(a10 + 16),
                                   *(_QWORD *)(a10 + 24)),
                      inserted >= 0) )
                {
                  if ( (a4 & 2) == 0 || v38 )
                    v27 = 1;
                  if ( v27 )
                  {
                    v43 = v16;
                    *(_QWORD *)&v42 = 0LL;
                    DWORD2(v42) = 0;
                    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                    SepCreateAccessStateFromSubjectContext(&v42, &PassedAccessState, v52, 0, 0LL);
                    v16 = (PERESOURCE *)Object;
                  }
                  else
                  {
                    SeCreateAccessState(&PassedAccessState, v52, 0, 0LL);
                  }
                  v31 = 1;
                  inserted = ObInsertObject(v16, &PassedAccessState, 0, 0, 0LL, 0LL);
                  if ( inserted >= 0 )
                  {
                    SepAppendAdminAceToTokenAcl((__int64)v16);
                    v17 = (_BYTE *)v41;
                    v18 = v40;
                    *((_BYTE *)v16 + 204) = a4 & 1;
                    *v18 = v16;
                    *v17 = v27;
                    v17[1] = v29;
                    v17[2] = v30;
                    goto LABEL_22;
                  }
LABEL_43:
                  v16 = 0LL;
LABEL_22:
                  if ( inserted >= 0 )
                    goto LABEL_23;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_23:
  if ( v31 )
  {
    if ( v27 )
      SepDeleteAccessState((__int64)&PassedAccessState);
    else
      SeDeleteAccessState(&PassedAccessState);
  }
  return (unsigned int)inserted;
}
