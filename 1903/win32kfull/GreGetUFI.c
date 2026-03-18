/*
 * XREFs of GreGetUFI @ 0x1C004F1F8
 * Callers:
 *     NtGdiGetUFI @ 0x1C004F0B0 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x1C02A7E20 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ComputeFileviewCheckSum @ 0x1C00E859C (ComputeFileviewCheckSum.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, __int64 a6, _QWORD *a7)
{
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  _QWORD *v9; // r15
  int v13; // eax
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (_DWORD *)a6;
  v8 = 0;
  v9 = a7;
  *(_DWORD *)a6 = 0;
  if ( v9 )
    *v9 = 0LL;
  v18[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v18, a1);
  if ( v18[0] )
  {
    a6 = 0LL;
    v13 = RFONTOBJ::bInit((RFONTOBJ *)&a6, (struct XDCOBJ *)v18, 0, 2u);
    v14 = a6;
    if ( v13 )
      GreAcquireSemaphore(*(_QWORD *)(a6 + 504));
    if ( v14 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(v14 + 120) + 84LL);
      v15 = *(__int64 **)(v14 + 120);
      if ( v15 )
      {
        v16 = *v15;
        if ( *v15 )
        {
          if ( *(struct PFT **const *)(v16 + 128) == gpPFTPrivate )
          {
            *v7 |= 1u;
            if ( v9 )
              *v9 = *(unsigned int *)(*v15 + 140);
          }
          if ( (*(_DWORD *)(v16 + 52) & 0x10) != 0 )
            *v7 |= 4u;
          if ( *(_QWORD *)(v16 + 40) )
          {
            *v7 |= 2u;
            if ( a3 )
              memmove(a3, *(const void **)(v16 + 40), *(unsigned int *)(v16 + 48));
            if ( a4 )
              *a4 = *(_DWORD *)(v16 + 48);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v16 + 136);
              *a5 -= ComputeFileviewCheckSum(*(_QWORD *)(v16 + 40), *(unsigned int *)(v16 + 48));
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
          v8 = 1;
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
  }
  return v8;
}
