/*
 * XREFs of GreDrawEscape @ 0x1C0279424
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02A7110 (NtGdiDrawEscape.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0278338 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0279278 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
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
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  __int16 v19; // [rsp+80h] [rbp-80h]
  struct _RECTL v20; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v21[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-30h]
  _BYTE v23[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v24[76]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+160h] [rbp+60h]
  __int64 v28; // [rsp+170h] [rbp+70h]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v8 = v14[0];
  if ( !v14[0] )
    return v7;
  if ( *((_QWORD *)v14[0] + 62) && (**((_DWORD **)v14[0] + 122) & 1) == 0 && (a2 != 8 || a3 >= 4) )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    v19 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 0);
    v9 = *((_QWORD *)v14[0] + 6);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v9 + 2888);
    if ( v10 )
    {
      if ( a2 != 8 )
      {
        if ( (v15[24] & 1) != 0 )
        {
          v20 = *(struct _RECTL *)((char *)v14[0] + 1032);
          v12 = XDCOBJ::prgnEffRao(v14);
          v25 = 0LL;
          v26 = 0;
          v28 = 0LL;
          v27 = 1;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v12, (struct ERECTL *)&v20, 0);
          if ( ERECTL::bEmpty((ERECTL *)v24) )
          {
            v7 = 1;
          }
          else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v14[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 62) != 0LL))
                               + 112) & 0x200000) != 0 )
          {
            if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
            {
              GreAcquireSemaphore(ghsemSprite);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
            }
            v22 = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v21, (struct XDCOBJ *)v14, &v20);
            ++*(_DWORD *)(*((_QWORD *)v14[0] + 62) + 92LL);
            v7 = v10(
                   (*((_QWORD *)v14[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 62) != 0LL),
                   a2,
                   v23,
                   &v20,
                   a3,
                   a4);
            DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v21);
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
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v14[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 62) != 0LL))
                      + 112) & 0x200000) != 0 )
      {
        v11 = v10(
                (*((_QWORD *)v14[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v14[0] + 62) != 0LL),
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
    if ( v16 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v16);
    v8 = v14[0];
  }
  if ( v8 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v7;
}
