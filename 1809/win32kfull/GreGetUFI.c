/*
 * XREFs of GreGetUFI @ 0x1C010A3CC
 * Callers:
 *     NtGdiGetUFI @ 0x1C010A2A0 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x1C0292280 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ComputeFileviewCheckSum @ 0x1C00C278C (ComputeFileviewCheckSum.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _QWORD *a7)
{
  unsigned int v7; // ebx
  int v11; // eax
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+28h] [rbp-50h]
  _QWORD v18[6]; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0;
  *a6 = 0;
  if ( a7 )
    *a7 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( v18[0] )
  {
    v17 = 0;
    v16 = 0LL;
    v11 = RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v18, 0, 2u);
    v12 = v16;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
    if ( v12 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(v12 + 120) + 84LL);
      v13 = *(__int64 **)(v12 + 120);
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          if ( *(struct PFT **const *)(v14 + 128) == gpPFTPrivate )
          {
            *a6 |= 1u;
            if ( a7 )
              *a7 = *(unsigned int *)(*v13 + 140);
          }
          if ( (*(_DWORD *)(v14 + 52) & 0x10) != 0 )
            *a6 |= 4u;
          if ( *(_QWORD *)(v14 + 40) )
          {
            *a6 |= 2u;
            if ( a3 )
              memmove(a3, *(const void **)(v14 + 40), *(unsigned int *)(v14 + 48));
            if ( a4 )
              *a4 = *(_DWORD *)(v14 + 48);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v14 + 136);
              *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v14 + 40), *(_DWORD *)(v14 + 48));
            }
          }
          else
          {
            if ( a3 )
              memset(a3, 0, 0x48uLL);
            if ( a4 )
              *a4 = 0;
            if ( a5 )
              *a5 = 0;
          }
          v7 = 1;
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v7;
}
