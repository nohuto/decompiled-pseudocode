/*
 * XREFs of ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F43E0
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4924 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F339C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F3454 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F364C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F369C (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F40A8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxPoke(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // edi
  struct tagINTDDEINFO *v7; // rbx
  void *v8; // rdx
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *v13; // rax
  void *v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = 131;
  v6 = xxxCopyDdeIn(*a2, &v15, &v14, &v16);
  v7 = v16;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    v6 = 3;
    if ( !v16 )
      return v6;
    Win32FreePool(v16);
  }
  if ( v6 == 2 )
  {
    if ( (*((_WORD *)v7 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v7 + 6)) )
      {
        Win32FreePool(v7);
        return 3LL;
      }
      v10 = (unsigned int)GiveObject(
                            *((unsigned __int16 *)v7 + 37),
                            v8,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL)) == 0;
      v11 = v15;
      if ( !v10 )
        v11 = v15 | 0x4000;
      v12 = v11 | 0x400;
    }
    else
    {
      v10 = (unsigned int)AddPublicObject(
                            *((unsigned __int16 *)v7 + 37),
                            *((void **)v7 + 6),
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL)) == 0;
      v12 = v15;
      if ( !v10 )
        v12 = v15 | 0x2000;
    }
    *a1 |= 0x80000000;
    v13 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxPokeAck, v14, 0LL, v7, v12);
    *a2 = v13;
    if ( !v13 )
      return 3;
  }
  return v6;
}
