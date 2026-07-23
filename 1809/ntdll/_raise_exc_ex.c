/*
 * XREFs of _raise_exc_ex @ 0x180098900
 * Callers:
 *     _except1 @ 0x180098500 (_except1.c)
 *     _raise_exc @ 0x1800988D0 (_raise_exc.c)
 * Callees:
 *     RaiseException @ 0x180098420 (RaiseException.c)
 *     _clrfp @ 0x180098E4C (_clrfp.c)
 *     _statfp @ 0x180098F1C (_statfp.c)
 */

__int64 __fastcall raise_exc_ex(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6, int a7)
{
  DWORD v7; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  char v14; // al
  __int64 v15; // rax
  _DWORD *v16; // r14
  int v17; // ebp
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 result; // rax
  ULONG_PTR Arguments; // [rsp+40h] [rbp+8h] BYREF

  Arguments = (ULONG_PTR)a1;
  v7 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( (a3 & 0x10) != 0 )
  {
    a1[1] |= 1u;
    v7 = -1073741681;
  }
  if ( (a3 & 2) != 0 )
  {
    a1[1] |= 2u;
    v7 = -1073741677;
  }
  if ( (a3 & 1) != 0 )
  {
    a1[1] |= 4u;
    v7 = -1073741679;
  }
  if ( (a3 & 4) != 0 )
  {
    a1[1] |= 8u;
    v7 = -1073741682;
  }
  if ( (a3 & 8) != 0 )
  {
    a1[1] |= 0x10u;
    v7 = -1073741680;
  }
  a1[2] ^= (a1[2] ^ ~(16 * (*a2 >> 7))) & 0x10;
  v11 = a1[2] ^ (a1[2] ^ ~(8 * (*a2 >> 9))) & 8;
  a1[2] = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)~(4 * (*a2 >> 10))) & 4;
  a1[2] = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)~(2 * (*a2 >> 11))) & 2;
  a1[2] = v13;
  a1[2] = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)~(unsigned __int8)((unsigned __int64)*(unsigned int *)a2 >> 12)) & 1;
  v14 = statfp();
  if ( (v14 & 1) != 0 )
    a1[3] |= 0x10u;
  if ( (v14 & 4) != 0 )
    a1[3] |= 8u;
  if ( (v14 & 8) != 0 )
    a1[3] |= 4u;
  if ( (v14 & 0x10) != 0 )
    a1[3] |= 2u;
  if ( (v14 & 0x20) != 0 )
    a1[3] |= 1u;
  v15 = *(_DWORD *)a2 & 0x6000LL;
  if ( v15 )
  {
    switch ( v15 )
    {
      case 8192LL:
        *a1 &= ~2u;
        *a1 |= 1u;
        break;
      case 16384LL:
        *a1 &= ~1u;
        *a1 |= 2u;
        break;
      case 24576LL:
        *a1 |= 3u;
        break;
    }
  }
  else
  {
    *a1 &= 0xFFFFFFFC;
  }
  *a1 &= 0xFFFE001F;
  v16 = a6;
  *a1 |= 32 * (a4 & 0xFFF);
  v17 = a7;
  v18 = a1[8];
  if ( a7 )
  {
    a1[8] = v18 & 0xFFFFFFE0 | 1;
    a1[4] = *a5;
    a1[24] = a1[24] & 0xFFFFFFE0 | 1;
    a1[20] = *v16;
  }
  else
  {
    a1[8] = v18 & 0xFFFFFFE0 | 3;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a5;
    a1[24] = a1[24] & 0xFFFFFFE0 | 3;
    *((_QWORD *)a1 + 10) = *(_QWORD *)v16;
  }
  clrfp();
  RaiseException(v7, 0, 1u, &Arguments);
  v19 = (_DWORD *)Arguments;
  v20 = *(_DWORD *)(Arguments + 8);
  if ( (v20 & 0x10) != 0 )
  {
    *a2 &= ~0x80uLL;
    v20 = v19[2];
  }
  if ( (v20 & 8) != 0 )
  {
    *a2 &= ~0x200uLL;
    v20 = v19[2];
  }
  if ( (v20 & 4) != 0 )
  {
    *a2 &= ~0x400uLL;
    v20 = v19[2];
  }
  if ( (v20 & 2) != 0 )
  {
    *a2 &= ~0x800uLL;
    v20 = v19[2];
  }
  if ( (v20 & 1) != 0 )
    *a2 &= ~0x1000uLL;
  if ( (*v19 & 3) != 0 )
  {
    switch ( *v19 & 3 )
    {
      case 1:
        *a2 &= ~0x4000uLL;
        *a2 |= 0x2000uLL;
        break;
      case 2:
        *a2 &= ~0x2000uLL;
        *a2 |= 0x4000uLL;
        break;
      case 3:
        *a2 |= 0x6000uLL;
        break;
    }
  }
  else
  {
    *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
  }
  if ( v17 )
  {
    result = (unsigned int)v19[20];
    *v16 = result;
  }
  else
  {
    result = *((_QWORD *)v19 + 10);
    *(_QWORD *)v16 = result;
  }
  return result;
}
