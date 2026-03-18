/*
 * XREFs of ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C026B008
 * Callers:
 *     CLIPOBJ_ppoGetPath @ 0x1C026B250 (CLIPOBJ_ppoGetPath.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C028DF4C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0298520 (VerifierCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C01495B4 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02B9830 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this)
{
  struct _PATHOBJ *result; // rax
  struct _PATHOBJ *v3; // rbx
  struct _PATHOBJ *v4; // rdi
  _BYTE v5[8]; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v6[8]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v7[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+C0h] [rbp-48h]

  result = (struct _PATHOBJ *)PALLOCMEM2(0x50uLL, 1869639751LL, 0);
  v3 = 0LL;
  v4 = result;
  if ( result )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( *((_QWORD *)&v6[0] + 1) )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v5, 1u, 8u);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
      if ( v8
        && RGNOBJ::bCreate((XCLIPOBJ *)((char *)this + 56), (struct EPATHOBJ *)v7, (struct EXFORMOBJ *)v5)
        && (unsigned int)RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v7, (struct EPATHOBJ *)v6) )
      {
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
        *(_OWORD *)&v4->fl = v6[0];
        *(_OWORD *)&v4[2].fl = v6[1];
        *(_OWORD *)&v4[4].fl = v6[2];
        *(_OWORD *)&v4[6].fl = v6[3];
        *(_OWORD *)&v4[8].fl = v6[4];
        EPATHOBJ::vLock((EPATHOBJ *)v4, **((struct HPATH__ ***)&v6[0] + 1));
        v3 = v4;
        *v4 = *(struct _PATHOBJ *)&v6[0];
      }
      else
      {
        Win32FreePool(v4);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
      }
    }
    else
    {
      Win32FreePool(v4);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    return v3;
  }
  return result;
}
