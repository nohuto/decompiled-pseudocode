/*
 * XREFs of ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14032AE7C
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14032A928 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14032B49C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MBR_ENTRY::ComputeChs(MBR_ENTRY *this, struct _DISK_GEOMETRY *a2)
{
  DWORD v2; // esi
  _BYTE **v3; // rdi
  ULONG LowPart; // ebx
  unsigned int *v5; // r11
  char *v7; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // r10d
  DWORD v14; // eax
  DWORD v15; // edx
  DWORD SectorsPerTrack; // r8d
  _BYTE *v17; // rdx
  _QWORD v18[3]; // [rsp+0h] [rbp-18h] BYREF
  int v19; // [rsp+20h] [rbp+8h] BYREF
  int v20; // [rsp+24h] [rbp+Ch]

  v2 = a2->SectorsPerTrack * a2->TracksPerCylinder;
  v3 = (_BYTE **)v18;
  LowPart = a2->Cylinders.LowPart;
  v5 = (unsigned int *)&v19;
  v18[0] = (char *)this + 1;
  v7 = (char *)this + 5;
  v9 = *((_DWORD *)this + 2);
  v18[1] = v7;
  v20 = 0;
  v19 = v9;
  v10 = v2 * LowPart;
  v11 = 2LL;
  v20 = *((_DWORD *)this + 3) + v9 - 1;
  do
  {
    v12 = *v5;
    if ( *v5 >= v10 )
    {
      v13 = a2->Cylinders.LowPart - 1;
      SectorsPerTrack = a2->SectorsPerTrack;
      LOBYTE(v14) = a2->TracksPerCylinder - 1;
    }
    else
    {
      v13 = v12 / v2;
      v15 = v12 % v2 % a2->SectorsPerTrack;
      v14 = v12 % v2 / a2->SectorsPerTrack;
      LOBYTE(SectorsPerTrack) = v15 + 1;
    }
    v17 = *v3;
    ++v5;
    ++v3;
    *v17 = v14;
    v17[1] = (v13 >> 2) ^ (SectorsPerTrack ^ (v13 >> 2)) & 0x3F;
    v17[2] = v13;
    --v11;
  }
  while ( v11 );
}
