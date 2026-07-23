/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14032A928
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140329EE0 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14032A018 (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032A284 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14032A558 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140329FD4 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14032A1C4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14032AE7C (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140817E40 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v4; // rcx
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // edx
  int Header; // ebx
  unsigned int v10; // edx
  int v11; // r14d
  __int64 v12; // r15
  unsigned int v13; // r12d
  int v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // r14d
  size_t v18; // r15
  char *v19; // rax
  char *v20; // r12
  unsigned __int64 v21; // r10
  __int64 v22; // r13
  __int64 v23; // rcx
  size_t v24; // r15
  UCHAR *v25; // rcx
  char *v26; // r15
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r9
  UCHAR *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rbx
  _QWORD *v33; // r8
  unsigned __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rbx
  ULONG v41; // r8d
  __int64 v42; // rbx
  unsigned int v44; // [rsp+20h] [rbp-58h]
  unsigned __int64 v45; // [rsp+28h] [rbp-50h]
  UCHAR *Buffer; // [rsp+30h] [rbp-48h]
  int v47; // [rsp+80h] [rbp+8h]
  int v49; // [rsp+98h] [rbp+20h]

  v49 = 0;
  v4 = *this;
  v6 = *((_QWORD *)v4 + 32);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v49 = *(_DWORD *)(v6 + 440);
    v7 = *((_DWORD *)a2 + 10);
    v8 = 128;
    if ( v7 > 0x80 )
      v8 = v7;
    if ( v8 > 0x400 )
      return (unsigned int)-1073741811;
    *((_DWORD *)a2 + 10) = ((unsigned int)-*((_DWORD *)v4 + 57) >> 7) & (((v8 << 7) + *((_DWORD *)v4 + 57) - 1) >> 7);
  }
  v10 = *((_DWORD *)a2 + 10);
  if ( !v10 )
  {
    v11 = 0;
    v12 = *((_QWORD *)*this + 32);
    v13 = ((*((_DWORD *)*this + 48) & 1) == 0) + 1;
    if ( ((*((_DWORD *)*this + 48) & 1) == 0) != -1 )
    {
      while ( 1 )
      {
        Header = SC_GPT::ReadHeader(this, v11, (struct GPT_HEADER *)v12);
        if ( Header >= 0 )
          break;
        if ( ++v11 >= v13 )
          return (unsigned int)Header;
      }
    }
    v10 = *(_DWORD *)(v12 + 80);
    *((_DWORD *)a2 + 10) = v10;
  }
  if ( *((_DWORD *)a2 + 1) > v10 )
    return (unsigned int)-1073741811;
  v14 = *((_DWORD *)*this + 59);
  v15 = -*((_DWORD *)*this + 57) & (*((_DWORD *)*this + 57) + (v10 << 7) - 1);
  v16 = (2 << v14) + v15;
  v17 = v15 >> v14;
  v44 = v17;
  v18 = v16;
  v19 = (char *)SC_ENV::Allocate(v16);
  v20 = v19;
  if ( v19 )
  {
    memset(v19, 0, v18);
    v21 = v17 + 2;
    v45 = v21;
    v22 = *((_QWORD *)*this + 30);
    v23 = 1 << *((_DWORD *)*this + 59);
    v24 = v18 - v23;
    v25 = (UCHAR *)&v20[v23];
    v26 = &v20[v24];
    Buffer = v25;
    if ( (*((_DWORD *)*this + 48) & 1) != 0 )
      v27 = v22 - 1;
    else
      v27 = v22 - v17 - 2;
    v28 = *(_QWORD *)NullGuid.Data4;
    v29 = 0LL;
    v47 = 0;
    if ( *((_DWORD *)a2 + 1) )
    {
      v30 = v25 + 32;
      v31 = *(_QWORD *)&NullGuid.Data1;
      while ( 1 )
      {
        v32 = 144 * v29;
        if ( *((_QWORD *)a2 + 18 * v29 + 10) != v31 || *(_QWORD *)((char *)a2 + v32 + 88) != v28 )
        {
          v33 = (_QWORD *)((char *)a2 + v32 + 96);
          if ( *v33 == v31 && v33[1] == v28 )
          {
            SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + v32 + 96));
            LODWORD(v29) = v47;
            v21 = v45;
            v33 = (_QWORD *)((char *)a2 + v32 + 96);
          }
          *((_OWORD *)v30 - 2) = *(_OWORD *)((char *)a2 + v32 + 80);
          *((_OWORD *)v30 - 1) = *(_OWORD *)v33;
          v34 = *(_QWORD *)((char *)a2 + v32 + 56);
          v35 = *((_DWORD *)*this + 58);
          if ( v35 )
            v34 = (__int64)v34 / v35;
          *(_QWORD *)v30 = v34;
          v36 = *(_QWORD *)((char *)a2 + v32 + 64) - 1LL + *(_QWORD *)((char *)a2 + v32 + 56);
          v37 = *((_DWORD *)*this + 58);
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
          v28 = *(_QWORD *)NullGuid.Data4;
          v30 += 128;
          v31 = *(_QWORD *)&NullGuid.Data1;
        }
        v29 = (unsigned int)(v29 + 1);
        v47 = v29;
        if ( (unsigned int)v29 >= *((_DWORD *)a2 + 1) )
        {
          v17 = v44;
          goto LABEL_37;
        }
      }
    }
    v31 = *(_QWORD *)&NullGuid.Data1;
LABEL_37:
    if ( *((_QWORD *)a2 + 1) == v31 && *((_QWORD *)a2 + 2) == v28 )
    {
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
      v21 = v45;
    }
    *((_QWORD *)v20 + 6) = v27;
    *(_QWORD *)v20 = 0x5452415020494645LL;
    *((_DWORD *)v20 + 2) = 0x10000;
    *((_DWORD *)v20 + 3) = 92;
    *((_QWORD *)v20 + 3) = 1LL;
    *((_QWORD *)v20 + 5) = v21;
    *((_QWORD *)v20 + 4) = v27 + v17 + 1LL;
    v38 = *(_OWORD *)((char *)a2 + 8);
    *((_QWORD *)v20 + 9) = 2LL;
    *(_OWORD *)(v20 + 56) = v38;
    *((_DWORD *)v20 + 20) = *((_DWORD *)a2 + 10);
    *((_DWORD *)v20 + 21) = 128;
    *((_DWORD *)v20 + 22) = RtlComputeCrc32(0, Buffer, v17 << *((_DWORD *)*this + 59));
    *((_DWORD *)v20 + 4) = RtlComputeCrc32(0, (PUCHAR)v20, 0x5Cu);
    Header = SC_DISK::WriteSectors(*this, v17 + 1, 1LL, v20);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 48) & 1) != 0 )
        goto LABEL_43;
      *(_OWORD *)v26 = *(_OWORD *)v20;
      *((_OWORD *)v26 + 1) = *((_OWORD *)v20 + 1);
      *((_OWORD *)v26 + 2) = *((_OWORD *)v20 + 2);
      *((_OWORD *)v26 + 3) = *((_OWORD *)v20 + 3);
      *((_OWORD *)v26 + 4) = *((_OWORD *)v20 + 4);
      *((_QWORD *)v26 + 10) = *((_QWORD *)v20 + 10);
      *((_DWORD *)v26 + 22) = *((_DWORD *)v20 + 22);
      v39 = *((_QWORD *)v26 + 3);
      v40 = *((_QWORD *)v26 + 4);
      v41 = *((_DWORD *)v26 + 3);
      *((_DWORD *)v26 + 4) = 0;
      *((_QWORD *)v26 + 4) = v39;
      *((_QWORD *)v26 + 3) = v40;
      v42 = v40 - v17;
      *((_QWORD *)v26 + 9) = v42;
      *((_DWORD *)v26 + 4) = RtlComputeCrc32(0, (PUCHAR)v26, v41);
      Header = SC_DISK::WriteSectors(*this, v17 + 1, v42, Buffer);
      if ( Header >= 0 )
      {
LABEL_43:
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 440) = v49;
          *(_DWORD *)(v6 + 458) = -1;
          *(_BYTE *)(v6 + 446) = 0;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 208));
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
        }
      }
    }
LABEL_45:
    SC_ENV::Free(v20);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Header;
}
