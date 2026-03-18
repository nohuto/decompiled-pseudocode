/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C0209654 (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020970C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C02097CC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C02098A0 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C0209958 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02099A8 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C0209AAC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0DC (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A624 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A860 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1C021F0AC (xxxClientGetDDEFlags.c)
 */

unsigned int __fastcall xxxRequestAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  __int64 *v4; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  struct tagINTDDEINFO *v10; // rsi
  int v11; // edi
  __int16 v12; // ax
  void *v13; // rdx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagXSTATE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 DDEFlags; // [rsp+30h] [rbp-20h]
  void *v29; // [rsp+38h] [rbp-18h] BYREF
  struct tagINTDDEINFO *v30[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+80h] [rbp+30h] BYREF
  int v32; // [rsp+98h] [rbp+48h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
      (_DWORD)a2,
      14,
      40,
      (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  if ( *a1 != 996 )
  {
    if ( *a1 != 997 )
      return xxxUnexpectedServerPost(a1, v4, a3);
    v7 = *v4;
    v8 = *((_QWORD *)a3 + 7);
    v31 = 131;
    DDEFlags = xxxClientGetDDEFlags(v7);
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v8 )
      return 3;
    if ( (DDEFlags & 0x1000) == 0 )
      return xxxAdviseData(a1, (void **)v4, a3);
    v32 = xxxCopyDdeIn((void *)*v4, &v31, &v29, v30);
    v9 = _HMPheFromObject(a3);
    v10 = v30[0];
    if ( (*(_BYTE *)(v9 + 25) & 1) == 0 && *((_QWORD *)a3 + 7) == v8 )
    {
      v11 = v32;
LABEL_15:
      if ( v11 == 2 )
      {
        v12 = *((_WORD *)v10 + 36);
        if ( (v12 & 0xA000) == 0 )
          *((_WORD *)v10 + 36) = v12 | 0x2000;
        if ( (DDEFlags & 0x2000) != 0 )
        {
          if ( IsObjectPublic(*((void **)v10 + 6)) )
          {
            Win32FreePool(v10);
            return 3;
          }
          v14 = GiveObject(
                  *((unsigned __int16 *)v10 + 37),
                  v13,
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 416LL) + 56LL));
          v17 = v31;
          if ( v14 )
            v17 = v31 | 0x4000;
          v18 = v17 | 0x400;
        }
        else
        {
          v19 = AddPublicObject(
                  *((unsigned __int16 *)v10 + 37),
                  *((void **)v10 + 6),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 416LL) + 56LL));
          v18 = v31;
          if ( v19 )
            v18 = v31 | 0x2000;
        }
        *a1 |= 0x80000000;
        if ( DDEFlags < 0 )
        {
          v20 = AnticipatePost(
                  *((struct tagDDECONV **)a3 + 4),
                  (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                  0LL,
                  v29,
                  v10,
                  v18);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 4;
            WPP_RECORDER_SF_(v16, v15, 14, 41, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
          }
          FreeListAdd((PETHREAD **)a3, v29, v18 & 0xFFFFFFFE);
          v24 = Createpxs(0LL, 0LL, 0LL, v10, v18 | 0x200);
          if ( v24 )
          {
            v21 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
            *((_QWORD *)v24 + 2) = v21;
            v20 = *(void **)v24;
          }
          else
          {
            v20 = 0LL;
          }
        }
        *v4 = (__int64)v20;
        if ( v20 )
        {
          PopState(a3, v21, v22, v23);
          return v32;
        }
        else
        {
          return 3;
        }
      }
      return v11;
    }
    v11 = 3;
    v32 = 3;
    if ( v30[0] )
    {
      Win32FreePool(v30[0]);
      goto LABEL_15;
    }
    return v11;
  }
  v11 = xxxCopyAckIn(a1, (void **)v4, a3, v30);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v11 = 0;
  if ( v11 != 2 )
    return v11;
  PopState(a3, v25, v26, v27);
  return 2;
}
