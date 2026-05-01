/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180034720
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x180038FB0 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180048E58 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memmove_0 @ 0x18004929E (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180061ED8 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rbx
  union _RM_SID *v9; // r12
  char *v10; // rax
  char *v11; // rsi
  ModernResourceEnforcer *v12; // r14
  const unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char *v18; // r14
  unsigned int v19; // edx
  void **v20; // rax
  char v21; // r12
  size_t v22; // rbx
  char *v23; // rbx
  unsigned __int16 *v24; // rcx
  char *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  ModernResourceEnforcer **v31; // rcx
  const unsigned __int16 *v32; // rax
  int v33; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-75h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-71h] BYREF
  void *v36[2]; // [rsp+48h] [rbp-61h] BYREF
  char *v37; // [rsp+58h] [rbp-51h]
  void *Block[2]; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v40; // [rsp+80h] [rbp-29h]
  int v41; // [rsp+88h] [rbp-21h]
  int v42; // [rsp+8Ch] [rbp-1Dh]
  int *v43; // [rsp+90h] [rbp-19h]
  __int64 v44; // [rsp+98h] [rbp-11h]
  unsigned __int64 *v45; // [rsp+A0h] [rbp-9h]
  __int64 v46; // [rsp+A8h] [rbp-1h]

  v34 = a3;
  v7 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = a2;
  v33 = 0;
  v9 = a2;
  v10 = (char *)operator new(0x98uLL);
  v11 = v10;
  if ( !v10 )
  {
    v33 = -1073741801;
    goto LABEL_30;
  }
  *((_QWORD *)v10 + 1) = v10 + 24;
  v12 = (ModernResourceEnforcer *)(v10 + 136);
  *((_QWORD *)v10 + 2) = v10 + 24;
  *((_WORD *)v10 + 12) = 0;
  *((_QWORD *)v10 + 14) = 0LL;
  *((_QWORD *)v10 + 15) = 0LL;
  *((_DWORD *)v10 + 32) = 0;
  *((_QWORD *)v10 + 17) = 0LL;
  *((_QWORD *)v10 + 18) = 0LL;
  *(_DWORD *)v10 = 1;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
  }
  v13 = (const unsigned __int16 *)*((_QWORD *)v10 + 1);
  v14 = (unsigned __int16 *)(v11 + 24);
  v15 = 7LL;
  if ( v13 == (const unsigned __int16 *)(v11 + 24) )
    v16 = 7LL;
  else
    v16 = (__int64)(*(_QWORD *)v14 - (_QWORD)v13) >> 1;
  if ( v7 <= v16 )
  {
    if ( v13 != a4 )
    {
      memmove_0(*((void **)v11 + 1), a4, 2 * v7);
      v13 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    }
    v32 = &v13[v7];
    *((_QWORD *)v11 + 2) = v32;
    *v32 = 0;
  }
  else
  {
    if ( v13 != v14 )
      v15 = (__int64)(*(_QWORD *)v14 - (_QWORD)v13) >> 1;
    v17 = 2 * v15 + 1;
    if ( v17 < v7 )
      v17 = v7;
    if ( v17 > 0x3FFFFFFFFFFFFFF7LL )
      v17 = 0x3FFFFFFFFFFFFFF7LL;
    if ( v7 > v17 )
    {
      v20 = Block;
      Block[1] = 0LL;
      v18 = 0LL;
      v19 = 0;
      v21 = 2;
    }
    else
    {
      v36[1] = (void *)(v17 + 1);
      if ( v17 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v19 = 0;
        v18 = 0LL;
        v36[0] = 0LL;
      }
      else
      {
        v18 = (char *)operator new(2 * (v17 + 1), (const struct std::nothrow_t *)&std::nothrow);
        v36[0] = v18;
        v19 = 0;
      }
      v20 = v36;
      v21 = 1;
    }
    v37 = (char *)v20[1];
    *v20 = 0LL;
    if ( (v21 & 2) != 0 )
    {
      v21 &= ~2u;
      if ( Block[0] )
        operator delete(Block[0]);
    }
    if ( (v21 & 1) != 0 && v36[0] )
      operator delete(v36[0]);
    if ( !v18 )
    {
      v33 = -1073741801;
      ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v11,
        v19);
      goto LABEL_30;
    }
    v22 = 2 * v7;
    memcpy_0(v18, a4, v22);
    v23 = &v18[v22];
    *(_WORD *)v23 = 0;
    v24 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
    if ( v24 != v14 )
      operator delete(v24);
    v9 = *(union _RM_SID **)&EventDescriptor.Id;
    v25 = v37 - 1;
    *((_QWORD *)v11 + 1) = v18;
    *((_QWORD *)v11 + 2) = v23;
    *(_QWORD *)v14 = &v18[2 * (_QWORD)v25];
    v12 = (ModernResourceEnforcer *)(v11 + 136);
  }
  v26 = *(_OWORD *)v9;
  v27 = *((_OWORD *)v9 + 1);
  *((_DWORD *)v11 + 28) = a5;
  v28 = *((_DWORD *)v9 + 16);
  *(_OWORD *)(v11 + 40) = v26;
  v29 = *((_OWORD *)v9 + 2);
  *(_OWORD *)(v11 + 56) = v27;
  v30 = *((_OWORD *)v9 + 3);
  *(_OWORD *)(v11 + 72) = v29;
  *(_OWORD *)(v11 + 88) = v30;
  *((_DWORD *)v11 + 26) = v28;
  *((_DWORD *)v11 + 27) = v34;
  *((_QWORD *)v11 + 15) = a6;
  *((_DWORD *)v11 + 32) = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v31 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v31 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v12 = (char *)this + 272;
  *((_QWORD *)v12 + 1) = v31;
  *v31 = v12;
  *((_QWORD *)this + 35) = v12;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
LABEL_30:
  if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v44 = 4LL;
    v43 = &v33;
    v45 = &a6;
    v46 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v40 = &unk_18009296F;
    UserData.Reserved = 2;
    v41 = 42;
    v42 = 1;
    v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
