/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A8F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020951C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02097FC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A5B0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B2D0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

int __fastcall xxxExecuteAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  bool v3; // zf
  void **v5; // r14
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // rax
  struct tagINTDDEINFO *v11; // rsi
  struct tagXSTATE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1 == 996;
  v5 = a2;
  v15 = 6145;
  if ( !v3 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 49, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn(*v5, &v15, 0LL, &v16);
  v10 = _HMPheFromObject(a3);
  v11 = v16;
  if ( (*(_BYTE *)(v10 + 25) & 1) == 0 && *((_QWORD *)a3 + 7) == v8 )
    goto LABEL_9;
  v9 = 3;
  if ( v16 )
  {
    Win32FreePool(v16);
LABEL_9:
    if ( v9 == 2 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
      *((_QWORD *)v11 + 3) = 0LL;
      *((_DWORD *)v11 + 10) = 0;
      *a1 |= 0x80000000;
      v12 = Createpxs(0LL, 0LL, 0LL, v11, 0x201u);
      if ( v12 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        *((_QWORD *)v12 + 2) = v13;
        v12 = *(struct tagXSTATE **)v12;
      }
      *v5 = v12;
      if ( v12 )
        PopState(a3, v13, v14);
      else
        return 3;
    }
  }
  return v9;
}
