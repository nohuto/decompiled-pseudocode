/*
 * XREFs of ComputeFNTCacheFastCheckSum @ 0x1C00BF260
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00BF124 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00BF334 (Win32FileInfo.c)
 */

__int64 __fastcall ComputeFNTCacheFastCheckSum(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v10; // edi
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  unsigned __int64 v17; // rdx

  v6 = 0LL;
  v7 = a1;
  v10 = 0;
  if ( a4 )
  {
    v11 = a4;
    do
    {
      v12 = *a3;
      if ( !*(_DWORD *)(*a3 + 24) || !*(_QWORD *)v12 )
      {
        Win32FileInfo(*(PCWSTR *)(v12 + 80));
        *(_DWORD *)(*a3 + 24) = 0;
        v12 = *a3;
      }
      ++a3;
      v10 = *(_DWORD *)(v12 + 4) + 257 * (*(_DWORD *)v12 + 257 * (257 * v10 + *(_DWORD *)(v12 + 24)));
      --v11;
    }
    while ( v11 );
  }
  if ( (_DWORD)v7 )
  {
    v13 = v7;
    do
    {
      v14 = *a2++;
      v10 = v14 + 257 * v10;
      --v13;
    }
    while ( v13 );
  }
  v15 = (_DWORD *)a5;
  if ( a5 && a6 )
  {
    v17 = (unsigned __int64)a6 >> 2;
    if ( a5 > a5 + 4 * v17 )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        ++v6;
        v10 = *v15++ + 257 * v10;
      }
      while ( v6 < v17 );
    }
  }
  return v10;
}
