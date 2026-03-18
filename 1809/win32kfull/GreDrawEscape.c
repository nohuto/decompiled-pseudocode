/*
 * XREFs of GreDrawEscape @ 0x1C0260448
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02919F0 (NtGdiDrawEscape.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C025F33C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02602A8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64); // r14
  unsigned int v10; // eax
  struct REGION *v11; // rax
  DC *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[80]; // [rsp+90h] [rbp-70h] BYREF
  struct _RECTL v17; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v18[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+110h] [rbp+10h]
  _BYTE v20[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v21[52]; // [rsp+124h] [rbp+24h] BYREF
  __int64 v22; // [rsp+158h] [rbp+58h]
  __int64 v23; // [rsp+170h] [rbp+70h]
  int v24; // [rsp+178h] [rbp+78h]
  int v25; // [rsp+1A0h] [rbp+A0h]
  __int64 v26; // [rsp+1B0h] [rbp+B0h]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] && *((_QWORD *)v13[0] + 62) && (**((_DWORD **)v13[0] + 122) & 1) == 0 && (a2 != 8 || a3 >= 4) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v16);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 0);
    v8 = *((_QWORD *)v13[0] + 6);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v8 + 2888);
    if ( v9 )
    {
      if ( a2 != 8 )
      {
        if ( (v15[24] & 1) != 0 )
        {
          v17 = *(struct _RECTL *)((char *)v13[0] + 1032);
          v11 = XDCOBJ::prgnEffRao(v13);
          v22 = 0LL;
          v23 = 0LL;
          v24 = 0;
          v25 = 1;
          v26 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v20, v11, (struct ERECTL *)&v17, 0);
          if ( ERECTL::bEmpty((ERECTL *)v21) )
          {
            v7 = 1;
          }
          else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v13[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 62) != 0LL))
                               + 112) & 0x200000) != 0 )
          {
            if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
            {
              GreAcquireSemaphore(ghsemSprite);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
            }
            v19 = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v18, (struct XDCOBJ *)v13, &v17);
            ++*(_DWORD *)(*((_QWORD *)v13[0] + 62) + 92LL);
            v7 = v9(
                   (*((_QWORD *)v13[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 62) != 0LL),
                   a2,
                   v20,
                   &v17,
                   a3,
                   a4);
            DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v18);
            if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              GreReleaseSemaphoreInternal(ghsemSprite);
            }
          }
          goto LABEL_20;
        }
        v10 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v13[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 62) != 0LL))
                      + 112) & 0x200000) != 0 )
      {
        v10 = v9((*((_QWORD *)v13[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 62) != 0LL), 8LL, 0LL, 0LL, a3, a4);
LABEL_12:
        v7 = v10;
      }
    }
LABEL_20:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    DCOBJ::~DCOBJ((DCOBJ *)v16);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
  return v7;
}
