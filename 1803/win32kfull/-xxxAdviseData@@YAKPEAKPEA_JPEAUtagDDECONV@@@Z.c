/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF4F4
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFF40 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D02FC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01CED34 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01CEDE8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01CEE9C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01CEFFC (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01CF040 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01CF9E8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C01E1A5C (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // esi
  struct tagINTDDEINFO *v7; // rdi
  __int16 v8; // cx
  void *v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  void *v15; // rax
  struct tagXSTATE *v16; // rax
  struct tagINTDDEINFO *v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF
  void *v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = 131;
  v6 = xxxCopyDdeIn(*a2, &v18, &v19, &v17);
  v7 = v17;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    v6 = 3;
    if ( !v17 )
      return v6;
    Win32FreePool(v17);
  }
  if ( v6 == 2 )
  {
    v8 = *((_WORD *)v7 + 36);
    if ( (v8 & 0xA000) == 0 )
    {
      v8 |= 0x2000u;
      *((_WORD *)v7 + 36) = v8;
    }
    if ( (v8 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v7 + 6)) )
      {
        Win32FreePool(v7);
        return 3LL;
      }
      v11 = GiveObject(
              *((unsigned __int16 *)v7 + 37),
              v9,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 416LL) + 56LL));
      v12 = v18;
      if ( v11 )
        v12 = v18 | 0x4000;
      v13 = v12 | 0x400;
    }
    else
    {
      v14 = AddPublicObject(
              *((unsigned __int16 *)v7 + 37),
              *((void **)v7 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 416LL) + 56LL));
      v13 = v18;
      if ( v14 )
        v13 = v18 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v7 + 36) >= 0 )
    {
      xxxClientFreeDDEHandle(v19, v13 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0
        || (v16 = Createpxs(0LL, 0LL, 0LL, v7, v13 | 0x200)) == 0LL )
      {
        v15 = 0LL;
      }
      else
      {
        *((_QWORD *)v16 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v15 = *(void **)v16;
      }
    }
    else
    {
      v15 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxAdviseDataAck, 0LL, v19, v7, v13);
    }
    *a2 = v15;
    if ( !v15 )
      return 3;
  }
  return v6;
}
