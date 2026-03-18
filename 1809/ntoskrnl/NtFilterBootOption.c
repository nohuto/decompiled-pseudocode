/*
 * XREFs of NtFilterBootOption @ 0x1408A2CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400DCAF0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1408A3114 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408A36C0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall NtFilterBootOption(unsigned int a1, int a2, unsigned int a3, _BYTE *a4, size_t Size)
{
  int v6; // esi
  unsigned int v7; // r12d
  int v8; // edi
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  _DWORD *v13; // r9
  __int64 v14; // r8
  __int16 v15; // cx
  int v17; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v19[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v7 = a1;
  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v8 = -1073741790;
    goto LABEL_55;
  }
  if ( !qword_1404DC690 )
  {
    v8 = -2143092730;
    goto LABEL_55;
  }
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( v6 )
      {
        if ( a3 )
        {
          if ( a4 )
          {
            v9 = Size;
            if ( (_DWORD)Size )
            {
              v11 = dword_1404E1514;
              if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
              {
LABEL_20:
                v8 = 0;
                goto LABEL_55;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                if ( (unsigned int)Size > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x62536553u);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    goto LABEL_55;
                  }
                  memmove(P, a4, (unsigned int)Size);
                  a4 = P;
                  v6 = a2;
                }
                else
                {
                  memmove(v19, a4, (unsigned int)Size);
                  a4 = v19;
                }
                v7 = a1;
              }
              goto LABEL_31;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != 2 )
      {
        v8 = -1073741585;
        goto LABEL_55;
      }
      if ( v6 )
      {
        if ( a3 )
        {
          if ( !a4 )
          {
            v9 = Size;
            if ( !(_DWORD)Size )
            {
              v10 = dword_1404E1514;
              if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
                goto LABEL_20;
LABEL_31:
              v12 = 0;
              v8 = 0;
              if ( *((_WORD *)qword_1404DC690 + 18) )
              {
                while ( 1 )
                {
                  v13 = (_DWORD *)(qword_1404E1528 + 12LL * v12);
                  if ( v13[1] == a3 && (!*v13 || *v13 == v6) )
                  {
                    v14 = (unsigned int)v13[2];
                    v15 = *(_WORD *)(v14 + qword_1404E1530);
                    if ( ((v15 & 0x20) == 0 || (dword_1404401E4 & 4) != 0)
                      && ((v15 & 0x40) == 0 || (dword_1404401E4 & 0x10) != 0) )
                    {
                      break;
                    }
                  }
                  if ( ++v12 >= *((unsigned __int16 *)qword_1404DC690 + 18) )
                    goto LABEL_20;
                }
                if ( v7 == 1 )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(v13, a4, v9);
                }
                else
                {
                  v8 = 0;
                  if ( (v15 & 0x1F) != 8 || *(_WORD *)(v14 + qword_1404E1530 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_54:
    v8 = -1073741811;
    goto LABEL_55;
  }
  if ( v6 || a3 || a4 || (_DWORD)Size )
    goto LABEL_54;
  v17 = 0;
  if ( !_InterlockedCompareExchange(&dword_1404E1518, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd(v7);
    v17 = v8;
    if ( v8 < 0 )
      goto LABEL_55;
    _InterlockedExchange(&dword_1404E1518, 1);
  }
  v8 = v17;
LABEL_55:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
