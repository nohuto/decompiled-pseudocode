/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0DC
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B100 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C0209654 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020970C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C02097CC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C0209958 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02099A8 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A860 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020ACD0 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // r15
  void *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  struct tagINTDDEINFO *v9; // rdi
  __int64 v10; // rcx
  __int16 v11; // cx
  void *v12; // rdx
  int v14; // eax
  int v15; // edx
  struct tagDDECONV *v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  int v19; // eax
  void *v20; // rax
  struct tagXSTATE *v21; // rax
  void *v22; // [rsp+30h] [rbp-38h] BYREF
  struct tagINTDDEINFO *v23; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 29, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v6 = *v4;
  v24 = 131;
  v7 = xxxCopyDdeIn(v6, &v24, &v22, &v23);
  v8 = _HMPheFromObject(a3);
  v9 = v23;
  LOBYTE(v10) = *(_BYTE *)(v8 + 25);
  if ( (v10 & 1) != 0 )
  {
    v7 = 3;
    if ( !v23 )
      return v7;
    Win32FreePool(v23);
  }
  if ( v7 == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        v10,
        4u,
        0xEu,
        0x1Eu,
        (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
        *((unsigned __int16 *)v9 + 36));
    v11 = *((_WORD *)v9 + 36);
    if ( (v11 & 0xA000) == 0 )
    {
      v11 |= 0x2000u;
      *((_WORD *)v9 + 36) = v11;
    }
    if ( (v11 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v9 + 6)) )
      {
        Win32FreePool(v9);
        return 3LL;
      }
      v14 = GiveObject(
              *((unsigned __int16 *)v9 + 37),
              v12,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 416LL) + 56LL));
      v17 = v24;
      if ( v14 )
        v17 = v24 | 0x4000;
      v18 = v17 | 0x400;
    }
    else
    {
      v19 = AddPublicObject(
              *((unsigned __int16 *)v9 + 37),
              *((void **)v9 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 416LL) + 56LL));
      v18 = v24;
      if ( v19 )
        v18 = v24 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v9 + 36) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_((_DWORD)v16, v15, 14, 31, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      xxxFreeDDEHandle(v16, v22, v18 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || (v21 = Createpxs(0LL, 0LL, 0LL, v9, v18 | 0x200)) == 0LL )
      {
        v20 = 0LL;
      }
      else
      {
        *((_QWORD *)v21 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v20 = *(void **)v21;
      }
    }
    else
    {
      v20 = AnticipatePost(
              *((struct tagDDECONV **)a3 + 4),
              (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
              0LL,
              v22,
              v9,
              v18);
    }
    *v4 = v20;
    if ( !v20 )
      return 3;
  }
  return v7;
}
