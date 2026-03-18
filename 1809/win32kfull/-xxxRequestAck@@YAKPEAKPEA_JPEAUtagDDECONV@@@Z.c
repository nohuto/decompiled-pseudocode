/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4620
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F339C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F3454 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F3514 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F35E8 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F364C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F369C (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F37A0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F3B94 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F3F4C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F40A8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F49EC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1C0207724 (xxxClientGetDDEFlags.c)
 */

unsigned int __fastcall xxxRequestAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  void *v7; // rcx
  __int64 v8; // rbx
  __int16 DDEFlags; // ax
  struct tagINTDDEINFO *v10; // rsi
  int v11; // edx
  __int16 v12; // ax
  void *v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // eax
  void *v18; // rax
  __int64 v19; // rdx
  struct tagXSTATE *v20; // rax
  __int16 v21; // [rsp+30h] [rbp-20h]
  void *v22; // [rsp+38h] [rbp-18h] BYREF
  struct tagINTDDEINFO *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF
  int v25; // [rsp+98h] [rbp+48h]

  if ( *a1 == 996 )
  {
    result = xxxCopyAckIn(a1, a2, a3, v23);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
      result = 0;
    if ( result == 2 )
    {
      PopState(a3, gSharedInfo[0]);
      return 2;
    }
  }
  else
  {
    if ( *a1 != 997 )
      return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
    v7 = *a2;
    v8 = *((_QWORD *)a3 + 7);
    v24 = 131;
    DDEFlags = xxxClientGetDDEFlags(v7);
    v21 = DDEFlags;
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0
      || *((_QWORD *)a3 + 7) != v8 )
    {
      return 3;
    }
    if ( (DDEFlags & 0x1000) == 0 )
      return xxxAdviseData(a1, a2, a3);
    result = xxxCopyDdeIn(*a2, &v24, &v22, v23);
    v10 = v23[0];
    v11 = (unsigned __int16)*(_DWORD *)a3;
    v25 = result;
    if ( (*(_BYTE *)((unsigned int)(LODWORD(gSharedInfo[2]) * v11) + gSharedInfo[1] + 25LL) & 1) != 0
      || *((_QWORD *)a3 + 7) != v8 )
    {
      result = 3;
      v25 = 3;
      if ( !v23[0] )
        return result;
      Win32FreePool(v23[0]);
      result = v25;
    }
    if ( result == 2 )
    {
      v12 = *((_WORD *)v10 + 36);
      if ( (v12 & 0xA000) == 0 )
        *((_WORD *)v10 + 36) = v12 | 0x2000;
      if ( (v21 & 0x2000) != 0 )
      {
        if ( IsObjectPublic(*((void **)v10 + 6)) )
        {
          Win32FreePool(v10);
          return 3;
        }
        v14 = GiveObject(
                *((unsigned __int16 *)v10 + 37),
                v13,
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL));
        v15 = v24;
        if ( v14 )
          v15 = v24 | 0x4000;
        v16 = v15 | 0x400;
      }
      else
      {
        v17 = AddPublicObject(
                *((unsigned __int16 *)v10 + 37),
                *((void **)v10 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL));
        v16 = v24;
        if ( v17 )
          v16 = v24 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( v21 < 0 )
      {
        v18 = AnticipatePost(
                *((struct tagDDECONV **)a3 + 4),
                (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                0LL,
                v22,
                v10,
                v16);
      }
      else
      {
        FreeListAdd(a3, v22, v16 & 0xFFFFFFFE);
        v20 = Createpxs(0LL, 0LL, 0LL, v10, v16 | 0x200);
        if ( v20 )
        {
          v19 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
          *((_QWORD *)v20 + 2) = v19;
          v18 = *(void **)v20;
        }
        else
        {
          v18 = 0LL;
        }
      }
      *a2 = v18;
      if ( !v18 )
        return 3;
      PopState(a3, v19);
      return v25;
    }
  }
  return result;
}
