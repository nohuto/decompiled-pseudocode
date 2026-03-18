/*
 * XREFs of ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE00
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C0209654 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020970C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C0209958 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02099A8 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A860 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxPoke(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // r14
  void *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  struct tagINTDDEINFO *v9; // rbx
  void *v10; // rdx
  bool v12; // zf
  unsigned int v13; // eax
  unsigned int v14; // eax
  void *v15; // rax
  struct tagINTDDEINFO *v16; // [rsp+30h] [rbp-38h] BYREF
  void *v17; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 42, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v6 = *v4;
  v18 = 131;
  v7 = xxxCopyDdeIn(v6, &v18, &v17, &v16);
  v8 = _HMPheFromObject(a3);
  v9 = v16;
  if ( (*(_BYTE *)(v8 + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( !v16 )
      return v7;
    Win32FreePool(v16);
  }
  if ( v7 == 2 )
  {
    if ( (*((_WORD *)v9 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v9 + 6)) )
      {
        Win32FreePool(v9);
        return 3LL;
      }
      v12 = (unsigned int)GiveObject(
                            *((unsigned __int16 *)v9 + 37),
                            v10,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 416LL) + 56LL)) == 0;
      v13 = v18;
      if ( !v12 )
        v13 = v18 | 0x4000;
      v14 = v13 | 0x400;
    }
    else
    {
      v12 = (unsigned int)AddPublicObject(
                            *((unsigned __int16 *)v9 + 37),
                            *((void **)v9 + 6),
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 416LL) + 56LL)) == 0;
      v14 = v18;
      if ( !v12 )
        v14 = v18 | 0x2000;
    }
    *a1 |= 0x80000000;
    v15 = AnticipatePost(
            *((struct tagDDECONV **)a3 + 4),
            (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxPokeAck,
            v17,
            0LL,
            v9,
            v14);
    *v4 = v15;
    if ( !v15 )
      return 3;
  }
  return v7;
}
