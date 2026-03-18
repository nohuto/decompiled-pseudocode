/*
 * XREFs of HvlSetHpetConfig @ 0x140289480
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BDFF0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BE0F0 (HvlpHvStatusIsInsufficientMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  _QWORD *v9; // rax
  __int16 v10; // bx
  bool IsInsufficientMemory; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  PHYSICAL_ADDRESS v20[4]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v21[4]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v22[2080]; // [rsp+70h] [rbp-98h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  v9 = HvlpAcquireHypercallPage(v20, 1, (__int64)v22, 40LL);
  *(_DWORD *)v9 = 6;
  v9[1] = a1;
  *((_DWORD *)v9 + 4) = a2;
  v9[3] = a3;
  *((_BYTE *)v9 + 32) = a4;
  v10 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v20);
  IsInsufficientMemory = HvlpHvStatusIsInsufficientMemory(v10);
  v14 = 0;
  while ( IsInsufficientMemory )
  {
    result = HvlpHandleInsufficientMemory(v10, v12, v13);
    if ( (int)result < 0 )
      return result;
    v16 = HvlpAcquireHypercallPage(v20, 1, (__int64)v22, 40LL);
    *(_DWORD *)v16 = 6;
    v16[1] = a1;
    *((_DWORD *)v16 + 4) = a2;
    v16[3] = a3;
    *((_BYTE *)v16 + 32) = a4;
    v10 = HvcallCodeVa();
    HvlpReleaseHypercallPage((unsigned int *)v20);
    IsInsufficientMemory = HvlpHvStatusIsInsufficientMemory(v10);
  }
  if ( v10 )
    return 3221225473LL;
  v17 = HvlpAcquireHypercallPage(v20, 1, (__int64)v22, 8LL);
  v18 = HvlpAcquireHypercallPage(v21, 2, (__int64)&v22[16], 1032LL);
  *(_DWORD *)v17 = 7;
  if ( (unsigned __int16)HvcallCodeVa() )
    v14 = -1073741823;
  else
    *a5 = *(_OWORD *)v18;
  HvlpReleaseHypercallPage((unsigned int *)v21);
  HvlpReleaseHypercallPage((unsigned int *)v20);
  return v14;
}
