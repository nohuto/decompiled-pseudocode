/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18003FFC0 (--0CGameEntry@@QEAA@XZ.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180040510 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  CGameEntry *v7; // rax
  CGameEntry *v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  CGameEntry *v20; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 1530LL;
LABEL_19:
    v14 = (unsigned int)v5;
    goto LABEL_20;
  }
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = 1;
    goto LABEL_22;
  }
  v4 = 0LL;
  v20 = 0LL;
  v7 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
  {
    v5 = -2147024882;
LABEL_14:
    v6 = 1539LL;
    goto LABEL_19;
  }
  v8 = CGameEntry::CGameEntry(v7);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 3) = v10;
  *((_DWORD *)v8 + 8) = v9;
  v11 = CGameEntry::CompleteInitialization(v8);
  v5 = v11;
  if ( v11 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B0,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
  v12 = *(_QWORD *)v8;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(CGameEntry *))(v12 + 8))(v8);
    v4 = v8;
    v20 = v8;
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = 0;
  }
  else
  {
    (*(void (__fastcall **)(CGameEntry *))(v12 + 16))(v8);
    v8 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_14;
  v13 = (*(__int64 (__fastcall **)(CGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, &v19);
  v5 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v6 = 1541LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v14);
    goto LABEL_22;
  }
  v15 = *((_DWORD *)this + 6);
  v16 = v19;
  if ( v19 > v15 )
  {
    v5 = -2147024883;
    v6 = 1543LL;
    goto LABEL_19;
  }
  *((_DWORD *)this + 6) = v15 - v19;
  *((_QWORD *)this + 2) += v16;
  v4 = 0LL;
  *a2 = v8;
  v5 = 0;
LABEL_22:
  if ( v4 )
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
