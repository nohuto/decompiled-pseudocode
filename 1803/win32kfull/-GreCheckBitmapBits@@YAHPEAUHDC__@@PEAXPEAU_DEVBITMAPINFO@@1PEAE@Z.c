/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0285ECC
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C0286600 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v6; // esi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  _QWORD v13[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v14; // [rsp+78h] [rbp-21h] BYREF
  char v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+84h] [rbp-15h]
  __int128 v17; // [rsp+88h] [rbp-11h] BYREF
  __int64 v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  __int64 v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  __int64 v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]

  v6 = 0;
  v13[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v21 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v17, (struct XDCOBJ *)v13, 0) )
    {
      v10 = *(_QWORD *)(v13[0] + 48LL);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 3208) )
        {
          LOBYTE(v9) = 14;
          v11 = HmgShareLockCheck(a2, v9);
          if ( v11 )
          {
            v14 = 0LL;
            v15 = 0;
            v16 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v14, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v14 )
              v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v10 + 3208))(
                     *(_QWORD *)(v10 + 1792),
                     *(_QWORD *)(v11 + 24),
                     v14 + 24,
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v14);
            DEC_SHARE_REF_CNT(v11);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
  }
  return v6;
}
