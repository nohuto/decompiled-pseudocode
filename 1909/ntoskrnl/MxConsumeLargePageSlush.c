/*
 * XREFs of MxConsumeLargePageSlush @ 0x1409F19C8
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x140188CD4 (MiAddExpansionNonPagedPool.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void MxConsumeLargePageSlush()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[5]; // [rsp+28h] [rbp-40h]

  v0 = MxHalDataTableEntry;
  v1 = 0;
  v2 = (unsigned int)dword_1404645B0;
  if ( *(_QWORD *)(qword_140A4F5B8 + 48) < *(_QWORD *)(MxHalDataTableEntry + 48) )
  {
    v3 = qword_140A4F5B8;
  }
  else
  {
    v3 = MxHalDataTableEntry;
    v0 = qword_140A4F5B8;
  }
  v4 = *(_QWORD *)(v3 + 48);
  v5 = (unsigned int)dword_1404645B0 + v4 + *(unsigned int *)(v3 + 64);
  if ( v5 != *(_QWORD *)(v0 + 48) )
  {
    v11 = MiVaToPfn(v5);
    v12 = *(_QWORD *)(v0 + 48);
    v13 = v11;
    v1 = 1;
    v14[0] = MiVaToPfn(v12) - v11;
    v4 = *(_QWORD *)(v3 + 48);
  }
  v6 = MiVaToPfn(v4);
  if ( (v6 & 0x1FF) != 0 )
  {
    v7 = 2LL * v1++;
    v14[v7 - 1] = v6 & 0xFFFFFFFFFFFFFE00uLL;
    v14[v7] = v6 & 0x1FF;
  }
  v8 = MiVaToPfn(*(_QWORD *)(v0 + 48) + *(unsigned int *)(v0 + 64) + v2 - 1);
  if ( (v8 & 0x1FF) != 0x1FF )
  {
    v9 = 2LL * v1++;
    v14[v9 - 1] = v8 + 1;
    v14[v9] = 511 - (v8 & 0x1FF);
  }
  if ( v1 )
  {
    v10 = &v14[2 * v1 - 1];
    do
    {
      v10 -= 2;
      MiAddExpansionNonPagedPool(*v10, v10[1]);
      --v1;
    }
    while ( v1 );
  }
}
