/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x140277DBC
 * Callers:
 *     HvlGetEncryptedData @ 0x140277C50 (HvlGetEncryptedData.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpGetPageList @ 0x14027A4C8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14027A7C8 (HvlpStartPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, char *a2, unsigned int a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v5; // r13
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+20h]

  v18 = a1;
  v5 = (_QWORD *)a5;
  *a4 = 0;
  *v5 = 0LL;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( !HvlpCrashdumpIterationState )
  {
    HvlpStartPageListIteration(1LL);
    qword_140438608 = -1LL;
    dword_140438610 = 0;
    HvlpCrashdumpIterationState = 1;
  }
  v10 = dword_140438610;
  if ( dword_140438610 )
  {
    v11 = qword_140438608;
    a5 = qword_140438608;
    LODWORD(v18) = dword_140438610;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &a5, &v18) )
    {
      qword_1404384E8 = 0LL;
      HvlpIteratorCrashdump = 0;
      HvlpCrashdumpIterationState = 0;
      qword_140438608 = -1LL;
      dword_140438610 = 0;
      return 3221226021LL;
    }
    v10 = v18;
    v11 = a5;
  }
  v12 = a3 >> 12;
  v13 = v10;
  if ( v12 < v10 )
    v13 = v12;
  if ( v13 )
  {
    v14 = v13;
    v15 = v11 << 12;
    do
    {
      v19 = v15 & 0xFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_1404385E8 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v19;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, qword_1404385E8, 0x1000uLL);
      a2 += 4096;
      v15 += 4096LL;
      --v14;
    }
    while ( v14 );
  }
  *v5 = v11;
  *a4 = v13 << 12;
  dword_140438610 = v10 - v13;
  qword_140438608 = v11 + v13;
  return 0LL;
}
