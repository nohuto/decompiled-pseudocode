/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B2D0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C02093A4 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020945C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020951C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C02096A8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02096F8 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A5B0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020AA20 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // r15
  void *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // edx
  struct tagINTDDEINFO *v10; // rdi
  int v11; // ecx
  __int16 v12; // cx
  void *v13; // rdx
  int v15; // eax
  int v16; // edx
  struct tagDDECONV *v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int v20; // eax
  void *v21; // rax
  struct tagXSTATE *v22; // rax
  void *v23; // [rsp+30h] [rbp-38h] BYREF
  struct tagINTDDEINFO *v24; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 29, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v6 = *v4;
  v25 = 131;
  v7 = xxxCopyDdeIn(v6, &v25, &v23, &v24);
  v8 = _HMPheFromObject(a3);
  v10 = v24;
  LOBYTE(v11) = *(_BYTE *)(v8 + 25);
  if ( (v11 & 1) != 0 )
  {
    v7 = 3;
    if ( !v24 )
      return v7;
    Win32FreePool(v24);
  }
  if ( v7 == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_D(
        v11,
        v9,
        14,
        30,
        (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
        *((_WORD *)v10 + 36));
    }
    v12 = *((_WORD *)v10 + 36);
    if ( (v12 & 0xA000) == 0 )
    {
      v12 |= 0x2000u;
      *((_WORD *)v10 + 36) = v12;
    }
    if ( (v12 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v10 + 6)) )
      {
        Win32FreePool(v10);
        return 3LL;
      }
      v15 = GiveObject(
              *((unsigned __int16 *)v10 + 37),
              v13,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 416LL) + 56LL));
      v18 = v25;
      if ( v15 )
        v18 = v25 | 0x4000;
      v19 = v18 | 0x400;
    }
    else
    {
      v20 = AddPublicObject(
              *((unsigned __int16 *)v10 + 37),
              *((void **)v10 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 416LL) + 56LL));
      v19 = v25;
      if ( v20 )
        v19 = v25 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v10 + 36) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_((_DWORD)v17, v16, 14, 31, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      xxxFreeDDEHandle(v17, v23, v19 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || (v22 = Createpxs(0LL, 0LL, 0LL, v10, v19 | 0x200)) == 0LL )
      {
        v21 = 0LL;
      }
      else
      {
        *((_QWORD *)v22 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v21 = *(void **)v22;
      }
    }
    else
    {
      v21 = AnticipatePost(
              *((struct tagDDECONV **)a3 + 4),
              (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
              0LL,
              v23,
              v10,
              v19);
    }
    *v4 = v21;
    if ( !v21 )
      return 3;
  }
  return v7;
}
