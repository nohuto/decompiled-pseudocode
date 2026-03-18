/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14034C22C
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14034AFE0 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14034B9AC (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034BE6C (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140114110 (RtlComputeCrc32.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14034B0CC (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14034B154 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14034BB58 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14072C220 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14084FE60 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v4; // rdx
  __int64 v6; // rbp
  int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r13
  unsigned int v10; // r15d
  int v11; // r14d
  int Header; // edi
  int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // edx
  unsigned int v16; // r14d
  size_t v17; // r13
  char *v18; // rax
  char *v19; // r12
  SC_DISK *v20; // rdx
  unsigned __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // rcx
  size_t v24; // r13
  UCHAR *v25; // rcx
  char *v26; // r13
  unsigned __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // r8
  UCHAR *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rdi
  struct _GUID *v33; // rcx
  unsigned __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rbx
  ULONG v41; // r8d
  __int64 v42; // rbx
  unsigned __int64 v44; // [rsp+20h] [rbp-58h]
  UCHAR *Buffer; // [rsp+28h] [rbp-50h]
  int v46; // [rsp+80h] [rbp+8h]
  int v47; // [rsp+88h] [rbp+10h]
  unsigned int v49; // [rsp+98h] [rbp+20h]

  v47 = 0;
  v4 = *this;
  v6 = *((_QWORD *)*this + 32);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v47 = *(_DWORD *)(v6 + 440);
    v7 = 128;
    if ( *((_DWORD *)a2 + 10) > 0x80u )
      v7 = *((_DWORD *)a2 + 10);
    v8 = ((unsigned int)-*((_DWORD *)v4 + 57) >> 7) & ((unsigned int)((v7 << 7) + *((_DWORD *)v4 + 57) - 1) >> 7);
    *((_DWORD *)a2 + 10) = v8;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 10);
  }
  if ( !v8 )
  {
    v9 = *((_QWORD *)*this + 32);
    v10 = 2 - ((*((_BYTE *)*this + 192) & 1) != 0);
    v11 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v11, (struct GPT_HEADER *)v9);
      if ( Header >= 0 )
        break;
      if ( ++v11 >= v10 )
        return (unsigned int)Header;
    }
    v8 = *(_DWORD *)(v9 + 80);
    *((_DWORD *)a2 + 10) = v8;
  }
  if ( *((_DWORD *)a2 + 1) <= v8 )
  {
    v13 = *((_DWORD *)*this + 58);
    v14 = -*((_DWORD *)*this + 57) & (*((_DWORD *)*this + 57) + (v8 << 7) - 1);
    v15 = (2 << v13) + v14;
    v16 = v14 >> v13;
    v49 = v16;
    v17 = v15;
    v18 = (char *)SC_ENV::Allocate(v15);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, v17);
      v20 = *this;
      v21 = v16 + 2;
      v44 = v21;
      v22 = *((_QWORD *)*this + 30);
      v23 = 1 << *((_DWORD *)*this + 58);
      v24 = v17 - v23;
      v25 = (UCHAR *)&v19[v23];
      v26 = &v19[v24];
      Buffer = v25;
      if ( (*((_DWORD *)*this + 48) & 1) != 0 )
        v27 = v22 - 1;
      else
        v27 = v22 - v16 - 2;
      v28 = 0LL;
      v46 = 0;
      if ( *((_DWORD *)a2 + 1) )
      {
        v29 = *(_QWORD *)NullGuid.Data4;
        v30 = v25 + 32;
        v31 = *(_QWORD *)&NullGuid.Data1;
        while ( 1 )
        {
          v32 = 144 * v28;
          if ( *((_QWORD *)a2 + 18 * v28 + 10) != v31 || *(_QWORD *)((char *)a2 + v32 + 88) != v29 )
          {
            v33 = (struct _GUID *)((char *)a2 + v32 + 96);
            if ( *(_QWORD *)&v33->Data1 == v31 && *(_QWORD *)v33->Data4 == v29 )
            {
              SC_ENV::CreateGuid(v33);
              LODWORD(v28) = v46;
              v21 = v44;
              v33 = (struct _GUID *)((char *)a2 + v32 + 96);
            }
            *((_OWORD *)v30 - 2) = *(_OWORD *)((char *)a2 + v32 + 80);
            *((struct _GUID *)v30 - 1) = *v33;
            v34 = *(_QWORD *)((char *)a2 + v32 + 56);
            v35 = *((_DWORD *)*this + 57);
            if ( v35 )
              v34 = (__int64)v34 / v35;
            *(_QWORD *)v30 = v34;
            v36 = *(_QWORD *)((char *)a2 + v32 + 64) - 1LL + *(_QWORD *)((char *)a2 + v32 + 56);
            v37 = *((_DWORD *)*this + 57);
            if ( v37 )
              v36 /= (__int64)v37;
            *((_QWORD *)v30 + 1) = v36;
            *((_QWORD *)v30 + 2) = *(_QWORD *)((char *)a2 + v32 + 112);
            *(_OWORD *)(v30 + 24) = *(_OWORD *)((char *)a2 + v32 + 120);
            *(_OWORD *)(v30 + 40) = *(_OWORD *)((char *)a2 + v32 + 136);
            *(_OWORD *)(v30 + 56) = *(_OWORD *)((char *)a2 + v32 + 152);
            *(_OWORD *)(v30 + 72) = *(_OWORD *)((char *)a2 + v32 + 168);
            *((_QWORD *)v30 + 11) = *(_QWORD *)((char *)a2 + v32 + 184);
            if ( v34 < v21 || v36 > v27 )
            {
              Header = -1073741811;
              goto LABEL_45;
            }
            v29 = *(_QWORD *)NullGuid.Data4;
            v30 += 128;
            v31 = *(_QWORD *)&NullGuid.Data1;
          }
          v28 = (unsigned int)(v28 + 1);
          v46 = v28;
          if ( (unsigned int)v28 >= *((_DWORD *)a2 + 1) )
          {
            v20 = *this;
            v16 = v49;
            break;
          }
        }
      }
      *((_QWORD *)a2 + 4) = (v27 - v21 + 1) << *((_DWORD *)v20 + 58);
      if ( *((_QWORD *)a2 + 1) == *(_QWORD *)&NullGuid.Data1 && *((_QWORD *)a2 + 2) == *(_QWORD *)NullGuid.Data4 )
      {
        SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
        v21 = v44;
      }
      *(_QWORD *)v19 = 0x5452415020494645LL;
      *((_DWORD *)v19 + 2) = 0x10000;
      *((_DWORD *)v19 + 3) = 92;
      *((_QWORD *)v19 + 3) = 1LL;
      *((_QWORD *)v19 + 5) = v21;
      *((_QWORD *)v19 + 6) = v27;
      *((_QWORD *)v19 + 4) = v27 + v16 + 1LL;
      v38 = *(_OWORD *)((char *)a2 + 8);
      *((_QWORD *)v19 + 9) = 2LL;
      *(_OWORD *)(v19 + 56) = v38;
      *((_DWORD *)v19 + 20) = *((_DWORD *)a2 + 10);
      *((_DWORD *)v19 + 21) = 128;
      *((_DWORD *)v19 + 22) = RtlComputeCrc32(0, Buffer, v16 << *((_DWORD *)*this + 58));
      *((_DWORD *)v19 + 4) = RtlComputeCrc32(0, (PUCHAR)v19, 0x5Cu);
      Header = SC_DISK::WriteSectors(*this, v16 + 1, 1LL, v19);
      if ( Header >= 0 )
      {
        if ( (*((_DWORD *)*this + 48) & 1) != 0 )
          goto LABEL_43;
        *(_OWORD *)v26 = *(_OWORD *)v19;
        *((_OWORD *)v26 + 1) = *((_OWORD *)v19 + 1);
        *((_OWORD *)v26 + 2) = *((_OWORD *)v19 + 2);
        *((_OWORD *)v26 + 3) = *((_OWORD *)v19 + 3);
        *((_OWORD *)v26 + 4) = *((_OWORD *)v19 + 4);
        *((_QWORD *)v26 + 10) = *((_QWORD *)v19 + 10);
        *((_DWORD *)v26 + 22) = *((_DWORD *)v19 + 22);
        v39 = *((_QWORD *)v26 + 3);
        v40 = *((_QWORD *)v26 + 4);
        v41 = *((_DWORD *)v26 + 3);
        *((_DWORD *)v26 + 4) = 0;
        *((_QWORD *)v26 + 4) = v39;
        *((_QWORD *)v26 + 3) = v40;
        v42 = v40 - v16;
        *((_QWORD *)v26 + 9) = v42;
        *((_DWORD *)v26 + 4) = RtlComputeCrc32(0, (PUCHAR)v26, v41);
        Header = SC_DISK::WriteSectors(*this, v16 + 1, v42, Buffer);
        if ( Header >= 0 )
        {
LABEL_43:
          *((_DWORD *)*this + 48) &= ~2u;
          if ( a3 )
          {
            memset((void *)v6, 0, 0x200uLL);
            *(_DWORD *)(v6 + 440) = v47;
            *(_DWORD *)(v6 + 458) = -1;
            *(_BYTE *)(v6 + 450) = -18;
            *(_DWORD *)(v6 + 454) = 1;
            MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 208));
            *(_WORD *)(v6 + 510) = -21931;
            Header = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
          }
        }
      }
LABEL_45:
      RtlpSysVolFree(v19);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Header;
}
