/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14032A640
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140168864 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140329FD4 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14032A13C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14032A1C4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  unsigned int v3; // edi
  SC_DISK *v4; // rax
  unsigned int v5; // r13d
  __int16 *v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // r12d
  struct _GPT_ENTRY *v10; // rax
  struct _GPT_ENTRY *v11; // r14
  SC_DISK *v12; // rdx
  int v13; // ecx
  struct _GPT_ENTRY *v14; // r12
  unsigned int v15; // ebx
  SC_DISK *v16; // r10
  __int64 v17; // rcx
  void **v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rbx
  int v21; // ecx
  bool v22; // zf
  int v23; // edx
  BOOL v24; // r15d
  int v25; // eax
  unsigned int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // r9
  void **v32; // rdi
  __int64 v33; // rsi
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  __int64 v36; // [rsp+28h] [rbp-28h] BYREF
  __int64 v37; // [rsp+30h] [rbp-20h] BYREF
  __int64 v38; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v40; // [rsp+90h] [rbp+40h] BYREF
  char v41; // [rsp+98h] [rbp+48h]

  v41 = a2;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v3 = 0;
  v4 = *this;
  v35 = 0LL;
  v36 = 0LL;
  v40 = 0;
  v5 = ((*((_DWORD *)v4 + 48) & 1) == 0) + 1;
  v6 = &v40;
  v7 = 0LL;
  do
  {
    v8 = *((_QWORD *)*this + 32);
    *(__int64 *)((char *)&v35 + v7) = v8;
    if ( (int)SC_GPT::ReadHeader(this, v3, (struct GPT_HEADER *)v8) >= 0 )
    {
      v9 = -*((_DWORD *)*this + 57) & (*(_DWORD *)(v8 + 80) * *(_DWORD *)(v8 + 84) + *((_DWORD *)*this + 57) - 1);
      v10 = (struct _GPT_ENTRY *)SC_ENV::Allocate(v9 + (1 << *((_DWORD *)*this + 59)));
      v39[v7 / 8] = v10;
      v11 = v10;
      if ( !v10 )
      {
        v15 = -1073741670;
        goto LABEL_37;
      }
      v12 = *this;
      v13 = *((_DWORD *)*this + 59);
      if ( v3 )
      {
        *(__int64 *)((char *)&v35 + v7) = (__int64)v10;
        v14 = v10;
        v11 = (struct _GPT_ENTRY *)((char *)v10 + (1 << v13));
        *(__int64 *)((char *)&v37 + v7) = (__int64)v11;
      }
      else
      {
        v14 = (struct _GPT_ENTRY *)((char *)v10 + v9);
        *(__int64 *)((char *)&v37 + v7) = (__int64)v10;
        *(__int64 *)((char *)&v35 + v7) = (__int64)v14;
      }
      memmove(v14, *((const void **)v12 + 32), 1 << v13);
      if ( (int)SC_GPT::ReadEntries(this, v14, v11) >= 0 )
        *(_BYTE *)v6 = 1;
    }
    ++v3;
    v7 += 8LL;
    v6 = (__int16 *)((char *)v6 + 1);
  }
  while ( v3 < v5 );
  v15 = 0;
  if ( !v40 )
  {
LABEL_11:
    v15 = -1073741774;
    goto LABEL_37;
  }
  v16 = *this;
  if ( (*((_DWORD *)*this + 48) & 1) == 0 )
  {
    if ( !(_BYTE)v40
      || !HIBYTE(v40)
      || *(_QWORD *)(v36 + 24) != *(_QWORD *)(v35 + 32)
      || *(_QWORD *)(v36 + 32) != *(_QWORD *)(v35 + 24)
      || *(_QWORD *)(v36 + 40) != *(_QWORD *)(v35 + 40)
      || *(_QWORD *)(v36 + 48) != *(_QWORD *)(v35 + 48)
      || *(_DWORD *)(v36 + 80) != *(_DWORD *)(v35 + 80)
      || *(_DWORD *)(v36 + 84) != *(_DWORD *)(v35 + 84)
      || *(_DWORD *)(v36 + 88) != *(_DWORD *)(v35 + 88) )
    {
      goto LABEL_26;
    }
    v17 = *(_QWORD *)(v36 + 56) - *(_QWORD *)(v35 + 56);
    if ( !v17 )
      v17 = *(_QWORD *)(v36 + 64) - *(_QWORD *)(v35 + 64);
    if ( v17 )
    {
LABEL_26:
      if ( !v41 )
        goto LABEL_11;
      if ( (_BYTE)v40 )
      {
        v18 = (void **)&v37;
        v19 = &v35;
      }
      else
      {
        v18 = (void **)&v38;
        v19 = &v36;
      }
      v20 = *v19;
      v21 = *((_DWORD *)v16 + 59);
      v22 = (_BYTE)v40 == 0;
      v23 = *((_DWORD *)v16 + 57);
      v24 = (_BYTE)v40 != 0;
      v25 = *(_DWORD *)(v20 + 80) * *(_DWORD *)(v20 + 84);
      *(_DWORD *)(v20 + 16) = 0;
      v26 = (-v23 & (unsigned int)(v25 + v23 - 1)) >> v21;
      v27 = *(_QWORD *)(v20 + 24);
      *(_QWORD *)(v20 + 24) = *(_QWORD *)(v20 + 32);
      *(_QWORD *)(v20 + 32) = v27;
      v28 = *(_QWORD *)(v20 + 24);
      if ( v22 )
        v29 = v28 + 1;
      else
        v29 = v28 - v26;
      *(_QWORD *)(v20 + 72) = v29;
      *(_DWORD *)(v20 + 16) = RtlComputeCrc32(0, (PUCHAR)v20, *(_DWORD *)(v20 + 12));
      if ( v24 )
      {
        v31 = *v18;
        v30 = *(_QWORD *)(v20 + 72);
      }
      else
      {
        v30 = *(_QWORD *)(v20 + 24);
        v31 = (void *)v20;
      }
      v15 = SC_DISK::WriteSectors(*this, v26 + 1, v30, v31);
    }
  }
LABEL_37:
  v32 = (void **)v39;
  v33 = 2LL;
  do
  {
    if ( *v32 )
      SC_ENV::Free(*v32);
    ++v32;
    --v33;
  }
  while ( v33 );
  return v15;
}
