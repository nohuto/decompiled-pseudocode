/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18003FEA8 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x180040B14 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180040F84 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x18004103C (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x1800414EC (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432F0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180044350 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  struct KnownGameList::IEnumerateEntries **v6; // rdi
  const unsigned __int16 *v7; // rax
  __int64 v8; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v10; // ebx
  struct KnownGameList::IEnumerateEntries **v12; // rbx
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  unsigned int v15; // r9d
  int v16; // esi
  __int64 v17; // r9
  __int64 v18; // rdx
  struct KnownGameList::IEnumerateEntries **v19; // rax
  int v20; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r14d
  bool i; // cf
  const unsigned __int16 *v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int16 *v39; // rcx
  __int64 v40; // rcx
  unsigned __int16 **v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v43[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 *v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  KnownGameList *v49; // [rsp+60h] [rbp-A0h] BYREF
  KnownGameList *v50; // [rsp+68h] [rbp-98h] BYREF
  struct KnownGameList::IEnumerateEntries **v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  _BYTE v53[4096]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10C8h] [rbp+FC8h]

  v52 = -2LL;
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
  *(_QWORD *)v47 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, v7, &v42);
  v10 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v10;
  }
  v12 = (struct KnownGameList::IEnumerateEntries **)v53;
  v51 = 0LL;
  v43[0] = 4096;
  v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v42,
          v53,
          v43);
  v16 = v13;
  if ( !v13 )
    goto LABEL_15;
  if ( v13 == -2147024774 )
  {
    v19 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        v43[0],
                                                        (const struct std::nothrow_t *)&std::nothrow);
    v12 = v19;
    if ( !v19 )
    {
      v16 = -2147024882;
      v17 = 2147942414LL;
      v18 = 403LL;
      goto LABEL_14;
    }
    v6 = v19;
    v51 = v19;
    v20 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v42,
            v19,
            v43);
    v16 = v20;
    if ( v20 < 0 )
    {
      v17 = (unsigned int)v20;
      v18 = 407LL;
      goto LABEL_14;
    }
LABEL_15:
    v48 = 0LL;
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v48,
                                 v12,
                                 (unsigned __int8 *)v43[0],
                                 v15);
    v16 = EnumerateEntriesInstance;
    v22 = v48;
    if ( EnumerateEntriesInstance >= 0 )
    {
      v16 = 0;
      *(_QWORD *)&v43[1] = 0LL;
      do
      {
LABEL_18:
        v23 = *(_QWORD *)&v43[1];
        if ( *(_QWORD *)&v43[1] )
        {
          *(_QWORD *)&v43[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 24LL))(v22, &v43[1]);
        if ( v24 )
        {
          if ( v24 != 1 )
            goto LABEL_60;
          goto LABEL_61;
        }
        v49 = 0LL;
        v25 = (*(__int64 (__fastcall **)(_QWORD, KnownGameList **, unsigned int *))(**(_QWORD **)&v43[1] + 24LL))(
                *(_QWORD *)&v43[1],
                &v49,
                &v45);
        v16 = v25;
        if ( v25 < 0 )
        {
          v37 = 424LL;
          goto LABEL_57;
        }
        v26 = KnownGameList::StrCmpInsensitive(
                v49,
                (const unsigned __int16 *)v45,
                v47[0],
                (const unsigned __int16 *)(unsigned int)v8,
                (unsigned int)v41);
        v16 = 0;
        if ( v26 > 0 )
          goto LABEL_61;
      }
      while ( v26 );
      v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v43[1] + 40LL))(*(_QWORD *)&v43[1], &v42);
      v16 = v25;
      if ( v25 >= 0 )
      {
        v27 = 0;
        for ( i = (_WORD)v42 != 0; i; i = v27 < (unsigned __int16)v42 )
        {
          v50 = 0LL;
          v41 = &v44;
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, KnownGameList **))(**(_QWORD **)&v43[1] + 56LL))(
                  *(_QWORD *)&v43[1],
                  v27,
                  &v46,
                  &v50);
          if ( v16 < 0 )
          {
            v36 = (unsigned int)v16;
            v37 = 451LL;
            goto LABEL_58;
          }
          v16 = 0;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              v33 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_18;
              v31 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v32 = v33;
                if ( *(_DWORD *)(v31 + 16LL * v33) == 1 )
                  break;
                if ( ++v33 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_18;
              }
            }
            else
            {
              if ( v46 != 2 )
              {
                v16 = -2147418113;
                v36 = 2147549183LL;
                v37 = 490LL;
                goto LABEL_58;
              }
              v34 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_18;
              v31 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v32 = v34;
                if ( *(_DWORD *)(v31 + 16LL * v34) == 2 )
                  break;
                if ( ++v34 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_18;
              }
            }
          }
          else
          {
            v30 = 0;
            if ( !*((_DWORD *)a2 + 4) )
              goto LABEL_18;
            v31 = *((_QWORD *)a2 + 1);
            while ( 1 )
            {
              v32 = v30;
              if ( !*(_DWORD *)(v31 + 16LL * v30) )
                break;
              if ( ++v30 >= *((_DWORD *)a2 + 4) )
                goto LABEL_18;
            }
          }
          v35 = *(_QWORD *)(v31 + 16 * v32 + 8);
          if ( !v35 || !KnownGameList::StrStrInsensitive(v50, (const unsigned __int16 *)(unsigned int)v44, v35, v29) )
            goto LABEL_18;
          ++v27;
        }
        v44 = 0LL;
        *(_QWORD *)v47 = *(_QWORD *)&v43[1];
        v38 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                &v44,
                v47);
        v16 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v38);
          v39 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
          goto LABEL_62;
        }
        *a3 = (struct KnownGameList::IGameEntry *)v44;
        v16 = 0;
LABEL_60:
        if ( *a3 )
          goto LABEL_62;
LABEL_61:
        v16 = -2147023728;
        goto LABEL_62;
      }
      v37 = 439LL;
LABEL_57:
      v36 = (unsigned int)v25;
LABEL_58:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v36);
LABEL_62:
      v40 = *(_QWORD *)&v43[1];
      if ( *(_QWORD *)&v43[1] )
      {
        *(_QWORD *)&v43[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_66;
  }
  if ( v13 < 0 )
  {
    v17 = (unsigned int)v13;
    v18 = 398LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v17);
  }
LABEL_66:
  if ( v6 )
    operator delete(v6, v14);
  return (unsigned int)v16;
}
