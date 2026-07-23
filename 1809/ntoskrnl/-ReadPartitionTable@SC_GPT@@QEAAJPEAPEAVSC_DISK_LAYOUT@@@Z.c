/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032A284
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140329DE8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14032A558 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14013B5F0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14032A0A4 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14032A1C4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14032A928 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_GPT *this, struct SC_DISK_LAYOUT **a2)
{
  struct _GPT_ENTRY *v2; // rbp
  int Header; // esi
  char v4; // r12
  unsigned int v5; // edi
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // r10d
  int v13; // r11d
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r10d
  unsigned int v17; // r11d
  SIZE_T v18; // r15
  char *v19; // rax
  char *v20; // rdi
  __int64 v21; // r11
  unsigned int v22; // r10d
  __int64 v23; // r9
  int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  struct _GPT_ENTRY *v29; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  Header = 0;
  v29 = 0LL;
  v4 = 0;
  v5 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)this + 256LL);
  *a2 = 0LL;
  v9 = ((*(_DWORD *)(*(_QWORD *)this + 192LL) & 1) == 0) + 1;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 192LL) & 1) == 0) == -1 )
  {
LABEL_7:
    v10 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 192LL) & 1) == 0 && !v5 )
    {
      v11 = *(_QWORD *)(v10 + 240);
      if ( *(_QWORD *)(v8 + 32) != v11 - 1 )
      {
        v12 = 0;
        v13 = *(_DWORD *)(v8 + 80);
        v14 = v11
            - ((unsigned __int64)(-*(_DWORD *)(v10 + 228) & (unsigned int)(v13 * *(_DWORD *)(v8 + 84)
                                                                         + *(_DWORD *)(v10 + 228)
                                                                         - 1)) >> *(_BYTE *)(v10 + 236))
            - 2;
        if ( v13 )
        {
          while ( IsEqualGUID((const struct _GUID *)v2 + 8 * (unsigned __int64)v12, &NullGuid)
               || *(_QWORD *)(v15 + 40) <= v14 )
          {
            v12 = v16 + 1;
            if ( v12 >= v17 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          *(_QWORD *)(v8 + 48) = v14;
          v4 = 1;
        }
      }
    }
    v18 = (unsigned int)(144 * *(_DWORD *)(v8 + 80) + 48);
    v19 = (char *)SC_ENV::Allocate(v18);
    v20 = v19;
    if ( v19 )
    {
      memset(v19, 0, v18);
      LODWORD(v21) = 0;
      *(_DWORD *)v20 = 1;
      v22 = 0;
      *(_OWORD *)(v20 + 8) = *(_OWORD *)(v8 + 56);
      *((_QWORD *)v20 + 3) = *(_QWORD *)(v8 + 40) << *(_DWORD *)(*(_QWORD *)this + 236LL);
      *((_QWORD *)v20 + 4) = (*(_QWORD *)(v8 + 48) - *(_QWORD *)(v8 + 40) + 1LL) << *(_DWORD *)(*(_QWORD *)this + 236LL);
      for ( *((_DWORD *)v20 + 10) = *(_DWORD *)(v8 + 80); v22 < *(_DWORD *)(v8 + 80); v22 = v24 + 1 )
      {
        if ( !IsEqualGUID((const struct _GUID *)v2 + 8 * (unsigned __int64)v22, &NullGuid) )
        {
          v25 = 18 * v21;
          *(_DWORD *)&v20[8 * v25 + 48] = 1;
          *(_QWORD *)&v20[8 * v25 + 56] = *(_QWORD *)(v23 + 32) << *(_DWORD *)(*(_QWORD *)this + 236LL);
          v26 = *(_QWORD *)(v23 + 40) - *(_QWORD *)(v23 + 32) + 1LL;
          v27 = *(_DWORD *)(*(_QWORD *)this + 236LL);
          *(_DWORD *)&v20[8 * v25 + 72] = -1;
          *(_QWORD *)&v20[8 * v25 + 64] = v26 << v27;
          LODWORD(v21) = v21 + 1;
          *(_OWORD *)&v20[8 * v25 + 80] = *(_OWORD *)v23;
          *(_OWORD *)&v20[8 * v25 + 96] = *(_OWORD *)(v23 + 16);
          *(_QWORD *)&v20[8 * v25 + 112] = *(_QWORD *)(v23 + 48);
          *(_OWORD *)&v20[8 * v25 + 120] = *(_OWORD *)(v23 + 56);
          *(_OWORD *)&v20[8 * v25 + 136] = *(_OWORD *)(v23 + 72);
          *(_OWORD *)&v20[8 * v25 + 152] = *(_OWORD *)(v23 + 88);
          *(_OWORD *)&v20[8 * v25 + 168] = *(_OWORD *)(v23 + 104);
          *(_QWORD *)&v20[8 * v25 + 184] = *(_QWORD *)(v23 + 120);
        }
      }
      *((_DWORD *)v20 + 1) = v21;
      if ( v4 )
        SC_GPT::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)v20, 0);
      *a2 = (struct SC_DISK_LAYOUT *)v20;
    }
    else
    {
      Header = -1073741670;
    }
  }
  else
  {
    do
    {
      Header = SC_GPT::ReadHeader((SC_DISK **)this, v5, (struct GPT_HEADER *)v8);
      if ( Header >= 0 )
      {
        Header = SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v8, &v29);
        if ( Header >= 0 )
          goto LABEL_6;
      }
      ++v5;
    }
    while ( v5 < v9 );
    if ( Header >= 0 )
    {
LABEL_6:
      v2 = v29;
      goto LABEL_7;
    }
    v2 = v29;
  }
  if ( v2 )
    SC_ENV::Free(v2);
  return (unsigned int)Header;
}
