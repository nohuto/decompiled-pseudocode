/*
 * XREFs of GreDrawEscape @ 0x1C0248434
 * Callers:
 *     NtGdiDrawEscape @ 0x1C027E740 (NtGdiDrawEscape.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02474C8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02482C8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  DC *v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64); // r14
  unsigned int v11; // eax
  struct REGION *v12; // rax
  DC *v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  struct _RECTL v19; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-30h]
  _BYTE v22[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v23[76]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  int v26; // [rsp+160h] [rbp+60h]
  __int64 v27; // [rsp+170h] [rbp+70h]

  v7 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v14, a1);
  v8 = v14[0];
  if ( !v14[0] )
    return v7;
  if ( *((_QWORD *)v14[0] + 63) && (*(_DWORD *)(*((_QWORD *)v14[0] + 10) + 12LL) & 1) == 0 && (a2 != 8 || a3 >= 4) )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 0);
    v9 = *((_QWORD *)v14[0] + 6);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v9 + 2880);
    if ( v10 )
    {
      if ( a2 != 8 )
      {
        if ( (v15[24] & 1) != 0 )
        {
          v19 = (struct _RECTL)*((_OWORD *)v14[0] + 90);
          v12 = XDCOBJ::prgnEffRao(v14);
          v24 = 0LL;
          v25 = 0;
          v27 = 0LL;
          v26 = 1;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v22, v12, (struct ERECTL *)&v19, 0);
          if ( ERECTL::bEmpty((ERECTL *)v23) )
          {
            v7 = 1;
          }
          else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v14[0] + 63) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 63) != 0LL))
                               + 112) & 0x200000) != 0 )
          {
            if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
            {
              GreAcquireSemaphore(ghsemSprite);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
            }
            v21 = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v20, (struct XDCOBJ *)v14, &v19);
            ++*(_DWORD *)(*((_QWORD *)v14[0] + 63) + 92LL);
            v7 = v10(
                   (*((_QWORD *)v14[0] + 63) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 63) != 0LL),
                   a2,
                   v22,
                   &v19,
                   a3,
                   a4);
            DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v20);
            if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              GreReleaseSemaphoreInternal(ghsemSprite);
            }
          }
          goto LABEL_20;
        }
        v11 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v14[0] + 63) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 63) != 0LL))
                      + 112) & 0x200000) != 0 )
      {
        v11 = v10(
                (*((_QWORD *)v14[0] + 63) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 63) != 0LL),
                8LL,
                0LL,
                0LL,
                a3,
                a4);
LABEL_12:
        v7 = v11;
      }
    }
LABEL_20:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    v8 = v14[0];
  }
  if ( v8 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v7;
}
