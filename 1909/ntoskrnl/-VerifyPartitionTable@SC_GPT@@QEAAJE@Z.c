/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14034BF54
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140171958 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140114110 (RtlComputeCrc32.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14034B0CC (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14034BAD0 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14034BB58 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14072C220 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  __int16 *v2; // r12
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  SC_DISK *v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // rsi
  unsigned int v9; // r14d
  struct _GPT_ENTRY *v10; // rax
  struct _GPT_ENTRY *v11; // rsi
  struct _GPT_ENTRY *v12; // r14
  unsigned int v13; // ebx
  SC_DISK *v14; // r10
  __int64 v15; // r9
  void **v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rbx
  int v19; // edx
  int v20; // ecx
  BOOL v21; // r15d
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // r9
  _QWORD *v29; // rdi
  __int64 v30; // rsi
  __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  __int64 v33; // [rsp+28h] [rbp-28h] BYREF
  __int64 v34; // [rsp+30h] [rbp-20h] BYREF
  __int64 v35; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v37; // [rsp+90h] [rbp+40h] BYREF
  char v38; // [rsp+98h] [rbp+48h]

  v38 = a2;
  v2 = &v37;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v34 = 0LL;
  v4 = 0;
  v35 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v6 = *this;
  v37 = 0;
  v7 = 2 - ((*((_BYTE *)v6 + 192) & 1) != 0);
  do
  {
    v8 = *((_QWORD *)*this + 32);
    *(__int64 *)((char *)&v32 + v5) = v8;
    if ( (int)SC_GPT::ReadHeader(this, v4, (struct GPT_HEADER *)v8) >= 0 )
    {
      v9 = -*((_DWORD *)*this + 57) & (*(_DWORD *)(v8 + 80) * *(_DWORD *)(v8 + 84) + *((_DWORD *)*this + 57) - 1);
      v10 = (struct _GPT_ENTRY *)SC_ENV::Allocate(v9 + (1 << *((_DWORD *)*this + 58)));
      v36[v5 / 8] = v10;
      v11 = v10;
      if ( !v10 )
      {
        v13 = -1073741670;
        goto LABEL_37;
      }
      if ( v4 )
      {
        v12 = v10;
        v11 = (struct _GPT_ENTRY *)((char *)v10 + (1 << *((_DWORD *)*this + 58)));
      }
      else
      {
        v12 = (struct _GPT_ENTRY *)((char *)v10 + v9);
      }
      *(__int64 *)((char *)&v32 + v5) = (__int64)v12;
      *(__int64 *)((char *)&v34 + v5) = (__int64)v11;
      memmove(v12, *((const void **)*this + 32), 1 << *((_DWORD *)*this + 58));
      if ( (int)SC_GPT::ReadEntries(this, v12, v11) >= 0 )
        *(_BYTE *)v2 = 1;
    }
    ++v4;
    v5 += 8LL;
    v2 = (__int16 *)((char *)v2 + 1);
  }
  while ( v4 < v7 );
  v13 = 0;
  if ( !v37 )
  {
LABEL_11:
    v13 = -1073741774;
    goto LABEL_37;
  }
  v14 = *this;
  if ( (*((_DWORD *)*this + 48) & 1) == 0 )
  {
    if ( !(_BYTE)v37
      || !HIBYTE(v37)
      || *(_QWORD *)(v33 + 24) != *(_QWORD *)(v32 + 32)
      || *(_QWORD *)(v33 + 32) != *(_QWORD *)(v32 + 24)
      || *(_QWORD *)(v33 + 40) != *(_QWORD *)(v32 + 40)
      || *(_QWORD *)(v33 + 48) != *(_QWORD *)(v32 + 48)
      || *(_DWORD *)(v33 + 80) != *(_DWORD *)(v32 + 80)
      || *(_DWORD *)(v33 + 84) != *(_DWORD *)(v32 + 84)
      || *(_DWORD *)(v33 + 88) != *(_DWORD *)(v32 + 88) )
    {
      goto LABEL_26;
    }
    v15 = *(_QWORD *)(v33 + 56) - *(_QWORD *)(v32 + 56);
    if ( !v15 )
      v15 = *(_QWORD *)(v33 + 64) - *(_QWORD *)(v32 + 64);
    if ( v15 )
    {
LABEL_26:
      if ( !v38 )
        goto LABEL_11;
      if ( (_BYTE)v37 )
      {
        v16 = (void **)&v34;
        v17 = &v32;
      }
      else
      {
        v16 = (void **)&v35;
        v17 = &v33;
      }
      v18 = *v17;
      v19 = *((_DWORD *)v14 + 57);
      v20 = *((_DWORD *)v14 + 58);
      v21 = (_BYTE)v37 != 0;
      v22 = *(_DWORD *)(v18 + 80) * *(_DWORD *)(v18 + 84);
      *(_DWORD *)(v18 + 16) = 0;
      v23 = (-v19 & (unsigned int)(v22 + v19 - 1)) >> v20;
      v24 = *(_QWORD *)(v18 + 24);
      *(_QWORD *)(v18 + 24) = *(_QWORD *)(v18 + 32);
      *(_QWORD *)(v18 + 32) = v24;
      v25 = *(_QWORD *)(v18 + 24);
      if ( v21 )
        v26 = v25 - v23;
      else
        v26 = v25 + 1;
      *(_QWORD *)(v18 + 72) = v26;
      *(_DWORD *)(v18 + 16) = RtlComputeCrc32(0, (PUCHAR)v18, *(_DWORD *)(v18 + 12));
      if ( v21 )
      {
        v28 = *v16;
        v27 = *(_QWORD *)(v18 + 72);
      }
      else
      {
        v27 = *(_QWORD *)(v18 + 24);
        v28 = (void *)v18;
      }
      v13 = SC_DISK::WriteSectors(*this, v23 + 1, v27, v28);
    }
  }
LABEL_37:
  v29 = v36;
  v30 = 2LL;
  do
  {
    if ( *v29 )
      RtlpSysVolFree(*v29);
    ++v29;
    --v30;
  }
  while ( v30 );
  return v13;
}
