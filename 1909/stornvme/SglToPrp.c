/*
 * XREFs of SglToPrp @ 0x1C0001888
 * Callers:
 *     SetPrpFromSrb @ 0x1C0001854 (SetPrpFromSrb.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned int v4; // ebp
  _QWORD *SrbExtension; // rbx
  __int64 v6; // r8
  _DWORD *ScatterGatherList; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r14
  _QWORD *v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // r14d
  _QWORD *v16; // rax
  bool v17; // zf
  _QWORD *v18; // rax
  __int64 PhysicalAddress; // rax
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  SrbExtension = (_QWORD *)GetSrbExtension(a2);
  if ( (*((_BYTE *)SrbExtension + 4253) & 6) == 2 )
  {
    ScatterGatherList = (_DWORD *)SrbExtension[527];
    v9 = ScatterGatherList;
    if ( !ScatterGatherList )
    {
      ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(v6, a2);
      SrbExtension[527] = ScatterGatherList;
      v9 = ScatterGatherList;
    }
    v10 = 0LL;
    v11 = SrbExtension + 515;
    v12 = SrbExtension + 515;
    v22 = 0;
    if ( *ScatterGatherList )
    {
      do
      {
        if ( v3 )
        {
          memset(SrbExtension, 0, 0x1000uLL);
          v9 = (_DWORD *)SrbExtension[527];
          v11 = SrbExtension + 515;
          v3 = 0;
        }
        v13 = *(_QWORD *)&v9[6 * v10 + 4];
        v14 = (unsigned int)v9[6 * v10 + 6];
        if ( v14 + v13 % 4096 > 4096 )
        {
          if ( (_DWORD)v14 )
          {
            do
            {
              v15 = v13 & 0xFFF;
              if ( v3 )
              {
                memset(SrbExtension, 0, 0x1000uLL);
                v3 = 0;
              }
              *v12 = v13;
              v11 = SrbExtension + 515;
              if ( (unsigned int)(v15 + v14) <= 0x1000 )
                break;
              LODWORD(v14) = v15 + v14 - 4096;
              v13 += (unsigned int)(4096 - v15);
              v16 = v12 + 1;
              if ( v12 == v11 )
                v3 = 1;
              ++v4;
              v17 = v12 == v11;
              v12 = SrbExtension;
              if ( !v17 )
                v12 = v16;
            }
            while ( (_DWORD)v14 );
            LODWORD(v10) = v22;
          }
        }
        else
        {
          *v12 = v13;
        }
        v9 = (_DWORD *)SrbExtension[527];
        v18 = v12 + 1;
        if ( v12 == v11 )
          v3 = 1;
        v10 = (unsigned int)(v10 + 1);
        ++v4;
        v22 = v10;
        v17 = v12 == v11;
        v12 = SrbExtension;
        if ( !v17 )
          v12 = v18;
      }
      while ( (unsigned int)v10 < *v9 );
      if ( v4 >= 2 )
      {
        if ( v4 == 2 )
          PhysicalAddress = *SrbExtension;
        else
          PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v22);
        SrbExtension[516] = PhysicalAddress;
      }
    }
  }
  return 0LL;
}
