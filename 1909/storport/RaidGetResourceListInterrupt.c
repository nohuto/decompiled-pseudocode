/*
 * XREFs of RaidGetResourceListInterrupt @ 0x1C001DE30
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C001DB08 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1C001DF04 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidGetResourceListInterrupt(
        __int64 *a1,
        char a2,
        _DWORD *a3,
        unsigned __int8 *a4,
        int *a5,
        bool *a6,
        _QWORD *a7,
        unsigned __int8 *a8)
{
  int v11; // esi
  unsigned int v12; // ebp
  unsigned __int8 *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int i; // ebx
  _BYTE *v17; // r9
  unsigned __int8 v18; // al
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  char v23; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-30h] BYREF
  char v25; // [rsp+70h] [rbp+8h] BYREF

  v11 = (int)a1;
  v12 = -1073741275;
  if ( !a1 )
    return 0LL;
  v13 = a8;
  v14 = *a1;
  *a4 = 0;
  *v13 = 0;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 16);
    for ( i = 0; i < v15; ++i )
    {
      RaidGetResourceListElement(v11, i, (unsigned int)&v23, (unsigned int)&v25, 0LL, (__int64)&v24);
      v17 = v24;
      if ( *v24 == 2 )
      {
        v18 = v24[4];
        v12 = 0;
        *a4 = v18;
        if ( !a2 )
        {
          v20 = a7;
          v21 = *(_QWORD *)(v17 + 12);
          *a3 = *((_DWORD *)v17 + 2);
          v22 = v17[1] == 3;
          v20[1] = 0LL;
          *v20 = v21;
          *((_WORD *)v20 + 4) = *((_WORD *)v17 + 3);
          *a6 = v22;
          *a5 = v17[2] & 1;
          return v12;
        }
        if ( v18 > *v13 )
          *v13 = v18;
      }
    }
  }
  return v12;
}
