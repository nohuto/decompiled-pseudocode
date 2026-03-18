/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4250
 * Callers:
 *     <none>
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F3514 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F37A0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F40A8 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F49EC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

int __fastcall xxxExecuteAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v3; // zf
  __int64 v8; // r15
  int v9; // edi
  struct tagINTDDEINFO *v10; // rsi
  struct tagXSTATE *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1 == 996;
  v13 = 6145;
  if ( !v3 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn((void *)*a2, &v13, 0LL, &v14);
  v10 = v14;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) == 0
    && *((_QWORD *)a3 + 7) == v8 )
  {
    goto LABEL_7;
  }
  v9 = 3;
  if ( v14 )
  {
    Win32FreePool(v14);
LABEL_7:
    if ( v9 == 2 )
    {
      *((_QWORD *)v10 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
      *((_QWORD *)v10 + 3) = 0LL;
      *((_DWORD *)v10 + 10) = 0;
      *a1 |= 0x80000000;
      v11 = Createpxs(0LL, 0LL, 0LL, v10, 0x201u);
      if ( v11 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        *((_QWORD *)v11 + 2) = v12;
        v11 = *(struct tagXSTATE **)v11;
      }
      *a2 = (__int64)v11;
      if ( v11 )
        PopState(a3, v12);
      else
        return 3;
    }
  }
  return v9;
}
