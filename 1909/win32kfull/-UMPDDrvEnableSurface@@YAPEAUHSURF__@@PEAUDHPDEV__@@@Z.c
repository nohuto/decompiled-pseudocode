/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C01116F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00DC210 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  UMPDOBJ *v7; // rcx
  __int64 v8; // rbx
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-38h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  memset(v13, 0, sizeof(v13));
  v2 = v11;
  if ( v11 )
  {
    v13[0] = 0x300000020LL;
    v13[2] = *(_QWORD *)v11;
    v13[3] = a1;
    LODWORD(Size) = 8;
    v3 = UMPDOBJ::Thunk(v11, v13, 32LL, &v12, Size);
    v5 = v12;
    if ( v3 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      LOBYTE(v4) = 5;
      v6 = HmgShareLockCheck(v5, v4);
      v8 = v6;
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 100) == 1 && (*(_BYTE *)(v6 + 112) & 0x29) != 0x29 )
          v5 = 0LL;
        if ( (*(_DWORD *)(v6 + 112) & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 106) )
          UMPDOBJ::vClient(v7, (void *)(v6 + 24));
      }
      else
      {
        v5 = 0LL;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  else
  {
    v5 = 0LL;
  }
  XUMPDOBJ::~XUMPDOBJ(&v11);
  return v5;
}
