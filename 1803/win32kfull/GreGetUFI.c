/*
 * XREFs of GreGetUFI @ 0x1C012913C
 * Callers:
 *     NtGdiGetUFI @ 0x1C0129010 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x1C027F170 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C005665C (ComputeFileviewCheckSum.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _QWORD *a7)
{
  unsigned int v7; // ebx
  int v11; // eax
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rdi
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+38h] [rbp-20h]

  v7 = 0;
  *a6 = 0;
  if ( a7 )
    *a7 = 0LL;
  v16[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v18 = 0;
    v17 = 0LL;
    v11 = RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v16, 0, 2u);
    v12 = v17;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)(v17 + 496));
    if ( v12 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(v12 + 104) + 84LL);
      v13 = *(__int64 **)(v12 + 104);
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
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  }
  return v7;
}
